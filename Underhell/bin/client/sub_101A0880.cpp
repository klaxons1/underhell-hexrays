// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_101A0880(int a1@<ebp>, int a2)
{
  double v2; // st7
  double v3; // st6
  int v4; // edx
  double (__thiscall *v5)(int); // eax
  int v6; // ecx
  int v7; // edx
  double (__thiscall *v8)(int); // eax
  float v9[20]; // [esp+50h] [ebp-DCh] BYREF
  float v10[3]; // [esp+A0h] [ebp-8Ch] BYREF
  float v11; // [esp+ACh] [ebp-80h] BYREF
  float v12; // [esp+B0h] [ebp-7Ch]
  float v13; // [esp+B4h] [ebp-78h]
  float v14; // [esp+B8h] [ebp-74h]
  float v15; // [esp+BCh] [ebp-70h]
  float v16; // [esp+C0h] [ebp-6Ch]
  float v17; // [esp+CCh] [ebp-60h]
  float v18; // [esp+F0h] [ebp-3Ch]
  float v19; // [esp+F4h] [ebp-38h]
  int v20; // [esp+F8h] [ebp-34h]
  float v21; // [esp+FCh] [ebp-30h] BYREF
  int v22; // [esp+100h] [ebp-2Ch]
  int v23; // [esp+104h] [ebp-28h]
  float v24; // [esp+108h] [ebp-24h] BYREF
  int v25; // [esp+10Ch] [ebp-20h]
  float v26; // [esp+110h] [ebp-1Ch]
  float v27; // [esp+114h] [ebp-18h] BYREF
  float v28; // [esp+118h] [ebp-14h]
  float v29; // [esp+11Ch] [ebp-10h]
  int v30; // [esp+120h] [ebp-Ch]
  void *v31; // [esp+124h] [ebp-8h]
  void *retaddr; // [esp+12Ch] [ebp+0h]

  v30 = a1;
  v31 = retaddr;
  v2 = *(float *)a2;
  v24 = *(float *)a2;
  v3 = *(float *)(a2 + 4);
  v25 = *(int *)(a2 + 4);
  v26 = *(float *)(a2 + 8) + 16.0;
  v27 = v2;
  v28 = v3;
  v29 = *(float *)(a2 + 8) - 64.0;
  sub_1000E430(v9, &v24, &v27);
  sub_1012D400(&v21, 0, 0);
  (*(void (__thiscall **)(int, float *, int, float *, float *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v9,
    16395,
    &v21,
    v10);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v10, &v11, 255, 0, 0, 1, 5.0);
  if ( v17 < 1.0 )
  {
    v24 = 0.5;
    v26 = 0.5;
    *(float *)&v25 = 1.0;
    v27 = 0.0;
    v28 = 0.0;
    v29 = 1.0;
    v21 = v14 * 8.0 + v11;
    *(float *)&v22 = v15 * 8.0 + v12;
    *(float *)&v23 = 8.0 * v16 + v13;
    v4 = *(_DWORD *)dword_10413198;
    *(float *)&v25 = 0.75;
    v24 = COERCE_FLOAT(&v24);
    v5 = *(double (__thiscall **)(int))(v4 + 4);
    *(float *)&v23 = 0.0;
    *(float *)&v22 = 360.0;
    v21 = 0.0;
    *(float *)&v20 = v5(dword_10413198);
    sub_1008DCF0(
      &v21,
      &v27,
      64.0,
      600.0,
      0.80000001,
      1.0,
      0.0,
      0.30000001,
      *(float *)&v20,
      v21,
      (float *)v22,
      *(float *)&v23,
      SLODWORD(v24),
      v25);
    v21 = 0.5;
    *(float *)&v22 = 1.0;
    v26 = 1.0;
    v25 = 3;
    v24 = COERCE_FLOAT("effects/rollerglow");
    v23 = v6;
    v27 = v14 * 8.0 + v11;
    v28 = v15 * 8.0 + v12;
    v29 = 8.0 * v16 + v13;
    v7 = *(_DWORD *)dword_10413198;
    *(float *)&v23 = 1.25;
    *(float *)&v22 = COERCE_FLOAT(&v21);
    v8 = *(double (__thiscall **)(int))(v7 + 4);
    v21 = 0.0;
    *(float *)&v20 = 360.0;
    v19 = 0.0;
    v18 = v8(dword_10413198);
    sub_1008DCF0(&v27, &v24, 16.0, 300.0, 0.89999998, 1.0, 0.0, 0.89999998, v18, v19, (float *)v20, v21, v22, v23);
  }
}
