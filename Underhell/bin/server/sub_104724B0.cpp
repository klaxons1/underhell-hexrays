void __cdecl sub_104724B0()
{
  sub_1018EC70(&dword_10632624);
  if ( dword_1063262C >= 0 )
  {
    if ( dword_10632624 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10632624);
      dword_10632624 = 0;
    }
    dword_10632628 = 0;
  }
}
