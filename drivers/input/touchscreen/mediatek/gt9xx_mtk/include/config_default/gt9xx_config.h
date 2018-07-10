#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/* ***************************PART2:TODO define********************************** */
/* STEP_1(REQUIRED):Change config table. */
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP {\
}

#define CTP_CFG_GROUP0_NORMAL {\
0x53,0xD0,0x02,0x00,0x05,0x05,0xF5,0xD4,0x21,0x48,0x2D,0x0F,0x5A,0x41,\
0x0E,0x05,0x00,0x00,0x32,0x32,0x20,0x00,0x05,0x14,0x14,0x1A,0x14,0x8A,\
0x2B,0x0C,0xB5,0xB7,0xEB,0x04,0xFF,0xFE,0x00,0x22,0x33,0x10,0x3C,0x80,\
0x00,0x00,0x00,0x1E,0x12,0x41,0x23,0x12,0x5A,0xAA,0xBE,0x4A,0xD5,0x04,\
0x00,0x14,0x19,0x04,0x80,0xAB,0x00,0x7F,0xAF,0x64,0x7E,0xB3,0x00,0x7E,\
0xB7,0x00,0x7B,0xBB,0x3C,0x7B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x08,0x46,\
0x80,0x08,0x0A,0x00,0xA0,0x00,0x3C,0x28,0x19,0x19,0x80,0x11,0x00,0x00,\
0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
0x28,0x00,0x32,0x20,0x00,0x06,0x00,0x00,0x0A,0x66,0x10,0x08,0x0A,0x22,\
0xEB,0x04,0x26,0x24,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,0x12,\
0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,0x02,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x50,0x02,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x28,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0xE6,0x10,0xC8,0x01\
}

#define CTP_CFG_GROUP0_HIGH {\
0x53,0xD0,0x02,0x00,0x05,0x05,0xF5,0xD4,0x01,0x48,0x2D,0x0F,0x50,0x2D,\
0x0E,0x05,0x00,0x00,0x32,0x32,0x20,0x00,0x05,0x14,0x14,0x1A,0x14,0x8A,\
0x2B,0x0C,0xB5,0xB7,0xEB,0x04,0xFF,0xFE,0x00,0x22,0x33,0x10,0x3C,0x80,\
0x00,0x00,0x32,0x32,0x12,0x41,0x23,0x12,0x5A,0xAA,0xBE,0x4A,0xD5,0xF4,\
0x00,0x14,0x28,0x04,0x9A,0xAB,0x00,0x99,0xAF,0x64,0x97,0xB3,0x00,0x97,\
0xB7,0x00,0x94,0xBB,0x3C,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x08,0x46,\
0x80,0x08,0x0A,0x00,0xA0,0x00,0x3C,0x28,0x19,0x19,0x80,0x11,0x00,0x00,\
0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
0x28,0x00,0x32,0x20,0x00,0x06,0x00,0x00,0x0A,0x66,0x10,0x08,0x0A,0x23,\
0xEB,0x04,0x26,0x24,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,0x12,\
0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,0x02,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x50,0x02,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x28,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,\
0xE6,0x10,0x8D,0x01\
}

#define GTP_CFG_GROUP0_CHARGER {\
}

/* TODO puts your group1 config info here,if need. */
#define CTP_CFG_GROUP1 {\
}

