void __cdecl sub_102C8540()
{
  sub_100EC500(&dword_103D8A7C);
  if ( dword_103D8A84 >= 0 )
  {
    if ( dword_103D8A7C )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103D8A7C);
      dword_103D8A7C = 0;
    }
    dword_103D8A80 = 0;
  }
}
