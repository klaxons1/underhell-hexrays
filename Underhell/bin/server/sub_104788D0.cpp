void __cdecl sub_104788D0()
{
  sub_10215D00(&dword_106775DC);
  if ( dword_106775E4 >= 0 )
  {
    if ( dword_106775DC )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106775DC);
      dword_106775DC = 0;
    }
    dword_106775E0 = 0;
  }
}
