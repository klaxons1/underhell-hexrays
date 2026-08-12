int __cdecl sub_1001A270(float *a1, float *a2, float *a3, float a4, float *a5, float a6)
{
  int v6; // esi
  double v7; // st7
  int i; // esi
  double v9; // st5
  double v10; // st6
  double v11; // st3
  double v12; // st2
  double v13; // st4
  double v14; // st1
  double v15; // st6
  double v16; // st6
  double v17; // st7
  int result; // eax
  int v19; // esi
  void **v20; // [esp+4h] [ebp-270h] BYREF
  char v21[208]; // [esp+10h] [ebp-264h] BYREF
  int v22; // [esp+E0h] [ebp-194h]
  int v23; // [esp+1A8h] [ebp-CCh]
  int v24; // [esp+230h] [ebp-44h]
  float v25; // [esp+238h] [ebp-3Ch]
  float v26; // [esp+240h] [ebp-34h]
  float v27; // [esp+244h] [ebp-30h]
  float v28[3]; // [esp+24Ch] [ebp-28h] BYREF
  float v29; // [esp+258h] [ebp-1Ch]
  float v30; // [esp+25Ch] [ebp-18h]
  float v31; // [esp+260h] [ebp-14h]
  float v32; // [esp+264h] [ebp-10h]
  float v33; // [esp+268h] [ebp-Ch]
  float v34; // [esp+26Ch] [ebp-8h]
  int v35; // [esp+270h] [ebp-4h]
  float v36; // [esp+288h] [ebp+14h]
  float v37; // [esp+290h] [ebp+1Ch]

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
  v35 = v6;
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v20 = &CBeamSegDraw::`vftable';
  sub_10016C20((int)v21);
  v24 = 0;
  sub_10233F90(v6, 17, 0, 0, 0);
  v34 = 1.0;
  v33 = a4;
  v36 = 0.0;
  v37 = fmod(a6, 1.0);
  v7 = (float)0.0;
  for ( i = 0; i <= 16; ++i )
  {
    v9 = (1.0 - v7) * (1.0 - v7);
    v10 = (1.0 - v7) * (v7 + v7);
    v11 = *a3 * (v7 * v7);
    v12 = a3[1] * (v7 * v7);
    v13 = v7 * v7 * a3[2];
    v14 = *a2 * v10;
    v25 = a2[1] * v10;
    v15 = v10 * a2[2];
    v26 = *a1 * v9;
    v27 = a1[1] * v9;
    v16 = v13 + v15 + v9 * a1[2];
    v28[0] = v11 + v14 + v26;
    v28[1] = v27 + v25 + v12;
    v28[2] = v16;
    v32 = v37 - v7;
    if ( !i || i == 16 )
    {
      v29 = flt_10459240;
      v30 = flt_10459244;
      v17 = flt_10459248;
    }
    else
    {
      v29 = *a5;
      v30 = a5[1];
      v17 = a5[2];
    }
    v31 = v17;
    sub_10234090(v28);
    v7 = v36 + 0.0625;
    v36 = v7;
  }
  result = sub_10233EF0(&v20);
  if ( v23 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 16))(v23);
  }
  if ( v22 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 16))(v22);
  }
  v19 = v35;
  if ( v35 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 12))(v35);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19);
  }
  return result;
}
