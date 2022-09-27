"""Необходимо спарсить данные о вакансиях python разработчиков с сайта hh.ru, введя в поиск “python разработчик” и указав, что мы рассматриваем все регионы. Необходимо спарсить:

    Название вакансии
    Требуемый опыт работы
    Заработную плату
    Регион
"""
import requests
import json
import time
import os
import pandas as pd
search_string = "python разработчик"
total_page = 100
all_vac = []
for i in range(1000):
    url = 'https://api.hh.ru/vacancies'
    params = {'text': search_string, 'area':'113','per_page':'40', 'page':i}
    r = requests.get(url, params=params)
    all_items=r.json()
    for item in all_items["items"]:
        currency = "Не указана"
        min_sal = -1
        max_sal = -1
        if "salary" in item and item["salary"] is not None:
            if "from" in item["salary"]: 
                min_sal = item["salary"]["from"]
            if "to" in item["salary"]:
                max_sal = item["salary"]["from"]
            currency = item['salary']['currency']
        url_about_vac = f'https://api.hh.ru/vacancies/{item["id"]}'
        r = requests.get(url_about_vac)
        vac = r.json()
        if "experience" in vac:
            exp = vac["experience"]["name"]
        else: exp = "Не указано"
       
        salary = f"{min_sal} - {max_sal} {currency}"
        one_vac = {"title":item["name"],"work experience":exp,"salary":salary,"region":item["area"]["name"]}
        all_vac.append(one_vac)
js_string = json.dumps({"data":all_vac})
print(js_string)
