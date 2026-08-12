void __usercall sub_102AB080(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  float *v7; // eax
  float *v8; // esi
  long double v9; // st7
  long double v10; // st7
  long double v11; // st6
  long double v12; // st6
  long double v13; // rt1
  long double v14; // st6
  long double v15; // st7
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  long double v19; // st7
  long double v20; // st7
  float v21; // [esp+4h] [ebp-88h]
  float v22; // [esp+4h] [ebp-88h]
  _BYTE v23[48]; // [esp+14h] [ebp-78h] BYREF
  int v24[4]; // [esp+44h] [ebp-48h] BYREF
  int v25[4]; // [esp+54h] [ebp-38h] BYREF
  float v26[3]; // [esp+64h] [ebp-28h] BYREF
  int v27; // [esp+70h] [ebp-1Ch] BYREF
  float v28; // [esp+74h] [ebp-18h]
  float v29; // [esp+78h] [ebp-14h]
  float v30; // [esp+7Ch] [ebp-10h] BYREF
  float v31; // [esp+80h] [ebp-Ch]
  float v32; // [esp+84h] [ebp-8h]
  float v33; // [esp+88h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
    sub_102AA950(a1, a2);
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 8) & 0xFFF) + 1];
  v7 = (float *)sub_100F9650(v6);
  v30 = *(float *)(a1 + 16) - *v7;
  v31 = *(float *)(a1 + 20) - v7[1];
  v32 = *(float *)(a1 + 24) - v7[2];
  off_10689714();
  sub_102AA490(a1, &v30);
  v8 = (float *)(a1 + 28);
  v9 = *(float *)(a1 + 32) * v31 + *(float *)(a1 + 28) * v30 + *(float *)(a1 + 36) * v32;
  if ( v9 <= 1.0 )
  {
    if ( v9 < -1.0 )
      v9 = -1.0;
  }
  else
  {
    v9 = 1.0;
  }
  v10 = acos(v9) * 57.29578;
  v21 = v10;
  sub_10424CA0(v21);
  v33 = v10;
  v11 = 45.0;
  if ( v10 <= 45.0 )
  {
    v11 = 0.0;
    if ( v10 >= 0.0 )
      v11 = v10;
  }
  v12 = v11 * 0.022222223;
  v13 = ((3.0 * (v12 * v12) - v12 * (v12 * v12 + v12 * v12)) * 35.0 + 10.0) * *(float *)(dword_106B31C8 + 16);
  v14 = v10;
  v15 = v13;
  if ( fabs(v14) > v13 )
    v33 = v15;
  *(float *)&v27 = *(float *)(a1 + 32) * v32 - *(float *)(a1 + 36) * v31;
  v28 = *(float *)(a1 + 36) * v30 - v32 * *v8;
  v29 = v31 * *v8 - v30 * *(float *)(a1 + 32);
  if ( off_10689714() < 0.001 )
  {
    *(float *)&v27 = 0.0;
    v28 = 0.0;
    v29 = 1.0;
  }
  sub_104230F0((int)&v27, v33, (int)v24);
  sub_104251E0(a1 + 64, (int)v24, 0.40000001, (int)v25);
  v16 = v25[1];
  v17 = v25[2];
  *(_DWORD *)(a1 + 64) = v25[0];
  v18 = v25[3];
  *(_DWORD *)(a1 + 68) = v16;
  *(_DWORD *)(a1 + 72) = v17;
  *(_DWORD *)(a1 + 76) = v18;
  v19 = acos(*(float *)(a1 + 76));
  v20 = (v19 + v19) * 57.29578;
  v22 = v20;
  sub_10424CA0(v22);
  if ( v20 >= 0.001 || v33 >= 0.001 )
  {
    sub_10422FA0(a1 + 64, v23);
    sub_10421C00(a1 + 28, v23, v26);
    *v8 = v26[0];
    *(float *)(a1 + 32) = v26[1];
    *(float *)(a1 + 36) = v26[2];
    off_10689714();
  }
  else
  {
    *v8 = v30;
    *(float *)(a1 + 32) = v31;
    *(float *)(a1 + 36) = v32;
    *(float *)(a1 + 64) = 0.0;
    *(float *)(a1 + 68) = 0.0;
    *(float *)(a1 + 72) = 0.0;
    *(float *)(a1 + 76) = 1.0;
  }
}
