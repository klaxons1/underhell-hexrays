int *sub_101A75F0()
{
  if ( (dword_1044C96C & 1) == 0 )
  {
    dword_1044C96C |= 1u;
    dword_1044C950 = (int)"CEnvHeadcrabCanisterShared";
    dword_1044C958 = 0;
    dword_1044C95C = 0;
    dword_1044C960 = 0;
    dword_1044C964 = 0;
    dword_1044C968 = 0;
    dword_1044C954 = 26;
    atexit(sub_102CDD50);
  }
  dword_103ECA5C = 0;
  dword_103ECA54 = 17;
  dword_103ECA50 = (int)&unk_103ECACC;
  return &dword_103ECA50;
}
