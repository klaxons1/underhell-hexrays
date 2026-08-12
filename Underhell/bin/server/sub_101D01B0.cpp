int *sub_101D01B0()
{
  if ( (dword_106BADEC & 1) == 0 )
  {
    dword_106BADEC |= 1u;
    dword_106BADD0 = (int)"CRagdollPropAttached";
    dword_106BADD8 = 0;
    dword_106BADDC = 0;
    dword_106BADE0 = 0;
    dword_106BADE4 = 0;
    dword_106BADE8 = 0;
    dword_106BADD4 = 20;
    atexit(sub_10473110);
  }
  dword_10638D8C = (int)&dword_10638D64;
  if ( (dword_106BADEC & 2) == 0 )
  {
    dword_106BADEC |= 2u;
    dword_10638F90 = sub_101D3250(5);
    dword_10638F94 = 0;
    dword_10638F98 = 0;
    dword_10638F9C = 0;
    dword_10638FA0 = 0;
    dword_10638FA4 = 0;
    dword_10638FA8 = 0;
  }
  dword_10638D84 = 6;
  dword_10638D80 = (int)&unk_10638E74;
  return &dword_10638D80;
}
