void __cdecl sub_104712E0()
{
  sub_10215D00(&dword_10625150);
  if ( dword_10625158 >= 0 )
  {
    if ( dword_10625150 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10625150);
      dword_10625150 = 0;
    }
    dword_10625154 = 0;
  }
}
