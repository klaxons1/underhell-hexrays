int *sub_102B1AC0()
{
  if ( (dword_106DBF20 & 1) == 0 )
  {
    dword_106DBF20 |= 1u;
    dword_106DBF04 = (int)"CHLSelectFireMachineGun";
    dword_106DBF0C = 0;
    dword_106DBF10 = 0;
    dword_106DBF14 = 0;
    dword_106DBF18 = 0;
    dword_106DBF1C = 0;
    dword_106DBF08 = 23;
    atexit(sub_10476890);
  }
  dword_10660840 = (int)&dword_10660818;
  if ( (dword_106DBF20 & 2) == 0 )
  {
    dword_106DBF20 |= 2u;
    dword_10660998 = (int)sub_100390B0((char **)&dword_106DBF04, "BurstThink");
    dword_1066099C = 0;
    dword_106609A0 = 0;
    dword_106609A4 = 2097153;
    dword_106609A8 = 0;
    dword_106609AC = 0;
    dword_106609B0 = (int)sub_102B1880;
    dword_106609B4 = 0;
    dword_106609B8 = 0;
    dword_106609BC = 0;
    dword_106609C0 = 0;
    dword_106609C4 = 0;
  }
  dword_10660838 = 3;
  dword_10660834 = (int)&unk_1066092C;
  return &dword_10660834;
}
