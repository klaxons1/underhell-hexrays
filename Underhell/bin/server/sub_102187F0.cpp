char __cdecl sub_102187F0(int a1)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // [esp+10h] [ebp-Ch] BYREF
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  if ( byte_106C2B08 )
    return 1;
  v2 = sub_10261B20();
  if ( sub_10262560(*(_DWORD *)(a1 + 24)) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 876))(v2, a1) )
      return 0;
    if ( *(_DWORD *)(dword_106C2B74 + 48) )
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v4 = *(_DWORD *)(a1 + 252);
      v5 = *(int *)(a1 + 580);
      v6 = *(float *)(a1 + 584);
      v7 = *(float *)(a1 + 588) + 64.0;
      if ( (v4 & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_1011BC50((float *)(a1 + 580), (float *)&v5, 0, 0, 255, 1, 5.0);
    }
    return 1;
  }
  if ( !*(_DWORD *)(dword_106C2B74 + 48) )
    return 1;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v3 = *(_DWORD *)(a1 + 252);
  v5 = *(int *)(a1 + 580);
  v6 = *(float *)(a1 + 584);
  v7 = *(float *)(a1 + 588) + 64.0;
  if ( (v3 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1011BC50((float *)(a1 + 580), (float *)&v5, 0, 255, 0, 1, 5.0);
  return 1;
}
