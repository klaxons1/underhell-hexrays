int __cdecl sub_10261160(int *a1)
{
  int result; // eax
  bool v2; // cc
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  double v7; // st7
  float v8; // [esp+174h] [ebp-6Ch] BYREF
  float v9; // [esp+178h] [ebp-68h]
  float v10; // [esp+17Ch] [ebp-64h]
  float v11; // [esp+180h] [ebp-60h] BYREF
  float v12; // [esp+184h] [ebp-5Ch]
  float v13; // [esp+188h] [ebp-58h]
  float v14[3]; // [esp+18Ch] [ebp-54h] BYREF
  float v15[3]; // [esp+198h] [ebp-48h] BYREF
  float v16[2]; // [esp+1A4h] [ebp-3Ch] BYREF
  float v17; // [esp+1ACh] [ebp-34h]
  float v18[3]; // [esp+1B0h] [ebp-30h] BYREF
  float v19[3]; // [esp+1BCh] [ebp-24h] BYREF
  float v20[3]; // [esp+1C8h] [ebp-18h] BYREF
  float v21; // [esp+1D4h] [ebp-Ch] BYREF
  float v22; // [esp+1D8h] [ebp-8h]
  float v23; // [esp+1DCh] [ebp-4h]
  float v24; // [esp+1E8h] [ebp+8h]

  result = *a1;
  if ( *a1 >= 4 )
  {
    v2 = result <= 1;
    v3 = String;
    if ( !v2 )
      v3 = (const char *)a1[259];
    v21 = atof(v3);
    v4 = String;
    if ( *a1 > 2 )
      v4 = (const char *)a1[260];
    v22 = atof(v4);
    v5 = String;
    if ( *a1 > 3 )
      v5 = (const char *)a1[261];
    v23 = atof(v5);
    v6 = String;
    if ( *a1 > 3 )
      v6 = (const char *)a1[261];
    v7 = atof(v6);
    v24 = v7;
    v8 = v21 - v7;
    v11 = v8;
    v16[0] = v8;
    v18[0] = v8;
    v9 = v22 - v7;
    v15[1] = v9;
    v16[1] = v9;
    v20[1] = v9;
    v10 = v23 - v7;
    v13 = v10;
    v14[2] = v10;
    v15[2] = v10;
    v12 = v22 + v7;
    v14[1] = v12;
    v18[1] = v12;
    v19[1] = v12;
    v14[0] = v21 + v7;
    v15[0] = v14[0];
    v19[0] = v14[0];
    v20[0] = v14[0];
    v17 = v23 + v7;
    v18[2] = v17;
    v19[2] = v17;
    v20[2] = v17;
    (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      dword_106B3200,
      &v8,
      &v11,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      &v11,
      v14,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v14,
      v15,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v15,
      &v8,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v16,
      v18,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v18,
      v19,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v19,
      v20,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v20,
      v16,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      &v8,
      v16,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v15,
      v20,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      &v11,
      v18,
      255,
      0,
      0,
      1,
      3.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v14,
      v19,
      255,
      0,
      0,
      1,
      3.0);
    Msg("VoxelTreeSphere - (%f %f %f), %f\n", v21, v22, v23, v24);
    return (*(int (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)dword_106B31EC + 116))(
             dword_106B31EC,
             &v21,
             LODWORD(v24),
             3.0);
  }
  return result;
}
