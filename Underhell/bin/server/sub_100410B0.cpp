int *sub_100410B0()
{
  if ( (dword_10691BC0 & 1) == 0 )
  {
    dword_10691BC0 |= 1u;
    dword_10691BA4 = (int)"ScriptedNPCInteraction_Phases_t";
    dword_10691BAC = 0;
    dword_10691BB0 = 0;
    dword_10691BB4 = 0;
    dword_10691BB8 = 0;
    dword_10691BBC = 0;
    dword_10691BA8 = 31;
    atexit(sub_1046EB00);
  }
  dword_105FE16C = 0;
  dword_105FE164 = 2;
  dword_105FE160 = (int)&unk_1060149C;
  return &dword_105FE160;
}
