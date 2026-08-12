char __thiscall sub_102E9C20(int this, _DWORD *a2, float *a3, float a4, float a5)
{
  float *v7; // eax
  float v8; // edx
  float v9; // eax
  long double v10; // st7
  long double v11; // st7
  double v12; // st6
  double v13; // st4
  bool v14; // c0
  bool v15; // c3
  double v16; // st6
  bool v17; // dl
  bool v18; // cl
  float v20[3]; // [esp+18h] [ebp-64h] BYREF
  float v21[3]; // [esp+24h] [ebp-58h] BYREF
  float v22[3]; // [esp+30h] [ebp-4Ch] BYREF
  float v23; // [esp+3Ch] [ebp-40h]
  float v24; // [esp+40h] [ebp-3Ch]
  float v25; // [esp+44h] [ebp-38h]
  float v26; // [esp+48h] [ebp-34h]
  float v27; // [esp+4Ch] [ebp-30h]
  float v28; // [esp+50h] [ebp-2Ch]
  float v29; // [esp+54h] [ebp-28h] BYREF
  float v30; // [esp+58h] [ebp-24h]
  float v31; // [esp+5Ch] [ebp-20h]
  float v32; // [esp+60h] [ebp-1Ch]
  float v33; // [esp+64h] [ebp-18h]
  float v34; // [esp+68h] [ebp-14h]
  float v35; // [esp+6Ch] [ebp-10h]
  float v36; // [esp+70h] [ebp-Ch]
  float v37; // [esp+74h] [ebp-8h]
  float v38; // [esp+78h] [ebp-4h]
  float v39; // [esp+84h] [ebp+8h]
  char v40; // [esp+87h] [ebp+Bh]
  char v41; // [esp+93h] [ebp+17h]

  if ( !a2 || *(float *)(*(_DWORD *)(this + 8) + 44) <= 0.0 )
    return 0;
  sub_1014EC90((int)a2, v22);
  sub_1014ECE0((int)a2, v21);
  v23 = v22[0] - v21[0];
  v24 = v22[1] - v21[1];
  v25 = v22[2] - v21[2];
  off_10689714();
  v7 = *(float **)(this + 8);
  v29 = v7[38];
  v30 = v7[39];
  v31 = v7[40];
  sub_10424670(&v29, v21, v22, v20, 0);
  v26 = v20[0] - v29;
  v27 = v20[1] - v30;
  v28 = v20[2] - v31;
  v39 = off_10689714();
  v34 = 0.0;
  v32 = v26;
  v8 = *(float *)(this + 24);
  v33 = v27;
  v9 = *(float *)(this + 28);
  v37 = 0.0;
  v35 = v8;
  v36 = v9;
  off_10689714();
  off_10689714();
  v10 = v36 * v33 + v32 * v35 + v37 * v34;
  v38 = v10;
  v11 = acos(v10) * 180.0 * 0.3183098861837907;
  v12 = v39;
  if ( 0.0 == v39 || (v13 = a5, v41 = 1, v13 <= v12) )
    v41 = 0;
  if ( 0.0 == v12 )
  {
    v16 = 0.0;
    goto LABEL_10;
  }
  v14 = v12 > 4.0;
  v15 = 4.0 == v12;
  v16 = 0.0;
  if ( v14 || v15 )
  {
LABEL_10:
    v40 = 0;
    goto LABEL_11;
  }
  v40 = 1;
LABEL_11:
  v17 = fabs(*(float *)(this + 28) * v24 + v23 * *(float *)(this + 24) + *(float *)(this + 32) * v25) > *(float *)(dword_106E17BC + 44);
  v18 = fabs(*(float *)(*(_DWORD *)(this + 8) + 48)) >= 1.0;
  if ( (v16 < v38 && !v18 || v17) && (a4 > v11 || v40) && v41 )
  {
    sub_102E9870((int *)this, 1, *(float *)(*(_DWORD *)(this + 4) + 4132), a3, a2);
    return 1;
  }
  return 0;
}
