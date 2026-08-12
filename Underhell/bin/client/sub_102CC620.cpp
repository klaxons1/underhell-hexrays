void __cdecl sub_102CC620()
{
  sub_10147470((int)dword_103E7ED8);
  LOWORD(dword_103E7ED8[5]) = -1;
  if ( (int)dword_103E7ED8[3] >= 0 )
  {
    if ( dword_103E7ED8[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E7ED8[1]);
      dword_103E7ED8[1] = 0;
    }
    dword_103E7ED8[2] = 0;
  }
  HIWORD(dword_103E7ED8[5]) = -1;
  if ( (int)dword_103E7ED8[3] >= 0 )
  {
    if ( dword_103E7ED8[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103E7ED8[1]);
      dword_103E7ED8[1] = 0;
    }
    dword_103E7ED8[2] = 0;
  }
}
