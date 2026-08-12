int *sub_100AAAC0()
{
  if ( (dword_10695034 & 1) == 0 )
  {
    dword_10695034 |= 1u;
    dword_10695018 = (int)"CAI_ProxTester";
    dword_10695020 = 0;
    dword_10695024 = 0;
    dword_10695028 = 0;
    dword_1069502C = 0;
    dword_10695030 = 0;
    dword_1069501C = 14;
    atexit(sub_1046F570);
  }
  dword_1060AC1C = 0;
  dword_1060AC14 = 2;
  dword_1060AC10 = (int)&unk_1060AE5C;
  return &dword_1060AC10;
}
