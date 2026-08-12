void __cdecl sub_1046FA80()
{
  sub_100CB8F0((int)&dword_1060E0D0);
  word_1060E0E4 = -1;
  if ( *(int *)&algn_1060E0D8[4] >= 0 )
  {
    if ( dword_1060E0D4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1060E0D4);
      dword_1060E0D4 = 0;
    }
    *(_DWORD *)algn_1060E0D8 = 0;
  }
  unk_1060E0E6 = -1;
  if ( *(int *)&algn_1060E0D8[4] >= 0 )
  {
    if ( dword_1060E0D4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1060E0D4);
      dword_1060E0D4 = 0;
    }
    *(_DWORD *)algn_1060E0D8 = 0;
  }
}
