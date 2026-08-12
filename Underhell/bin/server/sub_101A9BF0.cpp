void __usercall sub_101A9BF0(int a1@<ecx>, int a2@<esi>)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // eax
  float *v10; // eax
  double v11; // st7
  unsigned int v12; // eax
  int v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  int v18; // eax
  double v19; // rt0
  double v20; // st5
  double v21; // st7
  double v22; // rt1
  double v23; // st5
  double v24; // st6
  int v25; // ecx
  int v26; // edx
  float v27; // eax
  int v28; // edi
  double v29; // st6
  double v30; // st7
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  float *v35; // eax
  unsigned int v36; // eax
  int v37; // edi
  float v39; // [esp+Ch] [ebp-40h]
  float v40[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v41; // [esp+1Ch] [ebp-30h]
  float v42; // [esp+20h] [ebp-2Ch]
  float v43; // [esp+24h] [ebp-28h]
  int v44; // [esp+28h] [ebp-24h] BYREF
  float v45; // [esp+2Ch] [ebp-20h]
  int v46; // [esp+30h] [ebp-1Ch]
  float v47; // [esp+34h] [ebp-18h]
  float v48; // [esp+38h] [ebp-14h]
  float v49; // [esp+3Ch] [ebp-10h]
  float v50; // [esp+40h] [ebp-Ch] BYREF
  float v51; // [esp+44h] [ebp-8h]
  float v52; // [esp+48h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 2608);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        v7 = __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CPathTrack `RTTI Type Descriptor',
               0);
        if ( v7 )
        {
          if ( (*(_DWORD *)(v7 + 248) & 0x10) != 0 )
          {
            sub_100EAB80((_DWORD *)a1, 8);
            v8 = *(_DWORD *)(a1 + 3632);
            if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 2] != v8 >> 12 )
              v9 = 0;
            else
              v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 1];
            v10 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)(v9 + 320) + 4))(v9 + 320, a2);
            v47 = *v10;
            v48 = v10[1];
            v11 = v10[2];
            v12 = *(_DWORD *)(a1 + 3632);
            v49 = v11;
            if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
            v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 8))(v13 + 320);
            v15 = *v14;
            v16 = v14[1];
            v17 = v14[2];
            v39 = v14[2];
            v18 = *(_DWORD *)(v7 + 252) >> 11;
            v19 = v17;
            v20 = v15;
            v21 = v19;
            v22 = v20 + v47;
            v23 = v16;
            v24 = 0.5;
            v41 = v22 * 0.5;
            v42 = (v23 + v48) * 0.5;
            v43 = (v49 + v19) * 0.5;
            if ( (v18 & 1) != 0 )
            {
              sub_100DAE60(v7);
              v21 = v39;
              v24 = 0.5;
            }
            v25 = *(_DWORD *)(v7 + 252) >> 11;
            v40[0] = *(float *)(v7 + 580) - v41;
            v40[1] = *(float *)(v7 + 584) - v42;
            v40[2] = v24 * (v21 - v49) + 8.0 + *(float *)(v7 + 588) - v43;
            if ( (v25 & 1) != 0 )
              sub_100DAE60(v7);
            v26 = *(_DWORD *)(v7 + 704);
            v27 = *(float *)(v7 + 708);
            v46 = *(_DWORD *)(v7 + 712);
            v44 = v26;
            v45 = v27;
            v52 = flt_106F1CB0;
            v50 = flt_106F1CA8;
            v51 = flt_106F1CAC;
            if ( sub_101ACC90(v7) )
            {
              if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
                sub_100DAE60(v7);
              v28 = sub_101ACC90(v7);
              if ( (*(_DWORD *)(v28 + 252) & 0x800) != 0 )
                sub_100DAE60(v28);
              v29 = *(float *)(v28 + 584) - *(float *)(v7 + 584);
              v30 = *(float *)(v28 + 588) - *(float *)(v7 + 588);
              v50 = *(float *)(v28 + 580) - *(float *)(v7 + 580);
              v51 = v29;
              v52 = v30;
              off_10689714();
              sub_10422540(&v50, &v44);
              v45 = v45 - 90.0;
            }
            v31 = *(_DWORD *)(a1 + 3632);
            if ( v31 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 2] != v31 >> 12 )
              v32 = 0;
            else
              v32 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v32 + 416))(v32, v40, &v44);
            v33 = *(_DWORD *)(a1 + 3632);
            if ( v33 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 2] != v33 >> 12 )
              v34 = 0;
            else
              v34 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 1];
            v35 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 576))(v34);
            sub_100E0D20(a1, v35);
            v36 = *(_DWORD *)(a1 + 3632);
            if ( v36 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 2] != v36 >> 12 )
              v37 = 0;
            else
              v37 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3632) & 0xFFF) + 1];
            if ( (*(_DWORD *)(v37 + 252) & 0x800) != 0 )
              sub_100DAE60(v37);
            sub_100E0EA0(a1, (float *)(v37 + 704));
            if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
              sub_100DAE60(v7);
            *(float *)(a1 + 3676) = *(float *)(v7 + 580);
            *(float *)(a1 + 3680) = *(float *)(v7 + 584);
            *(float *)(a1 + 3684) = *(float *)(v7 + 588);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 2588) + 36) )
              sub_101A8760(a1);
            sub_101A83B0(a1);
          }
        }
      }
    }
  }
}
