int __userpurge sub_101B1D30@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int v6; // eax
  bool v7; // zf
  BOOL v8; // eax
  float *v9; // ebx
  float *v10; // edi
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  double v16; // st7
  int v17; // ecx
  int v18; // edx
  double v19; // st7
  int v20; // esi
  int v21; // eax
  float v23; // [esp+10h] [ebp-64h]
  float v26; // [esp+20h] [ebp-54h] BYREF
  float v27; // [esp+24h] [ebp-50h]
  float v28; // [esp+28h] [ebp-4Ch]
  float v29; // [esp+2Ch] [ebp-48h]
  float v30; // [esp+30h] [ebp-44h]
  bool v31; // [esp+34h] [ebp-40h]
  float v32; // [esp+38h] [ebp-3Ch] BYREF
  float v33; // [esp+3Ch] [ebp-38h]
  float v34; // [esp+40h] [ebp-34h]
  float v35; // [esp+44h] [ebp-30h] BYREF
  float v36; // [esp+48h] [ebp-2Ch]
  float v37; // [esp+4Ch] [ebp-28h]
  float v38; // [esp+50h] [ebp-24h]
  float v39; // [esp+54h] [ebp-20h]
  float v40[6]; // [esp+58h] [ebp-1Ch] BYREF
  int v41; // [esp+70h] [ebp-4h]

  v27 = 0.0;
  v6 = *(_DWORD *)(a1 + 252);
  v28 = 0.0;
  v26 = 1.0;
  v31 = 1;
  v29 = 1.0;
  v30 = 1.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  v39 = 0.0;
  v38 = 1.0;
  if ( (v6 & 0x800) != 0 )
    sub_100DAE60(a1);
  v40[0] = *(float *)(a1 + 580);
  v7 = *(_BYTE *)(a5 + 44) == 0;
  v40[1] = *(float *)(a1 + 584);
  v8 = !v7;
  v40[2] = *(float *)(a1 + 588);
  v40[3] = *(float *)(a1 + 884);
  v40[4] = *(float *)(a1 + 888);
  v40[5] = *(float *)(a1 + 892);
  v9 = &v40[3 * v8];
  v41 = *(_DWORD *)(a5 + 28);
  v10 = &v40[3 * !v8];
  (*(void (__thiscall **)(_DWORD, float *, float *, int, int))(**(_DWORD **)(a5 + 24) + 224))(
    *(_DWORD *)(a5 + 24),
    &v32,
    v9,
    a3,
    a2);
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v41 + 224))(v41, &v35, v10);
  v11 = v9[1] - v10[1];
  v12 = v11 * v11;
  v13 = *v9 - *v10;
  v14 = v12;
  v15 = v9[2] - v10[2];
  v23 = v13 * v13 + v14 + v15 * v15;
  v16 = off_10689708(v23) + *(float *)(a1 + 896);
  v17 = *(_DWORD *)(a1 + 248) >> 1;
  v38 = v16;
  v39 = *(float *)(a1 + 900);
  *(float *)(a1 + 904) = v16;
  if ( (v17 & 1) != 0 )
    v39 = v16;
  *(float *)(a1 + 860) = v32;
  *(float *)(a1 + 864) = v33;
  *(float *)(a1 + 868) = v34;
  *(float *)(a1 + 872) = v35;
  *(float *)(a1 + 876) = v36;
  *(float *)(a1 + 880) = v37;
  v18 = *(_DWORD *)(a1 + 248);
  v26 = 1.0;
  v19 = *(float *)(a1 + 820) * 0.45454544;
  v31 = (v18 & 4) == 0;
  v27 = v19;
  v28 = 0.45454544 * *(float *)(a1 + 824);
  v20 = *(_DWORD *)(a5 + 28);
  v29 = *(float *)(a5 + 36);
  v21 = *(_DWORD *)(a5 + 24);
  v30 = *(float *)(a5 + 40);
  return (*(int (__thiscall **)(int, int, int, int, float *))(*(_DWORD *)dword_106BAFF4 + 84))(
           dword_106BAFF4,
           v21,
           v20,
           a4,
           &v26);
}