/* TODO puts your group2 config info here,if need. */
#define GTP_CFG_GROUP1_CHARGER {\
}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP2 {\
0x42,0xD0,0x02,0x00,0x05,0x05,0xF5,0xD0,0x01,0xCC,0x28,0x0F,0x50,0x32,\
0x0F,0x05,0x00,0x00,0x32,0x32,0x02,0x00,0x0C,0x16,0x18,0x23,0x14,0x8A,\
0x2B,0x0C,0x73,0x75,0x40,0x04,0xFF,0xFE,0x00,0x23,0x32,0x11,0x00,0xC4,\
0x00,0x01,0x05,0x23,0x12,0x31,0x24,0x12,0x5A,0x6C,0xD0,0x54,0xD5,0xF5,\
0x00,0x32,0x19,0x04,0x88,0x73,0x00,0x7B,0x83,0x64,0x6E,0x96,0x20,0x65,\
0xAB,0x00,0x5C,0xC3,0x3C,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x1E,0x41,0x28,0x19,0x19,0x00,0x00,0x00,0x1E,\
0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
0x00,0x00,0x0F,0x14,0x03,0x06,0x10,0x42,0xF8,0x0F,0x10,0x08,0x14,0x53,\
0x40,0x04,0x1F,0x1E,0x20,0x1D,0x21,0x1C,0x22,0x18,0x24,0x16,0x26,0x12,\
0x00,0x10,0x02,0x0F,0x04,0x0C,0x06,0x0A,0x08,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x19,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x78,0x12,0x13,0x28,0x00,0x80,0x0C,0x00,0xA0,0x03,0x1A,0x30,0x01,0x08,\
0xE4,0xFF,0x9C,0x01\
}


/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP2_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP3 {\
}

/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP3_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP4 {\
}

/* TODO puts your group4 config info here,if need. */
#define GTP_CFG_GROUP4_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP5_NORMAL {\
0x52,0xD0,0x02,0x00,0x05,0x05,0xF5,0xD4,0x21,0x48,0x2D,0x0F,0x5A,0x41,\
0x0E,0x05,0x00,0x00,0x32,0x32,0x20,0x00,0x05,0x14,0x14,0x1A,0x14,0x8A,\
0x2B,0x0C,0xB5,0xB7,0xEB,0x04,0xFF,0xFE,0x00,0x22,0x33,0x10,0x3C,0x80,\
0x00,0x00,0x00,0x1E,0x12,0x41,0x23,0x12,0x5A,0xAA,0xBE,0x4A,0xD5,0x04,\
0x00,0x14,0x19,0x04,0x80,0xAB,0x00,0x7F,0xAF,0x64,0x7E,0xB3,0x00,0x7E,\
0xB7,0x00,0x7B,0xBB,0x3C,0x7B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x08,0x46,\
0x80,0x08,0x0A,0x00,0xA0,0x00,0x3C,0x28,0x19,0x19,0x00,0x11,0x00,0x00,\
0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
0x28,0x00,0x32,0x20,0x00,0x06,0x00,0x00,0x0A,0x0F,0x10,0x08,0x0A,0x22,\
0xEB,0x04,0x26,0x24,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,0x12,\
0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,0x02,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x50,0x02,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x28,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0xE6,0x10,0xA0,0x01\
}

#define CTP_CFG_GROUP5_HIGH {\
0x52,0xD0,0x02,0x00,0x05,0x05,0xF5,0xD4,0x01,0x48,0x2D,0x0F,0x50,0x2D,\
0x0E,0x05,0x00,0x00,0x32,0x32,0x20,0x00,0x05,0x14,0x14,0x1A,0x14,0x8A,\
0x2B,0x0C,0xB5,0xB7,0xEB,0x04,0xFF,0xFE,0x00,0x22,0x33,0x10,0x3C,0x80,\
0x00,0x00,0x32,0x32,0x12,0x41,0x23,0x12,0x5A,0xAA,0xBE,0x4A,0xD5,0xF4,\
0x00,0x14,0x28,0x04,0x9A,0xAB,0x00,0x99,0xAF,0x64,0x97,0xB3,0x00,0x97,\
0xB7,0x00,0x94,0xBB,0x3C,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x08,0x46,\
0x80,0x08,0x0A,0x00,0xA0,0x00,0x3C,0x28,0x19,0x19,0x00,0x11,0x00,0x00,\
0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
0x28,0x00,0x32,0x20,0x00,0x06,0x00,0x00,0x0A,0x0F,0x10,0x08,0x0A,0x22,\
0xEB,0x04,0x26,0x24,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,0x12,\
0x10,0x0F,0x0C,0x0A,0x08,0x06,0x04,0x02,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x50,0x02,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x28,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,\
0xE6,0x10,0x66,0x01\
}

/* TODO puts your group5 config info here,if need. */
#define GTP_CFG_GROUP5_CHARGER {\
}


#endif /* _GT1X_CONFIG_H_ */
