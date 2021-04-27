#include <stdio.h>

struct __sk_buff {
    unsigned short len1;
    short len2;
    int pkt_type;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
	short x = (short) *((short*)(skb+1));
	return x;
}