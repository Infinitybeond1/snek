import nico,
       nico/vec,
       random,
       tables,
       math

const orgName = "Infinitybeond1"
const appName = "snek"
const accel = 32
const tileSize = 8
const win = (width: 128, height: 128)
const directions = {
  "up": @[0, -1],
  "down": @[0, 1],
  "left": @[-1, 0],
  "right": @[1, 0]
}.toTable()

type Obj = ref object
  pos: Vec2i

type Direction = enum
  up
  down
  left
  right

var head: Obj
var fruit: Obj
var fruitLoc: tuple[xc: int, yc: int]
var direction: Direction
var score: int = 0
let multiples = [24, 32, 40, 48, 56, 64, 72, 80, 88, 96, 104]

proc draw(self: Obj, idx: int) =
  spr(idx, self.pos.x, self.pos.y)

proc drawFruit(loc: var tuple[xc: int, yc: int]) = 
  let c = (xc: sample(multiples), yc: sample(multiples))
  fruit.pos.x = c.xc + tileSize
  fruit.pos.y = c.yc + tileSize
  loc = c
  
proc getDistance(pos1: seq[int], pos2: seq[int]): float = 
    var 
      x1 = pos1[0]
      y1 = pos1[1]
      x2 = pos2[0]
      y2 = pos2[1]
    var distance = sqrt(((y2 - y1) ^ 2 + (x2 - x1) ^ 2))
    return distance

proc checkKeys(direction: var Direction) =
  if btn(pcUp) or keyp(K_w):
    if direction != down:  
      direction = up
  elif btn(pcDown) or keyp(K_s):
    if direction != up:  
      direction = down
  elif btn(pcLeft) or keyp(K_a):
    if direction != right: 
      direction = left
  elif btn(pcRight) or keyp(K_d):
    if direction != left:
      direction = right
  elif keyp(K_q):
    shutdown()

proc move(self: Obj, direction: Direction) =
  let coord = directions[$direction]
  self.pos.x += coord[0]
  self.pos.y += coord[1]

proc gameOver() = 
  shutdown()

proc checkOut(self: Obj) = 
  let m = mget(self.pos.x div tileSize, self.pos.y div tileSize)
  if m == 1:
    gameOver()

proc checkOverlap(snake, fruit: Obj) =
  if getDistance(@[snake.pos.x, snake.pos.y], @[fruit.pos.x, fruit.pos.y]) <= tileSize:
    inc score
    drawFruit(fruitLoc)

# Game functions
proc gameInit() =
  loadSpriteSheet(0, "sprites.png", 8, 8)
  loadMap(0, "map.json")
  loadFont(0, "font.png")
  setMap(0)
  head = Obj(
    pos: vec2i(64, 64)
  )
  direction = up
  randomize()
  fruitLoc = (xc: sample(multiples), yc: sample(multiples))
  fruit = Obj(
    pos: vec2i(fruitLoc.xc, fruitLoc.yc)
  )

proc gameUpdate(dt: float32) =
  checkKeys(direction)
  head.move(direction)
  head.checkOut()
  head.draw(16)
  checkOverlap(head, fruit)

proc gameDraw() =
  cls()
  mapDraw(0, 0, 16, 16, 0, 0)
  head.draw(16)
  fruit.draw(18)
  setColor(3)
  printc($score, 64, 16)

nico.init(orgName, appName)
nico.createWindow(appName, win.width, win.height, 4, false)
nico.run(gameInit, gameUpdate, gameDraw)
