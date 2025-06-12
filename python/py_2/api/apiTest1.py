import requests  

url = "https://jsonplaceholder.typicode.com/posts"

def fetch_data():
    response = requests.get(url)
    data = response.json()
    print("\nFirst post fetched:")
    print(data[0])

def create_data():
    new_post = {
        "title": "apiTest1",
        "body": "Python API handling!",
        "userId": 1
    }
    response = requests.post(url, json=new_post)
    print("\nNew post created:")
    print(response.json())

def update_data(post_id):
    updated_data = {
        "title": "Updated Title",
        "body": "Updated body content"
    }
    response = requests.put(f"{url}/{post_id}", json=updated_data)
    print("\ndata updated:")
    print(response.json())

def delete_data(post_id):
    response = requests.delete(f"{url}/{post_id}")
    if response.status_code in [200, 204]:
        print(f"\nPost {post_id} deleted successfully!")
    else:
        print(f"\nError deleting post {post_id}.")

fetch_data()
create_data()
update_data(1)
delete_data(1)
