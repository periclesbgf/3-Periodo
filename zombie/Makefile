prefix = /usr/local

all: src/zumbi

src/zumbi: src/zumbi.c
	@echo "CFLAGS=$(CFLAGS)" | \
		fold -s -w 70 | \
		sed -e 's/^/# /'
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDCFLAGS) -o $@ $^

install: src/zumbi
	install -D src/zumbi \
		$(DESTDIR)$(prefix)/bin/zumbi

clean:
	-rm -f src/zumbi

distclean: clean

unistall:
	-rm -f $(DISTDIR)$(prefix)/bin/zumbi
