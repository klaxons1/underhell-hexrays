char __thiscall sub_1009A350(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  unsigned int v4; // ecx
  signed int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // eax
  _DWORD *v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // ecx
  bool v25; // cc
  double v26; // st7
  __m128 *v27; // esi
  int v28; // edi
  __int8 *v29; // eax
  int v30; // edi
  int i; // edi
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // esi
  _DWORD *v36; // eax
  unsigned int v37; // ecx
  int v39; // [esp+3Ch] [ebp-9Ch]
  float v40; // [esp+48h] [ebp-90h]
  float v41; // [esp+4Ch] [ebp-8Ch]
  float v42; // [esp+54h] [ebp-84h]
  float v43; // [esp+58h] [ebp-80h]
  float v44; // [esp+60h] [ebp-78h] BYREF
  float v45; // [esp+64h] [ebp-74h]
  float v46; // [esp+68h] [ebp-70h]
  float v47[2]; // [esp+6Ch] [ebp-6Ch] BYREF
  int v48; // [esp+74h] [ebp-64h]
  int v49[3]; // [esp+78h] [ebp-60h] BYREF
  __int16 v50[2]; // [esp+84h] [ebp-54h]
  int v51; // [esp+88h] [ebp-50h]
  int v52; // [esp+8Ch] [ebp-4Ch]
  unsigned __int8 v53; // [esp+90h] [ebp-48h]
  _BYTE v54[6]; // [esp+91h] [ebp-47h]
  char v55[4]; // [esp+98h] [ebp-40h]
  float v56; // [esp+9Ch] [ebp-3Ch]
  int v57; // [esp+A0h] [ebp-38h] BYREF
  float v58; // [esp+A4h] [ebp-34h]
  int v59; // [esp+A8h] [ebp-30h]
  int v60; // [esp+ACh] [ebp-2Ch]
  int v61; // [esp+B0h] [ebp-28h]
  int v62; // [esp+B4h] [ebp-24h] BYREF
  _DWORD *v63; // [esp+B8h] [ebp-20h]
  char v64[4]; // [esp+BCh] [ebp-1Ch] BYREF
  int v65; // [esp+C0h] [ebp-18h] BYREF
  unsigned int v66; // [esp+C4h] [ebp-14h] BYREF
  int v67; // [esp+C8h] [ebp-10h]
  int v68; // [esp+CCh] [ebp-Ch]
  int v69; // [esp+D0h] [ebp-8h]
  int v70; // [esp+D4h] [ebp-4h]

  v2 = this;
  v61 = 0;
  v70 = 0;
  v63 = this;
  v60 = -1;
  sub_10098110(a2, &v65, v64, &v62, &v66);
  sub_10094FA0(v2);
  if ( v62 )
  {
    v3 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 8 * v62 + 43);
    if ( v3 )
    {
      v4 = (v3 + 19) & 0xFFFFFFF0;
      *(_DWORD *)(v4 - 4) = v3;
    }
    else
    {
      v4 = 0;
    }
    v2[34] = v4;
  }
  v5 = v66;
  if ( v66 )
  {
    v6 = (*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, 8 * v66 + 43);
    if ( v6 )
    {
      v7 = (v6 + 19) & 0xFFFFFFF0;
      *(_DWORD *)(v7 - 4) = v6;
    }
    else
    {
      v7 = 0;
    }
    v2[35] = v7;
    v8 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 240 * (v5 / 4 + 1) + 19);
    if ( v8 )
    {
      v9 = (v8 + 19) & 0xFFFFFFF0;
      *(_DWORD *)(v9 - 4) = v8;
    }
    else
    {
      v9 = 0;
    }
    v2[36] = v9;
  }
  if ( *(_DWORD *)v64 )
  {
    v10 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 112 * (*(int *)v64 >> 2) + 19);
    if ( v10 )
    {
      v11 = (v10 + 19) & 0xFFFFFFF0;
      *(_DWORD *)(v11 - 4) = v10;
    }
    else
    {
      v11 = 0;
    }
    v2[27] = v11;
  }
  v12 = v65;
  if ( v2[8] < v65 && (int)v2[9] >= 0 )
  {
    v13 = v2[7];
    v2[8] = v65;
    v39 = 44 * v12;
    if ( v13 )
      v14 = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v13, v39);
    else
      v14 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v39);
    v2[7] = v14;
  }
  v2[11] = v2[7];
  v17 = sub_10097990(a2);
  v15 = v2[27];
  v16 = v17;
  LOBYTE(v17) = 1;
  v68 = 0;
  v67 = 0;
  v66 = v15;
  v62 = v16 - 1;
  if ( v16 - 1 >= 0 )
  {
    while ( 1 )
    {
      v64[0] = (_BYTE)v17 == 0;
      sub_1022E7D0(v47, 0x34u);
      v18 = v60;
      if ( v60 != (unsigned __int16)v50[1] )
      {
        if ( v60 != -1 )
        {
          if ( v67 )
          {
            v19 = (_DWORD *)sub_100DDA40(24);
            v20 = 0;
            if ( v19 )
            {
              v19[4] = 0;
              v19[5] = 0;
              *v19 = &CFastDetailLeafSpriteList::`vftable';
              v20 = v19;
            }
            v21 = v67;
            v22 = v66;
            v20[1] = v67;
            v23 = (v21 + 3) >> 2;
            v20[2] = v23;
            v20[3] = v22;
            v66 = 112 * v23 + v22;
            (*(void (__thiscall **)(void *, int, _DWORD, _DWORD *))(*(_DWORD *)off_103DCDDC + 24))(
              off_103DCDDC,
              v18,
              0,
              v20);
            v68 += -v68 & 3;
            v67 = 0;
          }
          (*(void (__thiscall **)(void *, int, int, int))(*(_DWORD *)off_103DCDDC + 32))(off_103DCDDC, v18, v61, v70);
        }
        v24 = v2[10];
        v60 = (unsigned __int16)v50[1];
        v61 = v24;
        v70 = 0;
      }
      if ( *(_DWORD *)(dword_1042CE24 + 48) && v55[0] == 1 )
      {
        if ( !v53 && v54[3] == 2 && !v54[1] && !v54[2] && !v54[0] )
        {
          LOBYTE(v17) = dword_1042CDDC;
          v25 = *(_DWORD *)(dword_1042CDDC + 48) <= 0;
          v65 = 0;
          if ( !v25 )
          {
            v26 = 0.0;
            v46 = 0.0;
            while ( 1 )
            {
              v44 = v26;
              v45 = v26;
              v27 = (__m128 *)(v63[27] + 112 * (v68 >> 2));
              v28 = v68 & 3;
              if ( v65 )
              {
                v69 = sub_10115FB0();
                v42 = (double)v69 * 0.000030518509 * 100.0 - 50.0;
                v69 = sub_10115FB0();
                v43 = (double)v69 * 0.000030518509 * 100.0 - 50.0;
                sub_10115FB0();
                v44 = v42;
                v45 = v43;
              }
              sub_10095860(v63, (int)v27, v28, (int)v47, v64[0], &v44);
              if ( !v28 )
              {
                v27[3] = _mm_shuffle_ps((__m128)v27[3].m128_u32[0], (__m128)v27[3].m128_u32[0], 0);
                v27[4] = _mm_shuffle_ps((__m128)v27[4].m128_u32[0], (__m128)v27[4].m128_u32[0], 0);
                v29 = &v27[5].m128_i8[5];
                v30 = 3;
                do
                {
                  *(v29 - 1) = v27[5].m128_i8[0];
                  *v29 = v27[5].m128_i8[1];
                  v29[1] = v27[5].m128_i8[2];
                  v29[2] = v27[5].m128_i8[3];
                  v29 += 4;
                  --v30;
                }
                while ( v30 );
                *v27 = _mm_shuffle_ps((__m128)v27->m128_u32[0], (__m128)v27->m128_u32[0], 0);
                v27[1] = _mm_shuffle_ps((__m128)v27[1].m128_u32[0], (__m128)v27[1].m128_u32[0], 0);
                v27[2] = _mm_shuffle_ps((__m128)v27[2].m128_u32[0], (__m128)v27[2].m128_u32[0], 0);
              }
              ++v68;
              ++v67;
              v17 = v65 + 1;
              v65 = v17;
              if ( v17 >= *(_DWORD *)(dword_1042CDDC + 48) )
                break;
              v26 = 0.0;
            }
            v2 = v63;
          }
          goto LABEL_62;
        }
      }
      else if ( !v55[0] )
      {
        v33 = sub_10096300(v2 + 7, v2[10]);
        LOBYTE(v17) = sub_1009A1A0(
                        v2[7] + 44 * v33,
                        v33,
                        v47,
                        (float *)v49,
                        *(_DWORD *)(v2[2] + 4 * (unsigned __int16)v50[0]),
                        v51,
                        v52,
                        v53,
                        v54[3]);
        ++v70;
        goto LABEL_62;
      }
      LOBYTE(v17) = v55[0] - 1;
      if ( (unsigned __int8)(v55[0] - 1) <= 2u )
      {
        LOBYTE(v17) = dword_1042CDDC;
        for ( i = 0; i < *(_DWORD *)(dword_1042CDDC + 48); ++i )
        {
          v57 = SLODWORD(v47[0]);
          v58 = v47[1];
          v59 = v48;
          if ( i )
          {
            v69 = sub_10115FB0();
            v40 = (double)v69 * 0.000030518509 * 100.0 - 50.0;
            v69 = sub_10115FB0();
            v41 = (double)v69 * 0.000030518509 * 100.0 - 50.0;
            sub_10115FB0();
            *(float *)&v57 = v40 + *(float *)&v57;
            v58 = v58 + v41;
            v59 = v48;
          }
          v32 = sub_10096300(v2 + 7, v2[10]);
          sub_1009A260(
            v2[7] + 44 * v32,
            v32,
            v64[0],
            (float *)&v57,
            (float *)v49,
            v50[0],
            v51,
            v52,
            v53,
            v54[3],
            v56,
            v55[0],
            *(int *)&v54[1],
            *(int *)&v54[2],
            *(int *)v54);
          LOBYTE(v17) = dword_1042CDDC;
          ++v70;
          v2 = v63;
        }
      }
LABEL_62:
      if ( --v62 < 0 )
      {
        v34 = v60;
        if ( v60 != -1 )
        {
          v35 = v67;
          if ( v67 )
          {
            v36 = (_DWORD *)sub_100DDA40(24);
            if ( v36 )
            {
              *v36 = &CFastDetailLeafSpriteList::`vftable';
              v36[4] = 0;
              v36[5] = 0;
            }
            else
            {
              v36 = 0;
            }
            v37 = v66;
            v36[1] = v35;
            v36[2] = (v35 + 3) >> 2;
            v36[3] = v37;
            (*(void (__thiscall **)(void *, int, _DWORD, _DWORD *))(*(_DWORD *)off_103DCDDC + 24))(
              off_103DCDDC,
              v34,
              0,
              v36);
          }
          LOBYTE(v17) = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)off_103DCDDC + 32))(
                          off_103DCDDC,
                          v34,
                          v61,
                          v70);
        }
        return v17;
      }
      LOBYTE(v17) = v64[0];
    }
  }
  return v17;
}
