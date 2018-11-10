from pyglet.media import Source, Player, load
while True:
    player = Player()
    source = load('1 Phút - Andiez.mp3')
    player.queue(source)
    player.play()

    input('Press any key to exit')
    break
