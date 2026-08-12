void __cdecl sub_10016FA0(
        float *a1,
        int a2,
        int a3,
        int a4,
        float *a5,
        int a6,
        float *a7,
        int a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  float *v12; // edi
  double v13; // st7
  int v14; // ecx
  int v15; // edx
  double v16; // st6
  double v17; // st5
  float *v18; // eax
  double v19; // st7
  float *v20; // eax
  double v21; // st7
  float v22; // [esp+0h] [ebp-Ch]
  int v23; // [esp+1Ch] [ebp+10h]

  v12 = (float *)a6;
  v22 = *(float *)(a6 + 4) * *(float *)(a6 + 4) + *(float *)a6 * *(float *)a6 + *(float *)(a6 + 8) * *(float *)(a6 + 8);
  v13 = off_103EDFE0(v22) * 0.01;
  a6 = a3 - 1;
  v14 = a2 * (int)(1.0 / (double)(a8 - 1) * (double)(a3 - 1) * 65536.0);
  v15 = a12 & 0x10;
  if ( (a12 & 0x10) != 0 )
  {
    v14 = 0;
    v13 = (double)a8 * 0.1;
  }
  v16 = a11;
  *a1 = *v12 * a11 + *a5;
  a1[1] = v16 * v12[1] + a5[1];
  a1[2] = v16 * v12[2] + a5[2];
  if ( 0.0 != a10 )
  {
    v17 = a10 * *(float *)(a4 + 4 * (v14 >> 16));
    *(float *)&v23 = v17;
    if ( v15 )
    {
      a12 = (int)&a6;
      a11 = v13 * (v16 * 3.141592653589793) + a9;
      *(float *)&a6 = cos(a11);
      *(float *)&a8 = sin(a11);
      v18 = (float *)sub_10135710();
      v19 = *(float *)&a8 * *(float *)&v23;
      *a1 = v19 * *v18 + *a1;
      a1[1] = v18[1] * v19 + a1[1];
      a1[2] = v19 * v18[2] + a1[2];
      v20 = (float *)sub_10135700();
      v21 = *(float *)&a6 * *(float *)&v23;
    }
    else
    {
      v20 = a7;
      v21 = v17;
    }
    *a1 = *v20 * v21 + *a1;
    a1[1] = v20[1] * v21 + a1[1];
    a1[2] = v21 * v20[2] + a1[2];
  }
}
