
MODULE = 00 01 02

EXO = ex00 ex01 ex02 ex03 ex04 ex05

all:
	@for i in $(MODULE); do \
		for n in $(EXO); do \
			if [ -f $$i/$$n/Makefile ]; then \
				$(MAKE) -kj re -C $$i/$$n ; \
			fi \
		done \
  	done

del:
	@for i in $(MODULE); do \
		for n in $(EXO); do \
			if [ -f $$i/$$n/Makefile ]; then \
				$(MAKE) -j fclean -C $$i/$$n ; \
			fi \
		done \
  	done