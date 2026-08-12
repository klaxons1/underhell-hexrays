void __cdecl sub_101775E0(float *a1, int a2, int a3, int a4, float a5, float *a6)
{
  float *v6; // eax
  float *v7; // esi
  float *v8; // edi

  v6 = (float *)sub_100DDA40(308);
  v7 = v6;
  if ( v6 )
  {
    sub_100F2BA0(v6, (int)"FX_Smoke");
    *(_DWORD *)v7 = &CSmokeEmitter::`vftable';
    v7[75] = NAN;
    v7[65] = 0.0;
    v7[66] = 0.0;
    *((_DWORD *)v7 + 75) = a3;
    *((_DWORD *)v7 + 76) = a4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( v7 )
  {
    sub_100F2950(v7);
    v8 = v7;
  }
  sub_100F3060((int)v8, a1);
  v8[65] = *((float *)off_103DC81C + 3) + a5;
  sub_101EDFB0(a2);
  v8[71] = *a6;
  v8[72] = a6[1];
  v8[73] = a6[2];
  v8[74] = a6[3];
  v8[67] = 0.029999999;
  sub_101760A0((int)v8, v7);
  sub_100F2FF0((int)v8);
}
