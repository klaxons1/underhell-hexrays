char __cdecl sub_101152F0(int a1, float *a2, float *a3, float *a4, float *a5, float a6, float *a7)
{
  int v8[12]; // [esp+Ch] [ebp-48h] BYREF
  int v9[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v10[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( *a3 == flt_106F1CB4 && a3[1] == flt_106F1CB8 && a3[2] == flt_106F1CBC )
  {
    *(float *)v9 = *a2 + *a4;
    *(float *)&v9[1] = a4[1] + a2[1];
    *(float *)&v9[2] = a4[2] + a2[2];
    *(float *)v10 = *a2 + *a5;
    *(float *)&v10[1] = a5[1] + a2[1];
    *(float *)&v10[2] = a5[2] + a2[2];
    return sub_10113C10(a1, (float *)v9, (float *)v10, a6, a7, 0);
  }
  else if ( *(_BYTE *)(a1 + 64) )
  {
    return sub_10114BA0((float *)a1, (float *)(a1 + 16), a2, a3, a4, a5, a6, (int)a7);
  }
  else
  {
    sub_10425040(a3, a2, v8);
    return sub_10114C90(a1, (float *)v8, a4, a5, a6, (int)a7);
  }
}
