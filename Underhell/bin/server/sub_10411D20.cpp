void __thiscall sub_10411D20(int this, int a2, float *a3)
{
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // rt2
  double v13; // st5
  float v14; // [esp+4h] [ebp-28h]
  float v15; // [esp+4h] [ebp-28h]
  _BYTE v16[12]; // [esp+14h] [ebp-18h] BYREF
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+28h] [ebp-4h]
  float v20; // [esp+34h] [ebp+8h]

  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    *a3 = *(float *)(a2 + 580);
    a3[1] = *(float *)(a2 + 584);
    a3[2] = *(float *)(a2 + 588);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v5 = *(float *)(a2 + 580) - *(float *)(this + 580);
    v6 = v5 * v5;
    v7 = *(float *)(a2 + 584) - *(float *)(this + 584);
    v8 = *(float *)(a2 + 588) - *(float *)(this + 588);
    v14 = v8 * v8 + v7 * v7 + v6;
    v20 = off_10689708(v14);
    v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 536))(a2, v16);
    v10 = *v9 * 0.5;
    v17 = v10;
    v11 = v9[1] * 0.5;
    v18 = v11;
    v12 = v11;
    v13 = 0.5 * v9[2];
    v19 = v13;
    v15 = v12 * v12 + v10 * v10 + v13 * v13;
    if ( off_10689708(v15) < v20 )
    {
      *a3 = *a3 + v17;
      a3[1] = v18 + a3[1];
      a3[2] = a3[2] + v19;
    }
  }
}
