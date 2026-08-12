bool __thiscall sub_10058E20(int this, char a2)
{
  int v3; // edi
  int v4; // esi
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  float v10[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 140) && !(unsigned __int8)sub_1004B510((void *)this, 100000, 0) && !a2 )
    return 0;
  *(_BYTE *)(this + 140) = 0;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v3 = sub_10261B20();
  else
    v3 = 0;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  if ( !sub_10058C60((_DWORD *)this, (float *)(v3 + 580), v10) )
    return 0;
  v4 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = v10[0] - *(float *)(v4 + 580);
  v6 = v5 * v5;
  v7 = v10[1] - *(float *)(v4 + 584);
  v8 = v10[2] - *(float *)(v4 + 588);
  return v8 * v8 + v7 * v7 + v6 > 1024.0;
}
