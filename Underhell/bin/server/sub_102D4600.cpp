int *sub_102D4600()
{
  if ( (dword_106DE648 & 1) == 0 )
  {
    dword_106DE648 |= 1u;
    dword_106DE62C = (int)"CGrenadeAR2";
    dword_106DE634 = 0;
    dword_106DE638 = 0;
    dword_106DE63C = 0;
    dword_106DE640 = 0;
    dword_106DE644 = 0;
    dword_106DE630 = 11;
    atexit(sub_10476CD0);
  }
  dword_10665380 = (int)&dword_106121C8;
  if ( (dword_106DE648 & 2) == 0 )
  {
    dword_106DE648 |= 2u;
    dword_106654B4 = (int)sub_100390B0((char **)&dword_106DE62C, "GrenadeAR2Touch");
    word_106654C0 = 1;
    word_106654C2 = 32;
    dword_106654B8 = 0;
    dword_106654BC = 0;
    dword_106654C4 = 0;
    dword_106654C8 = 0;
    dword_106654CC = (int)sub_102D3C00;
    dword_106654D0 = 0;
    dword_106654D4 = 0;
    dword_106654D8 = 0;
    dword_106654DC = 0;
    dword_106654E0 = 0;
    dword_106654E4 = 0;
    dword_106654E8 = (int)sub_100390B0((char **)&dword_106DE62C, "GrenadeAR2Think");
    dword_106654EC = 0;
    dword_106654F0 = 0;
    dword_106654F4 = 2097153;
    dword_106654F8 = 0;
    dword_106654FC = 0;
    dword_10665500 = (int)sub_102D3A40;
    dword_10665504 = 0;
    dword_10665508 = 0;
    dword_1066550C = 0;
    dword_10665510 = 0;
    dword_10665514 = 0;
  }
  dword_10665378 = 5;
  dword_10665374 = (int)asc_10665414;
  return &dword_10665374;
}
