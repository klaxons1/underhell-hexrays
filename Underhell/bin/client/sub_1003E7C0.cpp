void __thiscall sub_1003E7C0(int this, int *a2, float *a3, float *a4, float a5, int a6)
{
  int v7; // eax
  float v8; // edx
  float v9; // eax
  double v10; // st6
  double v11; // st7
  long double v12; // st7
  long double v13; // st6
  int v14; // [esp+0h] [ebp-9Ch]
  float v15; // [esp+0h] [ebp-9Ch]
  _BYTE v16[48]; // [esp+14h] [ebp-88h] BYREF
  int v17[4]; // [esp+44h] [ebp-58h] BYREF
  float v18[3]; // [esp+54h] [ebp-48h] BYREF
  float v19[3]; // [esp+60h] [ebp-3Ch] BYREF
  int v20[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v21; // [esp+78h] [ebp-24h]
  float v22; // [esp+7Ch] [ebp-20h]
  float v23; // [esp+80h] [ebp-1Ch]
  float v24; // [esp+84h] [ebp-18h]
  float v25; // [esp+88h] [ebp-14h]
  float v26; // [esp+8Ch] [ebp-10h]
  float v27; // [esp+90h] [ebp-Ch]
  float v28; // [esp+94h] [ebp-8h]
  float v29; // [esp+98h] [ebp-4h]
  float v30; // [esp+B4h] [ebp+18h]

  sub_1002FFA0(this, this, a2, (int)a3, a4, a5, a6);
  if ( *(_DWORD *)(*a2 + 284) && (0.0 != *(float *)(this + 2960) || *(float *)(this + 2964) != 0.0) )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 4))(this + 4);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 8))(this + 4);
    sub_101F0B70(v7, v14, v16);
    sub_101ED980(this + 2960, v16, v18);
    sub_101ED980(this + 2904, v16, v19);
    v8 = *a3;
    v9 = a3[1];
    v26 = a3[2];
    v24 = v8;
    v25 = v9;
    v30 = off_103EDFEC();
    v21 = *a3 + v18[0];
    v22 = v18[1] + a3[1];
    v23 = v18[2] + a3[2];
    off_103EDFEC();
    v27 = *a3 + v19[0];
    v28 = v19[1] + a3[1];
    v29 = v19[2] + a3[2];
    off_103EDFEC();
    v10 = v30 * v23;
    v11 = v22 * v30;
    *a3 = v21 * v30;
    a3[1] = v11;
    a3[2] = v10;
    *(float *)v20 = v25 * v29 - v26 * v28;
    *(float *)&v20[1] = v26 * v27 - v29 * v24;
    *(float *)&v20[2] = v28 * v24 - v25 * v27;
    v12 = atan2(off_103EDFEC(), v25 * v28 + v27 * v24 + v26 * v29) * 180.0 * 0.3183098861837907;
    v13 = 45.0;
    if ( v12 > 45.0 || (v13 = -45.0, v12 < -45.0) )
      v12 = v13;
    v15 = v12;
    sub_101EEEE0((int)v20, v15, (int)v17);
    sub_101EECB0(v17, a4, a4);
    sub_101EEB80(a4);
  }
}
