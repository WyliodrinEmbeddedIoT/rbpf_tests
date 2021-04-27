#include <stdio.h>

struct __sk_buff {
    unsigned int len;
    int pkt_type;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
	int x = (int) *((int*)(skb+1));
	return x;
}