
FILE = 2017Year/Auguest/*
WORD = "20170809"

push:
	git add $(FILE)

	git commit -am $(WORD)

	git remote add origin https://github.com/whq19930119/summary.git

	git push -u origin master

download:
	git clone https://github.com/whq19930119/summary.git 

