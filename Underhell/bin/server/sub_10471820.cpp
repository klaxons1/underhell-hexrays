void __cdecl sub_10471820()
{
  sub_101357D0(&dword_10627CF4);
  if ( dword_10627CFC >= 0 )
  {
    if ( dword_10627CF4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10627CF4);
      dword_10627CF4 = 0;
    }
    dword_10627CF8 = 0;
  }
}
