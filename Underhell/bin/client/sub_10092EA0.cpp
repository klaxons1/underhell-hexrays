void __cdecl sub_10092EA0(float *a1, float *a2, int a3, int a4, int a5, int a6, float a7)
{
  _DWORD *v7; // esi
  float *v8; // eax
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  float *v14; // eax
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  float *v20; // eax
  int v21; // edx
  double v22; // st7
  int (__thiscall *v23)(_DWORD *); // eax
  float *v24; // eax
  float v25; // [esp+10h] [ebp-18h] BYREF
  float v26; // [esp+14h] [ebp-14h]
  float v27; // [esp+18h] [ebp-10h]
  float v28; // [esp+1Ch] [ebp-Ch]
  float v29; // [esp+20h] [ebp-8h]
  float v30; // [esp+24h] [ebp-4h]

  v7 = (_DWORD *)sub_100422D0();
  if ( v7 )
  {
    v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 36))(v7);
    v9 = v8[1] - a1[1];
    v10 = v9 * v9;
    v11 = *v8 - *a1;
    v12 = v10;
    v13 = v8[2] - a1[2];
    if ( v11 * v11 + v12 + v13 * v13 <= 90000000.0
      || (v14 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 36))(v7),
          v15 = v14[1] - a2[1],
          v16 = v15 * v15,
          v17 = *v14 - *a2,
          v18 = v16,
          v19 = v14[2] - a2[2],
          v17 * v17 + v18 + v19 * v19 <= 90000000.0) )
    {
      sub_10013260(v7, (int)&v25, 0, 0);
      v20 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 36))(v7);
      v21 = *v7;
      v28 = *a1 - *v20;
      v29 = a1[1] - v20[1];
      v22 = a1[2] - v20[2];
      v23 = *(int (__thiscall **)(_DWORD *))(v21 + 36);
      v30 = v22;
      v24 = (float *)v23(v7);
      if ( v28 * v25 + v29 * v26 + v30 * v27 >= 0.0
        || (a2[1] - v24[1]) * v26 + v25 * (*a2 - *v24) + (a2[2] - v24[2]) * v27 >= 0.0 )
      {
        if ( dword_1041316C )
          (*(void (__stdcall **)(float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            LODWORD(a7));
      }
    }
  }
}
