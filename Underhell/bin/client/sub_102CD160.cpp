void __cdecl sub_102CD160()
{
  sub_1009C990(&dword_103E9D04);
  if ( dword_103E9D0C >= 0 )
  {
    if ( dword_103E9D04 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E9D04);
      dword_103E9D04 = 0;
    }
    dword_103E9D08 = 0;
  }
}
