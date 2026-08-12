int *sub_10188570()
{
  if ( (dword_106B6E80 & 1) == 0 )
  {
    dword_106B6E80 |= 1u;
    dword_106B6E64 = (int)&CMoveHelperServer::`vftable';
    dword_106B6E6C = 0;
    dword_106B6E70 = 128;
    dword_106B6E74 = 0;
    dword_106B6E6C = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 12288);
    dword_106B6E78 = 0;
    dword_106B6E7C = dword_106B6E6C;
    dword_106B6E68 = 0;
    dword_106B6E60 = (int)&dword_106B6E64;
    atexit(sub_10472180);
  }
  return &dword_106B6E64;
}
