int *sub_101FCD40()
{
  if ( (dword_106C0E6C & 1) == 0 )
  {
    dword_106C0E6C |= 1u;
    dword_106C0E50 = (int)"fogplayerparams_t";
    dword_106C0E58 = 0;
    dword_106C0E5C = 0;
    dword_106C0E60 = 0;
    dword_106C0E64 = 0;
    dword_106C0E68 = 0;
    dword_106C0E54 = 17;
    atexit(sub_104736B0);
  }
  dword_1063ED4C = 0;
  dword_1063ED44 = 8;
  dword_1063ED40 = (int)asc_1063EF8C;
  return &dword_1063ED40;
}
