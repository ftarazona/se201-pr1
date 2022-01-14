MARGIN_SIZE = 1in
FILE_NAME = test
PDF_ENGINE_I = /usr/local/texlive/2021basic/bin/universal-darwin/pdflatex

.PHONY: compile_L open_L

#-----------------Lucie----------------------------------
compile_L: compile_html	compile_pdf_L

compile_html: 
	pandoc -V geometry:margin=$(MARGIN_SIZE) -s -f markdown+yaml_metadata_block -t html --toc -o $(FILE_NAME).html rapport.md

compile_pdf_L:
	sed -i '156d' $(FILE_NAME).htmL
	pandoc -s -o $(FILE_NAME).pdf $(FILE_NAME).html

open_L:
	atril $(FILE_NAME).pdf

#-----------------Isaie----------------------------------
compile_I : compile_html compile_pdf_I

compile_pdf_I:
	sed -i '156d' $(FILE_NAME).htmL
	pandoc --pdf-engine=$(PDF_ENGINE_I) -s -o $(FILE_NAME).pdf $(FILE_NAME).html

open_I: 
	open $(FILE_NAME).pdf

#-------------------------------------------------------
clean :
	rm $(FILE_NAME).html
	rm $(FILE_NAME).pdf
