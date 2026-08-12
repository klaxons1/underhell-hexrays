int *sub_10041130()
{
  if ( (dword_10691BE0 & 1) == 0 )
  {
    dword_10691BE0 |= 1u;
    dword_10691BC4 = (int)"ScriptedNPCInteraction_t";
    dword_10691BCC = 0;
    dword_10691BD0 = 0;
    dword_10691BD4 = 0;
    dword_10691BD8 = 0;
    dword_10691BDC = 0;
    dword_10691BC8 = 24;
    atexit(sub_1046EB10);
  }
  dword_105FE184 = 0;
  dword_105FE17C = 15;
  dword_105FE178 = (int)&unk_1060153C;
  return &dword_105FE178;
}
