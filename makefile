FILE = plano-tcc
BIB = plano-tcc

.PHONY: $(FILE).pdf

$(FILE).pdf: $(FILE).tex
	pdflatex $(FILE).tex

run:
	pdflatex $(FILE).tex
	open $(FILE).pdf

open:
	open $(FILE).pdf

bib:
	$(MAKE)
	bibtex $(BIB)
	$(MAKE)
	$(MAKE)

clean:
	$(RM) $(FILE).pdf
	$(RM) $(FILE).aux
	$(RM) $(FILE).log
	$(RM) $(FILE).toc


