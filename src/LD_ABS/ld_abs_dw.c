#include <stdio.h>

struct __sk_buff {
    unsigned long long len;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
	// asm volatile("r0 = *(u8 *)(%0+2)":"=r"(sub+5));
	long long x = (long long) *((long long*)(skb+1));
	asm("r0 = *(u32 *)skb[2]");
	return x;
}