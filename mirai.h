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
