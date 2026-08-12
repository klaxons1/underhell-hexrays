void __cdecl sub_10088F10(int *a1)
{
  float *v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  const char *v5; // eax
  const char *v6; // esi
  float v7[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v8[3]; // [esp+28h] [ebp-24h] BYREF
  float v9[3]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v10[3]; // [esp+40h] [ebp-Ch] BYREF

  if ( *a1 == 1 )
  {
    if ( (dword_1042BFE0 & 1) == 0 )
    {
      dword_1042BFE0 |= 1u;
      flt_1042BFD4 = 0.0;
      flt_1042BFD8 = 0.0;
      flt_1042BFDC = -1.0;
    }
    v1 = &flt_1042BFD4;
    if ( byte_1042C598 )
      v1 = &flt_1042C4CC;
    v2 = *(_DWORD *)v1;
    v3 = *((_DWORD *)v1 + 1);
    v4 = *((_DWORD *)v1 + 2);
    v10[0] = v2;
    v10[1] = v3;
    v10[2] = v4;
    sub_101EE190(v10, v9);
    Msg("%.2f %.2f %.2f\n", v9[0], v9[1], v9[2]);
  }
  else if ( *a1 == 4 )
  {
    v8[0] = atof((const char *)a1[259]);
    v5 = Locale;
    if ( *a1 > 2 )
      v5 = (const char *)a1[260];
    v8[1] = atof(v5);
    if ( *a1 > 3 )
      v6 = (const char *)a1[261];
    else
      v6 = Locale;
    v8[2] = atof(v6);
    sub_101EDFB0(v8, v7);
    flt_1042C4CC = v7[0];
    flt_1042C4D0 = v7[1];
    flt_1042C4D4 = v7[2];
    off_103EDFEC();
    if ( byte_1042C598 )
      sub_10086FF0(&dword_1042C4C8);
  }
}
