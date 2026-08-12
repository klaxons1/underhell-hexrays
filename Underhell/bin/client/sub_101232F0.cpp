int *sub_101232F0()
{
  if ( (dword_10437A7C & 1) == 0 )
  {
    dword_10437A7C |= 1u;
    dword_10437A60 = (int)"SoundCommand_t";
    dword_10437A68 = 0;
    dword_10437A6C = 0;
    dword_10437A70 = 0;
    dword_10437A74 = 0;
    dword_10437A78 = 0;
    dword_10437A64 = 14;
    atexit(sub_102CB890);
  }
  dword_103E574C = 0;
  dword_103E5744 = 4;
  dword_103E5740 = (int)&unk_103E5DA4;
  return &dword_103E5740;
}
