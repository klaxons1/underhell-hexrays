int *sub_101231A0()
{
  if ( (dword_10437A3C & 1) == 0 )
  {
    dword_10437A3C |= 1u;
    dword_10437A20 = (int)"CCopyRecipientFilter";
    dword_10437A28 = 0;
    dword_10437A2C = 0;
    dword_10437A30 = 0;
    dword_10437A34 = 0;
    dword_10437A38 = 0;
    dword_10437A24 = 20;
    atexit(sub_102CB870);
  }
  dword_103E571C = 0;
  if ( (dword_10437A3C & 2) == 0 )
  {
    dword_10437A3C |= 2u;
    if ( (dword_104379FC & 1) == 0 )
    {
      dword_104379FC |= 1u;
      dword_104379F8 = (int)&CUtlVectorDataOps<CUtlVector<int,CUtlMemory<int,int>>,5>::`vftable';
    }
    dword_103E5A10 = (int)&dword_104379F8;
    dword_103E5A14 = 0;
    dword_103E5A18 = 0;
    dword_103E5A1C = 0;
    dword_103E5A20 = 0;
    dword_103E5A24 = 0;
    dword_103E5A28 = 0;
  }
  dword_103E5714 = 2;
  dword_103E5710 = (int)&unk_103E59C4;
  return &dword_103E5710;
}
