void __cdecl sub_10088DE0(int *a1)
{
  float *v1; // eax
  const char *v2; // eax
  const char *v3; // esi
  double v4; // st7
  float v5; // [esp+1Ch] [ebp-Ch]
  float v6; // [esp+20h] [ebp-8h]

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
    Msg("%.2f %.2f %.2f\n", *v1, v1[1], v1[2]);
  }
  else if ( *a1 == 4 )
  {
    v5 = atof((const char *)a1[259]);
    v2 = Locale;
    if ( *a1 > 2 )
      v2 = (const char *)a1[260];
    v6 = atof(v2);
    if ( *a1 > 3 )
      v3 = (const char *)a1[261];
    else
      v3 = Locale;
    v4 = atof(v3);
    flt_1042C4CC = v5;
    flt_1042C4D0 = v6;
    flt_1042C4D4 = v4;
    off_103EDFEC();
    if ( byte_1042C598 )
      sub_10086FF0(&dword_1042C4C8);
  }
}
