void __thiscall sub_102B29D0(void *this, int *a2, float *a3, float a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // rt0
  double v9; // st4
  double v10; // rt1
  double v11; // st4
  double v12; // st0
  long double v13; // st7
  double v14; // st6
  unsigned int v15; // edx
  long double v16; // st5
  float v17; // edi
  int v18; // eax
  _BYTE v19[80]; // [esp+28h] [ebp-C0h] BYREF
  int v20[16]; // [esp+78h] [ebp-70h] BYREF
  int v21[3]; // [esp+B8h] [ebp-30h] BYREF
  int v22[3]; // [esp+C4h] [ebp-24h] BYREF
  int v23[3]; // [esp+D0h] [ebp-18h] BYREF
  float v24; // [esp+DCh] [ebp-Ch] BYREF
  float v25; // [esp+E0h] [ebp-8h]
  float v26; // [esp+E4h] [ebp-4h]

  (*(void (__thiscall **)(int *, _DWORD, _DWORD, float *))(*a2 + 528))(a2, 0, 0, &v24);
  v5 = v26;
  if ( v26 >= 0.866 )
  {
    v6 = a3[2] * 0.0;
    v7 = a3[1] - v6;
    *(float *)v21 = v7;
    v8 = v7;
    v9 = v6 - *a3;
    *(float *)&v21[1] = v9;
    v10 = v9;
    v11 = *a3 * 0.0 - 0.0 * a3[1];
    *(float *)&v21[2] = v11;
    v12 = -(v25 * v10 + v24 * v8 + v11 * v5);
    v24 = v24 + v8 * v12;
    v25 = v10 * v12 + v25;
    v26 = v5 + v12 * v11;
    off_10689714();
    sub_10425F00((int)v20, (int)v21, 20.0);
    v13 = acos(*(float *)&v20[6] * v25 + *(float *)&v20[2] * v24 + *(float *)&v20[10] * v26)
        * 180.0
        * 0.3183098861837907;
    if ( v13 <= 20.0 )
    {
      v14 = 0.0;
      if ( v13 < 0.0 )
        v13 = 0.0;
    }
    else
    {
      v13 = 20.0;
      v14 = 0.0;
    }
    v15 = (unsigned int)a2[63] >> 11;
    v16 = (3.0 * (v13 * 0.050000001 * (v13 * 0.050000001))
         - v13 * 0.050000001 * (v13 * 0.050000001 * (v13 * 0.050000001) + v13 * 0.050000001 * (v13 * 0.050000001)))
        * (a4
         * 12.0);
    *(float *)v22 = v14 * v16;
    v22[1] = v22[0];
    *(float *)&v22[2] = v16 * -1.0;
    if ( (v15 & 1) != 0 )
      sub_100DAE60((int)a2);
    *(float *)v23 = *((float *)a2 + 145) - *a3 * 200.0;
    *(float *)&v23[1] = *((float *)a2 + 146) - a3[1] * 200.0;
    v17 = *(float *)a2;
    *(float *)&v23[2] = *((float *)a2 + 147) - 200.0 * a3[2];
    v18 = sub_102487B0((int)v19, (int)this, (int)this, (float *)v22, (float *)v23, a4, 64, 0, 0);
    (*(void (__thiscall **)(int *, int))(LODWORD(v17) + 600))(a2, v18);
  }
}
