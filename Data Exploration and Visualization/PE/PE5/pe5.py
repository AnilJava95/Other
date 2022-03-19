import pandas as pd
import requests

url = 'http://jsonplaceholder.typicode.com/users'
res = requests.get(url)
print(res)

all_users = res.json()
print(all_users[0])

users = pd.DataFrame(all_users)
print(users)