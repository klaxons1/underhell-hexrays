int *sub_102178C0()
{
  if ( (dword_106C2AD0 & 1) == 0 )
  {
    dword_106C2AD0 |= 1u;
    dword_106C2AB4 = (int)"CRagdollManager";
    dword_106C2ABC = 0;
    dword_106C2AC0 = 0;
    dword_106C2AC4 = 0;
    dword_106C2AC8 = 0;
    dword_106C2ACC = 0;
    dword_106C2AB8 = 15;
    atexit(sub_10473BF0);
  }
  dword_10645BE8 = (int)&dword_1060F348;
  dword_10645BE0 = 6;
  dword_10645BDC = (int)&unk_10645C8C;
  return &dword_10645BDC;
}
