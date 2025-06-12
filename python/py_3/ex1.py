fav_languages = ['abc', 'xyz', 'asd', '123']
for language in fav_languages:
    if 'xyz' == language:
        print("xyz in fav_languages")
        break
else:
    print("xyz not in fav_languages")