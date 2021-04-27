stack_test:
	clang -O2 -emit-llvm -c stack_test.c -o - | /usr/local/opt/llvm/bin/llc -march=bpf -filetype=obj -o stack_test.o 

clean:
	rm -rf *.o