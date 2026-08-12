int __thiscall sub_10329B60(_DWORD *this, int a2, float *a3, float *a4, float a5, float a6)
{
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st5
  double v14; // st4
  double v15; // st3
  double v16; // st6
  double v17; // st7
  double v18; // st7
  _BYTE v20[44]; // [esp+10h] [ebp-84h] BYREF
  float v21; // [esp+3Ch] [ebp-58h]
  int v22; // [esp+64h] [ebp-30h] BYREF
  float v23; // [esp+68h] [ebp-2Ch]
  float v24; // [esp+6Ch] [ebp-28h]
  int v25; // [esp+70h] [ebp-24h] BYREF
  float v26; // [esp+74h] [ebp-20h]
  float v27; // [esp+78h] [ebp-1Ch]
  float v28; // [esp+7Ch] [ebp-18h] BYREF
  float v29; // [esp+80h] [ebp-14h]
  float v30; // [esp+84h] [ebp-10h]
  int v31; // [esp+88h] [ebp-Ch] BYREF
  float v32; // [esp+8Ch] [ebp-8h]
  float v33; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF
  int v35; // [esp+A0h] [ebp+Ch]
  float *v36; // [esp+A8h] [ebp+14h]
  float *v37; // [esp+ACh] [ebp+18h]

  if ( !sub_10328FE0(this, (int)&v28) )
  {
    v8 = a3[1] - a4[1];
    v28 = *a3 - *a4;
    v29 = v8;
    v30 = 0.0;
    off_10689714();
  }
  v9 = -a5;
  *(float *)&v35 = v9;
  v10 = v28 * v9;
  v11 = v9;
  v12 = v9 * v29;
  v13 = v11 * v30;
  v14 = a3[2] + a6;
  v15 = v10 + *a3;
  v16 = a3[1];
  *(float *)a2 = v15;
  *(float *)(a2 + 4) = v12 + v16;
  *(float *)(a2 + 8) = v13 + v14;
  v36 = (float *)sub_10073730(this[419]);
  v37 = (float *)sub_10073710(this[419]);
  v17 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2208))(this);
  v31 = *(int *)a2;
  v32 = *(float *)(a2 + 4);
  v33 = *(float *)(a2 + 8) - v17;
  sub_100231A0((int)&savedregs, (int)a3, (float *)a2, (float *)&v31, v37, v36, 33701899, (int)this, 0, (int)v20);
  if ( v21 < 1.0 )
  {
    v18 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2208))(this);
    *(float *)(a2 + 8) = v18 * (1.0 - v21) + *(float *)(a2 + 8);
  }
  if ( *(_DWORD *)(dword_106E55D4 + 48) )
  {
    *(float *)&v31 = 8.0;
    v32 = 8.0;
    v33 = 8.0;
    *(float *)&v25 = -8.0;
    v26 = -8.0;
    v27 = -8.0;
    sub_1011C000(a3, (float *)&v25, (float *)&v31, 255, 255, 0, 1, 0.1);
    *(float *)&v25 = 8.0;
    v26 = 8.0;
    v27 = 8.0;
    *(float *)&v31 = -8.0;
    v32 = -8.0;
    v33 = -8.0;
    sub_1011C000(a4, (float *)&v31, (float *)&v25, 255, 0, 255, 1, 0.1);
    *(float *)&v25 = 8.0;
    v26 = 8.0;
    v27 = 8.0;
    *(float *)&v31 = -8.0;
    v32 = -8.0;
    v33 = -8.0;
    sub_1011C000((float *)a2, (float *)&v31, (float *)&v25, 255, 255, 255, 1, 0.1);
    sub_1011BC50(a4, a3, 0, 255, 0, 1, 0.1);
    *(float *)&v25 = 8.0;
    v26 = 8.0;
    v27 = 8.0;
    *(float *)&v31 = -8.0;
    v32 = -8.0;
    v33 = -8.0;
    *(float *)&v22 = v28 * *(float *)&v35 + *a3;
    v23 = *(float *)&v35 * v29 + a3[1];
    v24 = *(float *)&v35 * v30 + a3[2];
    sub_1011C000((float *)&v22, (float *)&v31, (float *)&v25, 255, 255, 255, 1, 0.1);
    *(float *)&v22 = v28 * *(float *)&v35 + *a3;
    v23 = *(float *)&v35 * v29 + a3[1];
    v24 = *(float *)&v35 * v30 + a3[2];
    sub_1011BC50(a3, (float *)&v22, 255, 255, 0, 1, 0.1);
    *(float *)&v22 = v28 * *(float *)&v35 + *a3;
    v23 = *(float *)&v35 * v29 + a3[1];
    v24 = *(float *)&v35 * v30 + a3[2];
    sub_1011BC50((float *)&v22, (float *)a2, 255, 255, 0, 1, 0.1);
  }
  return a2;
}
