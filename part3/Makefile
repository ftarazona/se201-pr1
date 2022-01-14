MARGIN_SIZE = 0.2in
FILE_NAME = diagram
INPUT = diagram_3_1.md
PDF_ENGINE_I = /usr/local/texlive/2021basic/bin/universal-darwin/pdflatex

compile:
	pandoc -V geometry:margin=$(MARGIN_SIZE) --pdf-engine=$(PDF_ENGINE_I) -o $(FILE_NAME).pdf $(INPUT)

open: compile
	open $(FILE_NAME).pdf

clean :
	rm $(FILE_NAME).pdf
