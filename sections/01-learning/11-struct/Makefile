SUBDIRS:= struct1 struct2 struct3

.PHONY: all $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) --directory $@ 

clean:
	for d in $(SUBDIRS);\
	do\
	  $(MAKE) --directory=$$d clean;\
	done
