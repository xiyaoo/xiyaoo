GCCk.o:GCCk.c
	gcc -trigraphs -g GCCk.c -o GCCk.o
	
c:
	rm -rf *.o
	
ch: 
	chmod 777 GCCk.o