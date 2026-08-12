void __thiscall sub_103AF830(float *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // rt1
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // rt2
  double v15; // st6
  double v16; // st7
  _BYTE v17[48]; // [esp+18h] [ebp-60h] BYREF
  _BYTE v18[12]; // [esp+48h] [ebp-30h] BYREF
  _BYTE v19[12]; // [esp+54h] [ebp-24h] BYREF
  _BYTE v20[12]; // [esp+60h] [ebp-18h] BYREF
  float v21; // [esp+6Ch] [ebp-Ch] BYREF
  float v22; // [esp+70h] [ebp-8h]
  float v23; // [esp+80h] [ebp+8h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
  v6 = sub_100BEF30(v5, "minigunbase");
  (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v5 + 796))(v5, v6, v17);
  sub_10421CE0(v17, 0, v19);
  sub_10421CE0(v17, 3, v18);
  sub_10421BA0(a3, v17, v20);
  sub_10422540(v20, &v21);
  v7 = v21;
  sub_10424C10(v21, 0.0);
  v23 = v7;
  v8 = v22;
  sub_10424C10(v22, 0.0);
  v9 = v23 * 0.5 + this[12];
  this[12] = v9;
  v10 = v9;
  v11 = v8;
  v12 = v10;
  v13 = this[9] - 0.5 * v11;
  this[9] = v13;
  if ( v10 < -45.0 )
    v12 = -45.0;
  v14 = v13;
  v15 = v12;
  v16 = v14;
  this[12] = v15;
  if ( v15 > 45.0 )
    v15 = 45.0;
  this[12] = v15;
  if ( v16 < -90.0 )
    v16 = -90.0;
  this[9] = v16;
  if ( v16 <= 90.0 )
    this[9] = v16;
  else
    this[9] = 90.0;
}
