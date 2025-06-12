import json

def load_data():
    try:
        with open('ytData.txt','r') as file:
            test = json.load(file)
            return test
    except FileNotFoundError:
        return []

def save_data_helper(videos):
    with open('ytData.txt','w') as file:
        json.dump(videos, file)

def list_all_videos(videos):
    print("\n","."*30,"List all videos","."*30)

    for index, video in enumerate(videos, start=1):
        print(f"{index}.{video['name']}, Duration : {video['time']}")
    
    print("\n","."*(60+len(" list all videos ")))
    

def add_videos(videos):
    name = input(">Enter video name : ")
    time = input(">Enter video duration : ")
    videos.append({'name':name,'time':time})
    save_data_helper(videos)

def update_video(videos):
    print("\n","."*30,"update video","."*30)
    list_all_videos(videos)
    index = int(input(">Enter the video index to update : "))
    if 1 <= index <= len(videos):
        name = input("\t>Enter the new video name : ")
        time = input("\t>Enter the new video duration : ")
        videos[index-1] = {'name':name, 'time': time}
        save_data_helper(videos)
    else:
        print("Invalid index selected")
    print("\n","."*(60+len(" update video ")))

def delete_video(videos):
    print("\n","x"*30,"delete video","x"*30)
    index = int(input(">Enter the video index to be deleted : "))
    if 1 <= index <= len(videos):
        del videos[index-1]
        save_data_helper(videos)
    else:
        print("Invalid index selected")
    print("\n","x"*(60+len(" delete video ")))

def main():
    videos = load_data()
    while True:
        print("\n","-"*7,"Youtube Manager | choose an option" ,"-"*7)
        print("1. List all yt videos")
        print("2. Add a yt video")
        print("3. Update a yt video details")
        print("4. Delete a yt video")
        print("5. Exit")
        choice = input(">Enter your choice : ")

        match choice:
            case '1':
                list_all_videos(videos)
            case '2':
                add_videos(videos)
            case '3':
                update_video(videos)
            case '4':
                delete_video(videos)
            case '5':
                break
            case _:
                print("Invalid Choice")

if __name__ == "__main__":
    main()