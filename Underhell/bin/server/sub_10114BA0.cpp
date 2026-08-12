char __cdecl sub_10114BA0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7, int a8)
{
  int v9[12]; // [esp+Ch] [ebp-48h] BYREF
  int v10[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v11[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( *a4 == flt_106F1CB4 && a4[1] == flt_106F1CB8 && a4[2] == flt_106F1CBC )
  {
    *(float *)v10 = *a3 + *a5;
    *(float *)&v10[1] = a5[1] + a3[1];
    *(float *)&v10[2] = a5[2] + a3[2];
    *(float *)v11 = *a3 + *a6;
    *(float *)&v11[1] = a6[1] + a3[1];
    *(float *)&v11[2] = a6[2] + a3[2];
    return sub_10113A30(a1, a2, (int)v10, (int)v11, a7, a8, 0);
  }
  else
  {
    sub_10425040(a4, a3, v9);
    return sub_101148D0(a1, a2, (float *)v9, a5, a6, a7, a8);
  }
}
