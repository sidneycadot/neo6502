
hexify.neo : hexify.c neo6502_glue.c
	cl65 -t none --start-addr 0x0200 --ld-args --define,__STACKSTART__=0xfc00 hexify.c neo6502_glue.c -o $@
	./make_neo_executable.py $@ $@

clean :
	$(RM) *.o *.neo
