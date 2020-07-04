"""
d = {
    1:(4, 2, 3),
    2:(4, 6, 3),
    3:()
}
"""
d = [
    [   5],
    [4, 1, 3, 6],
    [   2],
]
x = 1
y = 1
p = d[1][1]
def turn(w){
    if w=='r':
        try:
            y += 1
            d[x][y]
        except:
            y = 0
    if w=='d':
        try:
            x += 1
            d[x][y]
        except:
            x = 0
    if w=='l':
        try:
            x -= 1
            d[x][y]
        except:
            if y==1:
                x = 3
            else:
                x = 1
}