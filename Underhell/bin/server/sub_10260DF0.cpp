int __cdecl sub_10260DF0(int *a1)
{
  int result; // eax
  bool v2; // cc
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  float v9[3]; // [esp+184h] [ebp-78h] BYREF
  float v10[3]; // [esp+190h] [ebp-6Ch] BYREF
  float v11[3]; // [esp+19Ch] [ebp-60h] BYREF
  float v12[3]; // [esp+1A8h] [ebp-54h] BYREF
  float v13[3]; // [esp+1B4h] [ebp-48h] BYREF
  float v14[3]; // [esp+1C0h] [ebp-3Ch] BYREF
  float v15[3]; // [esp+1CCh] [ebp-30h] BYREF
  float v16[3]; // [esp+1D8h] [ebp-24h] BYREF
  float v17; // [esp+1E4h] [ebp-18h] BYREF
  float v18; // [esp+1E8h] [ebp-14h]
  float v19; // [esp+1ECh] [ebp-10h]
  float v20; // [esp+1F0h] [ebp-Ch] BYREF
  float v21; // [esp+1F4h] [ebp-8h]
  float v22; // [esp+1F8h] [ebp-4h]

  result = *a1;
  if ( *a1 >= 6 )
  {
    v2 = result <= 1;
    v3 = String;
    if ( !v2 )
      v3 = (const char *)a1[259];
    v20 = atof(v3);
    v4 = String;
    if ( *a1 > 2 )
      v4 = (const char *)a1[260];
    v21 = atof(v4);
    v5 = String;
    if ( *a1 > 3 )
      v5 = (const char *)a1[261];
    v22 = atof(v5);
    v6 = String;
    if ( *a1 > 4 )
      v6 = (const char *)a1[262];
    v17 = atof(v6);
    v7 = String;
    if ( *a1 > 5 )
      v7 = (const char *)a1[263];
    v18 = atof(v7);
    v8 = String;
    if ( *a1 > 6 )
      v8 = (const char *)a1[264];
    v19 = atof(v8);
    v9[0] = v20;
    v9[1] = v21;
    v9[2] = v22;
    v10[0] = v20;
    v10[1] = v18;
    v10[2] = v22;
    v11[0] = v17;
    v12[0] = v17;
    v15[0] = v17;
    v16[0] = v17;
    v11[1] = v18;
    v14[1] = v18;
    v15[1] = v18;
    v11[2] = v22;
    v12[2] = v22;
    v12[1] = v21;
    v13[1] = v21;
    v16[1] = v21;
    v13[0] = v20;
    v14[0] = v20;
    v13[2] = v19;
    v14[2] = v19;
    v15[2] = v19;
    v16[2] = v19;
    (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      dword_106B3200,
      v9,
      v10,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v10,
      v11,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v11,
      v12,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v12,
      v9,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v13,
      v14,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v14,
      v15,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v15,
      v16,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v16,
      v13,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v9,
      v13,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v12,
      v16,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v10,
      v14,
      255,
      0,
      0,
      1,
      10.0);
    (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
      v11,
      v15,
      255,
      0,
      0,
      1,
      10.0);
    Msg("VoxelTreeBox - (%f %f %f) to (%f %f %f)\n", v20, v21, v22, v17, v18, v19);
    return (*(int (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)dword_106B31EC + 112))(
             dword_106B31EC,
             &v20,
             &v17,
             10.0);
  }
  return result;
}
