int sub_10234DB0()
{
  int v0; // ebx
  int i; // edi
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edi

  v0 = 1;
  for ( i = 0; v0 <= *(_DWORD *)(dword_106B31C8 + 20); ++v0 )
  {
    v2 = (_DWORD *)sub_1025FB50(v0);
    v3 = (int)v2;
    if ( v2 && (v2[64] & 0x100) != 0 )
    {
      v4 = sub_100D8840(v2) + i;
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v5 = (int)*(float *)(v3 + 580) + v4;
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      i = (int)*(float *)(v3 + 584) + v5;
    }
  }
  return i;
}
