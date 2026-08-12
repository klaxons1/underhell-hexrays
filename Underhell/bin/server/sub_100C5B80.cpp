int *sub_100C5B80()
{
  if ( (dword_10696688 & 1) == 0 )
  {
    dword_10696688 |= 1u;
    dword_1069666C = (int)"CBaseAnimatingOverlay";
    dword_10696674 = 0;
    dword_10696678 = 0;
    dword_1069667C = 0;
    dword_10696680 = 0;
    dword_10696684 = 0;
    dword_10696670 = 21;
    atexit(sub_1046F980);
  }
  dword_1060DB90 = (int)&dword_1060D0FC;
  if ( (dword_10696688 & 2) == 0 )
  {
    dword_10696688 |= 2u;
    if ( (dword_106965A8 & 1) == 0 )
    {
      dword_106965A8 |= 1u;
      dword_106965A4 = (int)&CUtlVectorDataOps<CUtlVector<CAnimationLayer,CUtlMemory<CAnimationLayer,int>>,10>::`vftable';
    }
    dword_1060E07C = (int)&dword_106965A4;
    dword_1060E080 = 0;
    dword_1060E084 = 0;
    dword_1060E088 = 0;
    dword_1060E08C = 0;
    dword_1060E090 = 0;
    dword_1060E094 = 0;
  }
  dword_1060DB88 = 1;
  dword_1060DB84 = (int)&unk_1060E064;
  return &dword_1060DB84;
}
