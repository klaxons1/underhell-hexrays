void __thiscall sub_1004E670(int this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  int v5; // eax
  int (__thiscall *v6)(int); // eax
  double v7; // st6
  double v8; // st7
  int (__thiscall *v9)(int); // eax
  double v10; // st7
  int (__thiscall *v11)(int); // eax
  double v12; // st7
  int (__thiscall *v13)(int); // eax
  long double v14; // st5
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v20; // st7
  double v21; // st6
  long double v22; // st5
  int v23; // eax
  int v24; // ecx
  double v25; // st6
  int v26; // eax
  float *v27; // ecx
  double v28; // st7
  double v29; // st7
  float *v30; // ebx
  double v31; // st6
  double v32; // st4
  double v33; // st7
  double v34; // st4
  double v35; // st4
  double v36; // rt1
  float *v37; // esi
  float v38; // [esp+20h] [ebp-24h]
  float v39; // [esp+30h] [ebp-14h]
  float v40; // [esp+34h] [ebp-10h]
  float v41; // [esp+3Ch] [ebp-8h]
  float v42; // [esp+3Ch] [ebp-8h]
  int v43; // [esp+3Ch] [ebp-8h]
  float v44; // [esp+40h] [ebp-4h]

  if ( *(_DWORD *)(dword_1040AE6C + 48) )
  {
    (*(void (__thiscall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
      dword_1041316C,
      this + 1948,
      this + 2016,
      255,
      0,
      0,
      1,
      0.1);
    if ( *(_DWORD *)(this + 1984) == 1 )
    {
      (*(void (__cdecl **)(int, int, _DWORD, const char *))(*(_DWORD *)dword_1041316C + 20))(
        dword_1041316C,
        this + 1948,
        0.1,
        "DYING");
    }
    else if ( *(_DWORD *)(this + 1984) == 2 )
    {
      (*(void (__cdecl **)(int, int, _DWORD, const char *))(*(_DWORD *)dword_1041316C + 20))(
        dword_1041316C,
        this + 1948,
        0.1,
        "DEAD");
    }
  }
  v2 = *((float *)off_103DC81C + 4);
  v44 = *((float *)off_103DC81C + 4);
  if ( !*(_DWORD *)(this + 1984) && *(_BYTE *)(this + 123) )
  {
    *(float *)(this + 1988) = *(float *)(this + 1956);
    *(_DWORD *)(this + 1984) = 1;
    if ( RandomInt(0, 100) >= 50 )
      v3 = -1.0;
    else
      v3 = 1.0;
    v41 = v3;
    *(float *)(this + 1992) = RandomFloat(87.0, 93.0) * v41;
    v2 = v44;
  }
  v4 = *(_DWORD *)(this + 1984);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36);
        v7 = (*(float *)(this + 1956) - *(float *)(this + 1988)) / (*(float *)(this + 2052) - *(float *)(this + 1988));
        *(float *)(this + 1980) = v7 * v7 * *(float *)(this + 1992);
        *(float *)(this + 1968) = v2 * ((*(float *)(this + 2052) - *(float *)(this + 1956) - 0.5) * 10.0)
                                + *(float *)(this + 1968);
        v8 = (double)v6(this - 4);
        v9 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36);
        *(float *)(this + 1980) = sin((v8 * 10.0 + *((float *)off_103DC81C + 3)) * 2.3299999) * 5.0 * v44
                                + *(float *)(this + 1980);
        v10 = (double)v9(this - 4);
        v11 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36);
        *(float *)(this + 1972) = sin((v10 * 10.0 + *((float *)off_103DC81C + 3)) * 4.0) * 7.0 * v44
                                + *(float *)(this + 1972);
        v12 = (double)v11(this - 4);
        v13 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36);
        *(float *)(this + 1968) = sin((v12 * 10.0 + *((float *)off_103DC81C + 3)) * 4.0) * 0.75 * v44
                                + *(float *)(this + 1968);
        v14 = sin(((double)v13(this - 4) * 10.0 + *((float *)off_103DC81C + 3)) * 3.3329999) * 0.75 * v44
            + *(float *)(this + 1968);
        *(float *)(this + 1968) = v14 - v44 * v14;
      }
    }
    else
    {
      v15 = (*(float *)(this + 1956) - *(float *)(this + 1988)) / (*(float *)(this + 2052) - *(float *)(this + 1988));
      v16 = v15 * v15;
      *(float *)(this + 1980) = *(float *)(this + 1992) * v16;
      if ( *(float *)(this + 2052) - 2.0 <= *(float *)(this + 1956) )
        *(_DWORD *)(this + 1984) = 2;
      else
        *(float *)(this + 1968) = v2 * ((1.0 - v16) * *(float *)(this + 1996)) + *(float *)(this + 1968);
    }
  }
  else
  {
    *(float *)(this + 1956) = *(float *)(this + 2024);
    *(float *)(this + 1972) = *(float *)(this + 2028);
    *(float *)(this + 1976) = *(float *)(this + 2032);
    *(float *)(this + 1980) = *(float *)(this + 2036);
    if ( sub_1009B850(this + 2000) <= *(float *)(this + 2004) )
    {
      v20 = sub_1009B850(this + 2000) - *(float *)(this + 2004) + *(float *)(this + 2000);
      v21 = 0.0;
      if ( *(float *)(this + 2004) > 0.0 )
        v21 = *(float *)(this + 2000);
      v22 = *(float *)(this + 2008);
      *(float *)(this + 2008) = v44 * *(float *)(this + 2012) + v22;
      *(float *)(this + 2012) = *(float *)(this + 2012) - v44 * 5.0;
      *(float *)(this + 1976) = sin(v22) * ((1.0 - v20 / v21) * 6.0) + *(float *)(this + 1976);
    }
  }
  v17 = *(float *)(this + 2016) - *(float *)(this + 1948);
  v39 = v17;
  v18 = *(float *)(this + 2020) - *(float *)(this + 1952);
  v40 = v18;
  v38 = v17 * v17 + v18 * v18;
  v19 = off_103EDFE0(v38);
  v42 = v19;
  if ( !*(_DWORD *)(this + 1984) )
  {
    if ( v19 - *(float *)(this + 2148) > 2.0 )
    {
      *(float *)(this + 2004) = sub_1009B850(this + 2000) + 5.0;
      *(float *)(this + 2000) = 5.0;
      v19 = v42;
      *(float *)(this + 2012) = v42 + v42;
      if ( v19 + v19 > 30.0 )
        *(float *)(this + 2012) = 30.0;
    }
    *(float *)(this + 4 * (*(_DWORD *)(this + 2140))++ + 2060) = v19;
    if ( *(int *)(this + 2140) < 20 )
    {
      v23 = *(_DWORD *)(this + 2144);
      if ( v23 < 20 )
        *(_DWORD *)(this + 2144) = v23 + 1;
    }
    else
    {
      *(_DWORD *)(this + 2140) = 0;
      *(_DWORD *)(this + 2144) = 20;
    }
    v24 = *(_DWORD *)(this + 2144);
    v25 = 0.0;
    *(float *)(this + 2148) = 0.0;
    v43 = v24;
    if ( v24 )
    {
      v26 = 0;
      if ( v24 > 0 )
      {
        v27 = (float *)(this + 2060);
        do
        {
          v25 = v25 + *v27;
          ++v26;
          ++v27;
          *(float *)(this + 2148) = v25;
        }
        while ( v26 < *(_DWORD *)(this + 2144) );
      }
      *(float *)(this + 2148) = *(float *)(this + 2148) / (double)v43;
    }
  }
  v28 = v19 * 0.050000001;
  if ( v28 > 1.0 )
    v28 = 1.0;
  v29 = v28 * v28;
  v30 = (float *)(this - 12);
  v31 = v39 * (115.0 * v29) * v44 + *(float *)(this + 1960);
  v32 = v29;
  v33 = 115.0 * v29 * v40 * v44 + *(float *)(this + 1964);
  v34 = v32 * 6.0 + 2.0;
  *(float *)(this + 1960) = v31 - v34 * v31 * v44;
  *(float *)(this + 1964) = v33 - v34 * v33 * v44;
  v35 = *(float *)(this + 1968);
  v36 = *(float *)(this + 1964) * v44;
  *(float *)(this + 1948) = *(float *)(this + 1960) * v44 + *(float *)(this + 1948);
  *(float *)(this + 1952) = v36 + *(float *)(this + 1952);
  *(float *)(this + 1956) = v44 * v35 + *(float *)(this + 1956);
  sub_10034440((float *)(this - 12), (float *)(this + 1948));
  sub_10037BA0(this - 12, (float *)(this + 1948));
  v37 = (float *)(this + 1972);
  sub_10035C40(v30, v37);
  sub_10037CA0((int)v30, v37);
}
