import sqlite3

conn = sqlite3.connect('yt_videos.db')
cursor = conn.cursor()

cursor.execute('''
    CREATE TABLE IF NOT EXISTS videos (
               id INTEGER PRIMARY KEY,
               name TEXT NOT NULL,
               time TEXT NOT NULL
    )
''')

def list_videos():
    cursor.execute("SELECT * FROM videos")
    for row in cursor.fetchall():
        print(row)

def add_video(name,time):
    cursor.execute("INSERT INTO videos (name,time) VALUES (?,?)",(name,time))
    conn.commit()

def update_video(video_id,new_name,new_time):
    cursor.execute("UPDATE videos SET name = ?, time = ? WHERE id = ?", (new_name, new_time, video_id))
    conn.commit()

def delete_video(video_id):
    cursor.execute("DELETE FROM videos where id = ?", (video_id,)) #do in tupple
    conn.commit()

def main():
    while True:
        print("\n","-"*7,"Youtube Manager(DB) | choose an option" ,"-"*7)
        print("1. List all yt videos")
        print("2. Add a yt video")
        print("3. Update a yt video details")
        print("4. Delete a yt video")
        print("5. Exit")
        choice = input(">Enter your choice : ")

        match choice:
            case '1':
                list_videos()
            case '2':
                name = input("Enter the video name : ")
                time = input("Enter the video time : ")
                add_video(name,time)
            case '3':
                video_id = input("Enter video ID to update : ")
                name = input("Enter the new video name : ")
                time = input("Enter the new video time : ")
                update_video(video_id, name, time)
            case '4':
                video_id = input("Enter video ID to delete: ")
                delete_video(video_id)
            case '5':
                break
            case _:
                print("Invalid Choice")
        
    conn.close()

if __name__ == "__main__":
    main()