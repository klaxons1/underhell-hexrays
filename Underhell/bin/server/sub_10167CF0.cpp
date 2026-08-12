int sub_10167CF0()
{
  int v0; // eax

  v0 = dword_106B4FE0;
  dword_106B4FEC = 0;
  if ( dword_106B4FE8 >= 0 )
  {
    if ( dword_106B4FE0 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106B4FE0);
      v0 = 0;
      dword_106B4FE0 = 0;
    }
    dword_106B4FE4 = 0;
  }
  dword_106B4FF0 = v0;
  return sub_1042F730(&unk_106B4FA4);
}
