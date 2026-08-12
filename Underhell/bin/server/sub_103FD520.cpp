int *sub_103FD520()
{
  if ( (dword_106F0328 & 1) == 0 )
  {
    dword_106F0328 |= 1u;
    dword_106F030C = (int)"thrown_objects_t";
    dword_106F0314 = 0;
    dword_106F0318 = 0;
    dword_106F031C = 0;
    dword_106F0320 = 0;
    dword_106F0324 = 0;
    dword_106F0310 = 16;
    atexit(sub_10479920);
  }
  dword_10685658 = 0;
  dword_10685650 = 2;
  dword_1068564C = (int)&unk_10685F0C;
  return &dword_1068564C;
}
