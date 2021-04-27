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
	unsigned char v[496] = "";
	for (int i = 0; i < 496; i++) {
		v[i] = i;
	}
	return v[skb->len2 + 494];
}