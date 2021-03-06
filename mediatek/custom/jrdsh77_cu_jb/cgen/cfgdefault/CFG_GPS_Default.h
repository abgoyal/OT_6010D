


#ifndef _CFG_GPS_D_H
#define _CFG_GPS_D_H
ap_nvram_gps_config_struct stGPSConfigDefault =
{
    /* "/dev/ttyMT1" */
    {'/','d','e','v','/','s','t','p','g','p','s',0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
    /* 0:s/w, 1:none, 2:h/w */
    1,
    
    /* 26MHz */
    26000000,
    /* 500ppb */
#if defined MTK_GPS_MT6628
    500,
#else
    500,
#endif
    /* 0:16.368MHz TCXO */
    0xFF,
    
    /* 0:mixer-in, 1:internal-LNA */
    0,
    
    /* sbas:0:none */
    0
};
#endif /* _CFG_GPS_D_H */
