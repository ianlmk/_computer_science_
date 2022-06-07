#!/bin/bash python3

import os
import sys
import requests


url = "https://pokeapi.co/api/v2/pokemon"
payload = ""


response = requests.get("GET", url, data=payload)

data = response.json()

print(data)
