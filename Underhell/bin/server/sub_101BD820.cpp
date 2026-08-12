int *sub_101BD820()
{
  if ( (dword_106BA468 & 1) == 0 )
  {
    dword_106BA468 |= 1u;
    dword_106BA44C = (int)"CBoneFollowerManager";
    dword_106BA454 = 0;
    dword_106BA458 = 0;
    dword_106BA45C = 0;
    dword_106BA460 = 0;
    dword_106BA464 = 0;
    dword_106BA450 = 20;
    atexit(sub_10472F30);
  }
  dword_10637AA8 = 0;
  if ( (dword_106BA468 & 2) == 0 )
  {
    dword_106BA468 |= 2u;
    if ( (dword_106BA428 & 1) == 0 )
    {
      dword_106BA428 |= 1u;
      dword_106BA424 = (int)&CUtlVectorDataOps<CUtlVector<physfollower_t,CUtlMemory<physfollower_t,int>>,10>::`vftable';
    }
    dword_10637CB8 = (int)&dword_106BA424;
    dword_10637CBC = 0;
    dword_10637CC0 = 0;
    dword_10637CC4 = 0;
    dword_10637CC8 = 0;
    dword_10637CCC = 0;
    dword_10637CD0 = 0;
  }
  dword_10637AA0 = 2;
  dword_10637A9C = (int)&unk_10637C6C;
  return &dword_10637A9C;
}
