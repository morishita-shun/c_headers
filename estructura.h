/* linux/ip.h */
struct iphdr {
    uchar  ihl_version;     // version(4) + ihl(4)
    uchar  tos;
    ushort tot_len;
    ushort id;
    ushort frag_off;
    uchar  ttl;
    uchar  protocol;
    ushort check;
    uint   saddr;
    uint   daddr;
};

/* linux/tcp.h */
struct tcphdr {
    ushort source;
    ushort dest;
    uint   seq;
    uint   ack_seq;
    uchar  doff_res;
    uchar  flags;
    ushort window;
    ushort check;
    ushort urg_ptr;
};

/* mirai/scanner.c */
struct rawpkt {
    struct iphdr iph;
    struct tcphdr tcph;
};

/* mirai/table.h */
struct table_value_m68k {
    char *val;
    ushort val_len;
};
struct table_value_32bit {
    char *val;
    ushort val_len;
    ushort padding;
};
struct table_value_64bit {
    char *val;
    ushort val_len;
    ushort padding1;
    ushort padding2;
    ushort padding3;
};
