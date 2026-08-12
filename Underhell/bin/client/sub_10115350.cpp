char __cdecl sub_10115350(int a1)
{
  float *v1; // eax
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+40h] [ebp-3Ch] BYREF
  int v6; // [esp+44h] [ebp-38h]
  int v7; // [esp+48h] [ebp-34h]
  float v8; // [esp+4Ch] [ebp-30h] BYREF
  float v9; // [esp+50h] [ebp-2Ch]
  float v10; // [esp+54h] [ebp-28h]
  float v11; // [esp+58h] [ebp-24h] BYREF
  float v12; // [esp+5Ch] [ebp-20h]
  float v13; // [esp+60h] [ebp-1Ch]
  float v14; // [esp+64h] [ebp-18h] BYREF
  float v15; // [esp+68h] [ebp-14h]
  float v16; // [esp+6Ch] [ebp-10h]
  float v17; // [esp+70h] [ebp-Ch] BYREF
  float v18; // [esp+74h] [ebp-8h]
  float v19; // [esp+78h] [ebp-4h]

  if ( byte_104373E8 )
    return 1;
  v1 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 1192) + 8))(*(_DWORD *)(a1 + 1192));
  v17 = *v1;
  v2 = *(_DWORD *)(a1 + 1192);
  v18 = v1[1];
  v19 = v1[2];
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v2 + 12))(v2, &v11, &v14);
  v8 = v14 + v17;
  v9 = v15 + v18;
  v10 = v16 + v19;
  *(float *)&v5 = v17 + v11;
  *(float *)&v6 = v18 + v12;
  *(float *)&v7 = v19 + v13;
  if ( !(*(int (__thiscall **)(int, int *, float *))(*(_DWORD *)dword_1041315C + 128))(dword_1041315C, &v5, &v8) )
  {
    if ( !*(_DWORD *)(dword_10437454 + 48) )
      return 1;
    *(float *)&v5 = 0.0;
    *(float *)&v6 = 0.0;
    *(float *)&v7 = 0.0;
    (*(void (__thiscall **)(int, float *, float *, float *, int *, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
      dword_1041316C,
      &v17,
      &v11,
      &v14,
      &v5,
      0,
      255,
      0,
      16,
      5.0);
    v3 = dword_1041316C;
    v8 = 5.0;
    v7 = 1;
    *(float *)&v6 = 0.0;
    v5 = 255;
LABEL_5:
    (*(void (__thiscall **)(int, float *, int *, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v17, &v5, 0);
    return 1;
  }
  *(float *)&v5 = v14 + v17;
  *(float *)&v6 = v15 + v18;
  *(float *)&v7 = v16 + v19;
  v8 = v17 + v11;
  v9 = v18 + v12;
  v10 = v19 + v13;
  if ( (*(unsigned __int8 (__thiscall **)(int, float *, int *))(*(_DWORD *)dword_1041315C + 132))(
         dword_1041315C,
         &v8,
         &v5) == 1 )
  {
    if ( !*(_DWORD *)(dword_10437454 + 48) )
      return 1;
    *(float *)&v5 = 0.0;
    *(float *)&v6 = 0.0;
    *(float *)&v7 = 0.0;
    (*(void (__thiscall **)(int, float *, float *, float *, int *, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
      dword_1041316C,
      &v17,
      &v11,
      &v14,
      &v5,
      0,
      0,
      255,
      16,
      5.0);
    v3 = dword_1041316C;
    v8 = 5.0;
    v7 = 1;
    v6 = 255;
    *(float *)&v5 = 0.0;
    goto LABEL_5;
  }
  return 0;
}
