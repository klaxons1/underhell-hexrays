int *sub_102731E0()
{
  if ( (dword_106CFC94 & 1) == 0 )
  {
    dword_106CFC94 |= 1u;
    dword_106CFC78 = (int)"CWaterLODControl";
    dword_106CFC80 = 0;
    dword_106CFC84 = 0;
    dword_106CFC88 = 0;
    dword_106CFC8C = 0;
    dword_106CFC90 = 0;
    dword_106CFC7C = 16;
    atexit(sub_10474C40);
  }
  dword_106561B4 = (int)&dword_1060F348;
  dword_106561AC = 4;
  dword_106561A8 = (int)&unk_10656254;
  return &dword_106561A8;
}
