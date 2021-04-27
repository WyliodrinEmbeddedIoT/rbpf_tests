#include <stdio.h>

struct __sk_buff {
    char len1;
    char len2;
    char len3;
    char len4;
    int pkt_type;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
    char x = (char) *((char*)(skb+1));
	return x;
}