void __cdecl sub_102C8590()
{
  sub_100EC500(&dword_103D8A98);
  if ( dword_103D8AA0 >= 0 )
  {
    if ( dword_103D8A98 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103D8A98);
      dword_103D8A98 = 0;
    }
    dword_103D8A9C = 0;
  }
}
