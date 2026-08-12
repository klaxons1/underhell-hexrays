void __cdecl sub_102C9210()
{
  off_103DCCF8 = &CClientThinkList::`vftable';
  sub_1011A810(dword_103DCD2C);
  sub_1011A810(dword_103DCD18);
  sub_10079950(&dword_103DCCFC);
  if ( dword_103DCD04 >= 0 )
  {
    if ( dword_103DCCFC )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103DCCFC);
      dword_103DCCFC = 0;
    }
    dword_103DCD00 = 0;
  }
  sub_100D3350(&off_103DCCF8);
}
