from __future__ import unicode_literals
import youtube_dl

ydl_opts = {}
with youtube_dl.YoutubeDL(ydl_opts) as ydl:
   r = ydl.extract_info('https://www.youtube.com/watch?v=GIDoQsQyS0s',False) 
    
import json
with open('finalhack3.json', 'w') as outfile:
    json.dump(r, outfile)