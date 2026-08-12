int *sub_102B1A40()
{
  if ( (dword_106DBF00 & 1) == 0 )
  {
    dword_106DBF00 |= 1u;
    dword_106DBEE4 = (int)"CHLMachineGun";
    dword_106DBEEC = 0;
    dword_106DBEF0 = 0;
    dword_106DBEF4 = 0;
    dword_106DBEF8 = 0;
    dword_106DBEFC = 0;
    dword_106DBEE8 = 13;
    atexit(sub_10476880);
  }
  dword_10660824 = (int)&dword_106609CC;
  dword_1066081C = 2;
  dword_10660818 = (int)&unk_1066088C;
  return &dword_10660818;
}
