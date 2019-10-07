# This program will scrape a news website (Inshorts) and fetch headlines from it

import requests
from bs4 import BeautifulSoup


def print_headlines(response_text):
    soup = BeautifulSoup(response_text, 'lxml')
    headlines = soup.find_all(attrs={"itemprop": "headline"})
    for headline in headlines:
        print(headline.text)


url = 'https://inshorts.com/en/read'
response = requests.get(url)
print_headlines(response.text)
