int *sub_10243A40()
{
  if ( (dword_106C5C20 & 1) == 0 )
  {
    dword_106C5C20 |= 1u;
    dword_106C5C04 = (int)"CParticlePerformanceMonitor";
    dword_106C5C0C = 0;
    dword_106C5C10 = 0;
    dword_106C5C14 = 0;
    dword_106C5C18 = 0;
    dword_106C5C1C = 0;
    dword_106C5C08 = 27;
    atexit(sub_10474270);
  }
  dword_1064E264 = (int)&dword_1060F348;
  dword_1064E25C = 6;
  dword_1064E258 = (int)&unk_1064E31C;
  return &dword_1064E258;
}
