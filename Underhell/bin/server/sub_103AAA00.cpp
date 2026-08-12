int *sub_103AAA00()
{
  if ( (dword_106EAC1C & 1) == 0 )
  {
    dword_106EAC1C |= 1u;
    dword_106EAC00 = (int)"CNPC_ClawScanner";
    dword_106EAC08 = 0;
    dword_106EAC0C = 0;
    dword_106EAC10 = 0;
    dword_106EAC14 = 0;
    dword_106EAC18 = 0;
    dword_106EAC04 = 16;
    atexit(sub_10478A40);
  }
  dword_10678E50 = (int)&dword_10678E20;
  dword_10678E48 = 1;
  dword_10678E44 = (int)&unk_106EABCC;
  return &dword_10678E44;
}
