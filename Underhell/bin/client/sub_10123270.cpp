int *sub_10123270()
{
  if ( (dword_10437A5C & 1) == 0 )
  {
    dword_10437A5C |= 1u;
    dword_10437A40 = (int)"CSoundPatch";
    dword_10437A48 = 0;
    dword_10437A4C = 0;
    dword_10437A50 = 0;
    dword_10437A54 = 0;
    dword_10437A58 = 0;
    dword_10437A44 = 11;
    atexit(sub_102CB880);
  }
  dword_103E5734 = 0;
  dword_103E572C = 15;
  dword_103E5728 = (int)&unk_103E5A64;
  return &dword_103E5728;
}
