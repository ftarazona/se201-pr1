MARGIN_SIZE = 1in
FILE_NAME = output.pdf
PDF_ENGINE_I = /usr/local/texlive/2021basic/bin/universal-darwin/pdflatex

.PHONY: open compile clean


open : compile
	open $(FILE_NAME)

compile :
	pandoc -V geometry:margin=$(MARGIN_SIZE) --pdf-engine=$(PDF_ENGINE_I) -o $(FILE_NAME) rapport.md

clean :
	rm $(FILE_NAME)