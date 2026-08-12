int *sub_104158B0()
{
  if ( (dword_106F1344 & 1) == 0 )
  {
    dword_106F1344 |= 1u;
    dword_106F1328 = (int)"CConcussiveBlast";
    dword_106F1330 = 0;
    dword_106F1334 = 0;
    dword_106F1338 = 0;
    dword_106F133C = 0;
    dword_106F1340 = 0;
    dword_106F132C = 16;
    atexit(sub_10479D30);
  }
  dword_10688F58 = (int)&dword_1060F348;
  dword_10688F50 = 1;
  dword_10688F4C = (int)&unk_106F12F4;
  return &dword_10688F4C;
}
