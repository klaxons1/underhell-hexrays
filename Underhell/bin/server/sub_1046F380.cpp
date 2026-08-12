void __cdecl sub_1046F380()
{
  bool v0; // sf
  int v1; // eax

  if ( (unsigned __int16)word_106936BE > 1u )
    (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106936C4);
  dword_106936C4 = 0;
  sub_1008A2E0(word_106936A8);
  if ( *(int *)&word_106936A8[4] >= 0 )
  {
    if ( *(_DWORD *)word_106936A8 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)word_106936A8);
      *(_DWORD *)word_106936A8 = 0;
    }
    *(_DWORD *)&word_106936A8[2] = 0;
  }
  v0 = *(int *)&word_106936A8[4] < 0;
  v1 = *(_DWORD *)word_106936A8;
  *(_DWORD *)&word_106936A8[8] = *(_DWORD *)word_106936A8;
  if ( !v0 )
  {
    if ( v1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
      *(_DWORD *)word_106936A8 = 0;
    }
    *(_DWORD *)&word_106936A8[2] = 0;
  }
}
