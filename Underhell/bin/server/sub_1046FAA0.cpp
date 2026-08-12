void __cdecl sub_1046FAA0()
{
  sub_10215D00(&dword_10696C04);
  if ( dword_10696C0C >= 0 )
  {
    if ( dword_10696C04 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10696C04);
      dword_10696C04 = 0;
    }
    dword_10696C08 = 0;
  }
  sub_10170140(dword_10696BF8);
}
