all: ld_st_b_reg ld_st_h_reg ld_st_w_reg ld_st_dw_reg

ld_st_b_reg:
	clang -O2 -emit-llvm -c ld_st_b_reg.c -o - | /usr/local/opt/llvm/bin/llc -march=bpf -filetype=obj -o ld_st_b_reg.o 

ld_st_h_reg:
	clang -O2 -emit-llvm -c ld_st_h_reg.c -o - | /usr/local/opt/llvm/bin/llc -march=bpf -filetype=obj -o ld_st_h_reg.o 

ld_st_w_reg:
	clang -O2 -emit-llvm -c ld_st_w_reg.c -o - | /usr/local/opt/llvm/bin/llc -march=bpf -filetype=obj -o ld_st_w_reg.o 

ld_st_dw_reg:
	clang -O2 -emit-llvm -c ld_st_dw_reg.c -o - | /usr/local/opt/llvm/bin/llc -march=bpf -filetype=obj -o ld_st_dw_reg.o 

clean:
	rm -rf *.o