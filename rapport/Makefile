MARGIN_SIZE = 1in
FILE_NAME = rapport
INPUT = rapport.md
PDF_ENGINE_I = /usr/local/texlive/2021basic/bin/universal-darwin/pdflatex

compile: $(INPUT)
	pandoc -V geometry:margin=$(MARGIN_SIZE) --pdf-engine=$(PDF_ENGINE_I) -o $(FILE_NAME).pdf $(INPUT)

open: compile
	open $(FILE_NAME).pdf

clean :
	rm $(FILE_NAME).pdf
