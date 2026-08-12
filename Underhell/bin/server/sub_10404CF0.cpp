int __cdecl sub_10404CF0(float *a1, float *a2, float a3)
{
  int v3; // esi
  float v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+10h]

  v3 = dword_106F04B0;
  v8 = cos(a3 * 0.017453292);
  if ( !dword_106F04B0 )
    return 0;
  while ( 1 )
  {
    if ( *(_BYTE *)(v3 + 361) && (*(_BYTE *)(v3 + 356) & 4) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v5 = *(float *)(v3 + 580) - *a1;
      v6 = *(float *)(v3 + 584) - a1[1];
      v7 = *(float *)(v3 + 588) - a1[2];
      off_10689714();
      if ( a2[1] * v6 + *a2 * v5 + a2[2] * v7 > v8 )
        break;
    }
    v3 = *(_DWORD *)(v3 + 2132);
    if ( !v3 )
      return 0;
  }
  return v3;
}
