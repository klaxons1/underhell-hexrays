double __thiscall sub_10018FC0(void *this, float *a2)
{
  int v3; // eax
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v8; // st5
  float v9; // [esp+4h] [ebp-30h]
  _BYTE v10[12]; // [esp+10h] [ebp-24h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v12; // [esp+28h] [ebp-Ch]
  float v13; // [esp+2Ch] [ebp-8h]
  float v14; // [esp+30h] [ebp-4h]
  float v15; // [esp+3Ch] [ebp+8h]

  (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 908))(this, v11);
  v3 = sub_100BEF30("forward");
  if ( v3 )
    sub_100BD6D0(v3, v10, v11, 0, 0);
  v4 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v10);
  v5 = *a2 - *v4;
  v12 = v5;
  v6 = a2[1] - v4[1];
  v13 = v6;
  v14 = a2[2] - v4[2];
  v9 = v5 * v5 + v6 * v6;
  v15 = off_10689708(v9);
  off_10689714();
  if ( v15 <= 1.0 )
    return 0.0;
  v8 = (v12 * v11[0] + v11[1] * v13 + v11[2] * v14 + 1.0) * 3.4142;
  if ( v8 <= 1.0 )
  {
    if ( v8 < 0.0 )
      v8 = 0.0;
  }
  else
  {
    v8 = 1.0;
  }
  if ( v15 >= 10.0 )
    return v8;
  else
    return (v15 - 1.0) * v8 * 0.11111111;
}
