from youtube_dl import YoutubeDL
import json
options = {
    'default_search': 'ytsearch5'
}

ydl = YoutubeDL(options)
search_result = ydl.extract_info('that girl', False)
print(search_result)
with open("search_result.json", "w") as out:
    json.dump(search_result, out)