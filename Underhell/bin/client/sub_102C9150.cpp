void __cdecl sub_102C9150()
{
  sub_1007AFD0(&dword_103DC874);
  if ( dword_103DC87C >= 0 )
  {
    if ( dword_103DC874 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103DC874);
      dword_103DC874 = 0;
    }
    dword_103DC878 = 0;
  }
}
