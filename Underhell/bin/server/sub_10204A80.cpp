double __thiscall sub_10204A80(int this, int a2)
{
  int v3; // edi
  int v4; // ebx
  double v5; // st7
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double result; // st7
  float v12; // eax
  long double v13; // st6
  double v14; // st6
  float v15; // [esp+10h] [ebp-48h]
  float v16; // [esp+10h] [ebp-48h]
  _BYTE v17[12]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v18[3]; // [esp+28h] [ebp-30h] BYREF
  float v19; // [esp+34h] [ebp-24h] BYREF
  float v20; // [esp+38h] [ebp-20h]
  float v21; // [esp+3Ch] [ebp-1Ch]
  float v22; // [esp+40h] [ebp-18h]
  float v23; // [esp+44h] [ebp-14h]
  float v24; // [esp+48h] [ebp-10h]
  float v25; // [esp+4Ch] [ebp-Ch] BYREF
  float v26; // [esp+50h] [ebp-8h]
  float v27; // [esp+54h] [ebp-4h]
  float v28; // [esp+60h] [ebp+8h]
  float v29; // [esp+60h] [ebp+8h]

  if ( *(_BYTE *)(a2 + 306) == 6 )
  {
    v3 = *(_DWORD *)(a2 + 424);
    if ( !v3 )
      return 0.0;
    (*(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v3 + 204))(v3, v17, &v19);
    (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v3 + 188))(v3, 0, &v25);
    v4 = dword_106B31C8;
    v5 = *(float *)(v4 + 12) - sub_100E92C0((_DWORD *)this, 0);
    v28 = v5;
    if ( 0.0 == v5 )
      v28 = 0.1;
    v6 = v26 - *(float *)(this + 832);
    v7 = v6 * v6;
    v8 = v25 - *(float *)(this + 828);
    v9 = v7;
    v10 = v27 - *(float *)(this + 836);
    v15 = v8 * v8 + v9 + v10 * v10;
    v29 = off_10689708(v15) / v28;
    v16 = v20 * v20 + v19 * v19 + v21 * v21;
    if ( v29 >= off_10689708(v16) * 0.01 )
    {
      *(float *)(this + 828) = v25;
      *(float *)(this + 832) = v26;
      result = v27;
      *(float *)(this + 836) = v27;
      if ( *(_BYTE *)(this + 852) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v22 = *(float *)(this + 840) - *(float *)(this + 580);
        v23 = *(float *)(this + 844) - *(float *)(this + 584);
        v24 = *(float *)(this + 848) - *(float *)(this + 588);
        off_10689714();
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v3 + 228))(v3, v18, &v19);
        return v18[1] * v23 + v22 * v18[0] + v18[2] * v24;
      }
      else
      {
        sub_100D7A40(&v19);
      }
    }
    else
    {
      return 0.0;
    }
  }
  else
  {
    v12 = *(float *)(a2 + 496);
    result = fabs(*(float *)(a2 + 488));
    v20 = *(float *)(a2 + 492);
    v21 = v12;
    v13 = fabs(v20);
    if ( v13 >= result )
      result = v13;
    v14 = fabs(v21);
    if ( v14 >= result )
      return v14;
  }
  return result;
}
