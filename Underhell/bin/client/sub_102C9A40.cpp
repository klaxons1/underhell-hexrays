void __cdecl sub_102C9A40()
{
  dword_1042F62C = (int)&CUserCmd::`vftable';
  sub_1011A810(dword_1042F66C);
  if ( dword_1042F5F4 >= 0 )
  {
    if ( dword_1042F5EC )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1042F5EC);
      dword_1042F5EC = 0;
    }
    dword_1042F5F0 = 0;
  }
  sub_100D3350(flt_1042EC68);
}
