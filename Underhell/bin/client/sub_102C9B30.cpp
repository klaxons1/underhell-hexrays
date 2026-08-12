void __cdecl sub_102C9B30()
{
  sub_100EC500(&dword_1042F804);
  if ( dword_1042F80C >= 0 )
  {
    if ( dword_1042F804 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1042F804);
      dword_1042F804 = 0;
    }
    dword_1042F808 = 0;
  }
  sub_100D3300(dword_1042F7F8);
}
