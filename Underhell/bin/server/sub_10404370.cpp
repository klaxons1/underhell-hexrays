char __thiscall sub_10404370(_DWORD *this, float *a2, float *a3, char a4)
{
  char v5; // bl
  int v6; // eax
  int v7; // eax
  float *v8; // esi
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  void (__thiscall *v13)(float *, float *, float *); // eax
  _BYTE v15[44]; // [esp+Ch] [ebp-90h] BYREF
  float v16; // [esp+38h] [ebp-64h]
  float v17[3]; // [esp+60h] [ebp-3Ch] BYREF
  float v18[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v19[3]; // [esp+78h] [ebp-24h] BYREF
  float v20[3]; // [esp+84h] [ebp-18h] BYREF
  float v21; // [esp+90h] [ebp-Ch] BYREF
  float v22; // [esp+94h] [ebp-8h]
  float v23; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  v5 = sub_100D0550((int)this, (int)&savedregs, (int)a2, (int)this, a2, a3, a4);
  if ( !v5 )
    return v5;
  v6 = sub_100D1940(this);
  v7 = sub_100D7680(v6);
  v8 = (float *)v7;
  if ( !v7 )
    return v5;
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v9 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)v8 + 968))(v8, v20);
  v10 = *v9 - v8[145];
  v11 = v9[1] - v8[146];
  v12 = v9[2] - v8[147];
  v13 = *(void (__thiscall **)(float *, float *, float *))(*(_DWORD *)v8 + 2104);
  v21 = v10 + *a2;
  v22 = v11 + a2[1];
  v23 = v12 + a2[2];
  v13(v8, v18, &v21);
  v19[0] = 24.0;
  v19[1] = 24.0;
  v19[2] = 24.0;
  v17[0] = -24.0;
  v17[1] = -24.0;
  v17[2] = -24.0;
  v20[0] = v18[0] * 120.0 + v21;
  v20[1] = v18[1] * 120.0 + v22;
  v20[2] = 120.0 * v18[2] + v23;
  sub_10023240(COERCE_FLOAT(&savedregs), (int)v8, &v21, v20, v17, v19, 33701899, 0, (int)v15);
  if ( 1.0 != v16 )
    return 0;
  else
    return v5;
}
