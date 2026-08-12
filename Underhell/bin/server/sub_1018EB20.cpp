void sub_1018EB20()
{
  int v0; // esi
  char *v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  char *v6; // eax
  double v7; // st7
  char Buffer[256]; // [esp+24h] [ebp-104h] BYREF
  float v9; // [esp+124h] [ebp-4h]

  if ( (unsigned __int8)sub_1025EF10() )
  {
    v0 = *(_DWORD *)(dword_106B8370 + 1088);
    if ( v0 )
    {
      sub_1018CCF0(v0, v0, 0);
      if ( *(_BYTE *)(v0 + 48) )
      {
        v1 = sub_1001E280(Buffer, "(%f, %f, %f)", *(float *)(v0 + 28), *(float *)(v0 + 32), *(float *)(v0 + 36) + 36.0);
        DevMsg("Area #%d %s is blocked\n", *(_DWORD *)v0, v1);
      }
    }
    else
    {
      v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      v2 = dword_10632630;
      if ( dword_10632630 != -1 )
      {
        v3 = dword_10632624;
        do
        {
          v4 = 12 * v2;
          v5 = *(_DWORD *)(v4 + v3);
          sub_1018CCF0(v5, v5, 0);
          if ( *(_BYTE *)(v5 + 48) )
          {
            v6 = sub_1001E280(
                   Buffer,
                   "(%f, %f, %f)",
                   *(float *)(v5 + 28),
                   *(float *)(v5 + 32),
                   *(float *)(v5 + 36) + 36.0);
            DevMsg("Area #%d %s is blocked\n", *(_DWORD *)v5, v6);
          }
          v3 = dword_10632624;
          v2 = *(_DWORD *)(v4 + dword_10632624 + 8);
        }
        while ( v2 != -1 );
      }
      v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      DevMsg("nav_check_floor took %2.2f ms\n", (v7 - v9) * 1000.0);
    }
  }
}
