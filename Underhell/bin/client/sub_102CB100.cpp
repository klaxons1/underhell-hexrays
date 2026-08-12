void __cdecl sub_102CB100()
{
  sub_100F3270(&dword_103E186C);
  if ( dword_103E1874 >= 0 )
  {
    if ( dword_103E186C )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E186C);
      dword_103E186C = 0;
    }
    dword_103E1870 = 0;
  }
}
