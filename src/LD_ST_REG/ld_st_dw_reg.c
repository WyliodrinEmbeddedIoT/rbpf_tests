#include <stdio.h>

struct __sk_buff {
    long long len;
    int mark;
    int ifindex;
    int queue_mapping;
};

#define SEC(NAME) __attribute__((section(NAME), used))
SEC("segment,.classifier")
unsigned long long sample_func(struct __sk_buff *skb) {
	unsigned long long first = 2 * skb->len + 2;
	skb->len = first;
	return skb->len;
}