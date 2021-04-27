#include <stdio.h>

struct __sk_buff {
    short len1;
    short len2;
    int pkt_type;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
	int first = 2 * skb->len1 + 2;
	skb->len1 = first;
	return skb->len1;
}