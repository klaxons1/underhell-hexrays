char __cdecl sub_1019DD60(int a1)
{
  int v1; // esi
  int v2; // eax

  LOBYTE(v2) = sub_1025EF10();
  if ( (_BYTE)v2 )
  {
    LOBYTE(v2) = 1;
    if ( *(_DWORD *)a1 == 2 )
      LOBYTE(v2) = atoi(*(const char **)(a1 + 1036)) != 0;
    if ( (_BYTE)v2 != (*(_DWORD *)(dword_106B8370 + 1124) == 4) )
    {
      v1 = dword_106B8370;
      v2 = sub_1025FC50();
      if ( v2 && *(_DWORD *)(v1 + 1124) != 1 && !*(_BYTE *)(v1 + 1168) )
      {
        sub_1023C380((int)"EDIT_TOGGLE_PLACE_MODE", 0.0, 0);
        v2 = *(_DWORD *)(v1 + 1124) != 4 ? 4 : 0;
        *(_DWORD *)(v1 + 1124) = v2;
        *(_DWORD *)(v1 + 1180) = 0;
        *(_DWORD *)(v1 + 1088) = 0;
        *(_DWORD *)(v1 + 1100) = 4;
      }
    }
  }
  return v2;
}
