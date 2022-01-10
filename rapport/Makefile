MARGIN_SIZE = 1in
FILE_NAME = output.pdf

.PHONY: open compile clean


open : compile
	open $(FILE_NAME)

compile :
	pandoc -V geometry:margin=$(MARGIN_SIZE) --pdf-engine=/usr/local/texlive/2021basic/bin/universal-darwin/pdflatex -o $(FILE_NAME) rapport.md

clean :
	rm $(FILE_NAME)