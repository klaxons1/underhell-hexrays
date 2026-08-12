void __thiscall sub_103B04D0(_DWORD *this, float *a2)
{
  float *v3; // ebx
  float *v4; // eax
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float v10; // [esp+0h] [ebp-30h]
  _BYTE v11[8]; // [esp+Ch] [ebp-24h] BYREF
  float v12; // [esp+14h] [ebp-1Ch]
  _BYTE v13[8]; // [esp+18h] [ebp-18h] BYREF
  float v14; // [esp+20h] [ebp-10h]
  float v15; // [esp+24h] [ebp-Ch]
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h]
  float v18; // [esp+38h] [ebp+8h]

  v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 576))(a2);
  v15 = *v4 - *v3;
  v16 = v4[1] - v3[1];
  v17 = v4[2] - v3[2];
  v5 = (float *)sub_10022D70();
  *v5 = a2[85] - a2[82];
  v5[1] = a2[86] - a2[83];
  v6 = a2[87] - a2[84];
  v5[2] = v6;
  v18 = v6;
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(this[80] + 60))(this + 80, v11, v13);
  v7 = (v14 - v12 + v18) * 0.5;
  v8 = v17;
  if ( v17 <= v7 )
  {
    if ( -v7 <= v8 )
      v9 = 0.0;
    else
      v9 = v7 + v8;
  }
  else
  {
    v9 = v8 - v7;
  }
  v10 = v9 * v9 + v15 * v15 + v16 * v16;
  off_10689708(v10);
}
