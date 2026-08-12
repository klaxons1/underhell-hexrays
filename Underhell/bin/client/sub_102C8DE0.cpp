void __cdecl sub_102C8DE0()
{
  sub_100F3270(&dword_103DBBD8);
  if ( dword_103DBBE0 >= 0 )
  {
    if ( dword_103DBBD8 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103DBBD8);
      dword_103DBBD8 = 0;
    }
    dword_103DBBDC = 0;
  }
}
