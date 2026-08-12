void __cdecl sub_102CC650()
{
  sub_1014F210(&off_103E83E0);
  sub_1014E830((int)&off_103E83E0);
  unk_103E83F4 = -1;
  if ( *(int *)&algn_103E83E8[4] >= 0 )
  {
    if ( dword_103E83E4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E83E4);
      dword_103E83E4 = 0;
    }
    *(_DWORD *)algn_103E83E8 = 0;
  }
  unk_103E83F6 = -1;
  if ( *(int *)&algn_103E83E8[4] >= 0 )
  {
    if ( dword_103E83E4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E83E4);
      dword_103E83E4 = 0;
    }
    *(_DWORD *)algn_103E83E8 = 0;
  }
}
