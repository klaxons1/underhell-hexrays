char __thiscall sub_102F3E40(_BYTE *this)
{
  double v2; // st7
  int v3; // esi
  double v4; // st6
  double v5; // st7
  double v6; // st7
  float v8[6]; // [esp+8h] [ebp-34h] BYREF
  float v9; // [esp+20h] [ebp-1Ch] BYREF
  float v10; // [esp+24h] [ebp-18h]
  float v11; // [esp+28h] [ebp-14h]
  float v12; // [esp+2Ch] [ebp-10h]
  float v13; // [esp+30h] [ebp-Ch]
  float v14; // [esp+34h] [ebp-8h]
  float v15; // [esp+38h] [ebp-4h]

  (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)this + 504))(this, &v9);
  (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)this + 920))(this, v8);
  if ( this[5710] )
    v2 = 35.0;
  else
    v2 = 30.0;
  v15 = v2;
  v3 = sub_10415940();
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    v4 = v10 - *(float *)(v3 + 584);
    v5 = v11 - *(float *)(v3 + 588);
    v8[3] = v9 - *(float *)(v3 + 580);
    v8[4] = v4;
    v8[5] = v5;
    if ( off_10689714() < v15 )
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v6 = *(float *)(v3 + 584) - v10;
      v12 = *(float *)(v3 + 580) - v9;
      v13 = v6;
      v14 = 0.0;
      off_10689714();
      if ( v8[1] * v13 + v8[0] * v12 + v8[2] * v14 > 0.3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v3, 16449, 0) )
          break;
      }
    }
    v3 = *(_DWORD *)(v3 + 2148);
    if ( !v3 )
      return 0;
  }
  return 1;
}
