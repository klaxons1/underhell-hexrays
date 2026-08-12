int __thiscall sub_10090140(_DWORD *this, int a2, float a3, float *a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  void *v9; // esp
  float v10; // ecx
  float v11; // edx
  int v13; // ebx
  float *v14; // eax
  double v15; // st7
  float *v16; // eax
  int v17; // ebx
  int v18; // edi
  float *v19; // eax
  double v20; // st7
  float *v21; // eax
  double v22; // st6
  double v23; // st7
  int v24; // eax
  int v25; // ecx
  float *v26; // eax
  double v27; // st7
  double v28; // st4
  double v29; // st6
  _DWORD *v30; // ecx
  _DWORD *v31; // ecx
  __int16 *v32; // ebx
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // eax
  int v37; // esi
  int v38; // esi
  int v39; // ecx
  int v40; // esi
  float v41; // [esp+8h] [ebp-14Ch]
  _BYTE v42[132]; // [esp+Ch] [ebp-148h] BYREF
  _DWORD v43[30]; // [esp+90h] [ebp-C4h]
  float v44; // [esp+108h] [ebp-4Ch]
  float v45; // [esp+10Ch] [ebp-48h]
  float v46; // [esp+110h] [ebp-44h]
  float v47; // [esp+114h] [ebp-40h]
  float v48; // [esp+118h] [ebp-3Ch]
  float v49; // [esp+11Ch] [ebp-38h]
  int v50; // [esp+120h] [ebp-34h]
  float v51; // [esp+124h] [ebp-30h]
  float v52; // [esp+128h] [ebp-2Ch]
  float v53; // [esp+12Ch] [ebp-28h]
  _BYTE *v54; // [esp+130h] [ebp-24h]
  _DWORD *v55; // [esp+134h] [ebp-20h]
  int v56; // [esp+138h] [ebp-1Ch]
  unsigned __int16 v57; // [esp+13Ch] [ebp-18h] BYREF
  unsigned __int16 v58; // [esp+13Eh] [ebp-16h]
  int v59; // [esp+144h] [ebp-10h]
  float v60; // [esp+148h] [ebp-Ch]
  int v61; // [esp+14Ch] [ebp-8h]
  int v62; // [esp+150h] [ebp-4h]
  int v63; // [esp+15Ch] [ebp+8h]
  int v64; // [esp+164h] [ebp+10h]

  v4 = this[5];
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_DWORD *)(v4 + 8);
  v7 = -1;
  v55 = this;
  v62 = 1;
  v61 = 0;
  v56 = v6;
  if ( v5 )
  {
    v8 = this[1];
    if ( v8 )
      *(_DWORD *)(v8 + 2716) |= 8u;
    v9 = alloca(4 * v5);
    v54 = v42;
    sub_1008E250(&v57, v5);
    v10 = *a4;
    v11 = a4[1];
    v53 = a4[2];
    v51 = v10;
    v52 = v11;
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 4 * a2) + 84) )
    {
      *(float *)&v64 = 0.0;
      *(_DWORD *)&v54[4 * a2] = -1;
      v43[0] = a2;
      v63 = 0;
      while ( 1 )
      {
LABEL_8:
        if ( a3 <= (double)*(float *)&v64 && (v7 == -1 || *(_DWORD *)(*(_DWORD *)(v6 + 4 * v7) + 60) != 4) )
        {
          v37 = sub_1008E460(v55, (int)v54, v7);
          if ( v58 > 1u )
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v59);
          return v37;
        }
        ++v63;
        if ( v7 != -1 && !v62 && !v61 )
          break;
        v13 = v7;
        v50 = v7;
        if ( v51 == flt_106F1CA8 && v52 == flt_106F1CAC && v53 == flt_106F1CB0 )
        {
          v24 = *(_DWORD *)dword_106B31E4;
          if ( v62 )
            v7 = v43[(*(int (__stdcall **)(_DWORD, int))(v24 + 8))(0, v62 - 1)];
          else
            v7 = *(_DWORD *)&v42[4 * (*(int (__stdcall **)(_DWORD, int))(v24 + 8))(0, v61 - 1) + 12];
        }
        else
        {
          v60 = -1.0;
          if ( v7 == -1 )
          {
            v14 = (float *)v55[1];
            v47 = v14[179];
            v48 = v14[180];
            v15 = v14[181];
          }
          else
          {
            v16 = *(float **)(v6 + 4 * v7);
            v47 = v16[1];
            v48 = v16[2];
            v15 = v16[3];
          }
          v49 = v15;
          if ( v62 )
          {
            v17 = 0;
            if ( v62 > 0 )
            {
              do
              {
                v18 = v43[v17];
                v19 = *(float **)(v56 + 4 * v18);
                v44 = v47 - v19[1];
                v45 = v48 - v19[2];
                v46 = v49 - v19[3];
                off_10689714();
                v20 = v45 * v52 + v44 * v51 + v46 * v53;
                if ( v60 < v20 )
                {
                  v60 = v20;
                  v7 = v18;
                }
                ++v17;
              }
              while ( v17 < v62 );
              v6 = v56;
            }
            v13 = v50;
          }
          else
          {
            v7 = *(_DWORD *)&v42[4
                               * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                   dword_106B31E4,
                                   0,
                                   v61 - 1)
                               + 12];
          }
          if ( v7 != -1 )
          {
            v21 = *(float **)(v6 + 4 * v7);
            v22 = v48 - v21[2];
            v23 = v49 - v21[3];
            v51 = v47 - v21[1];
            v52 = v22;
            v53 = v23;
            off_10689714();
          }
        }
        if ( v7 < 0 )
        {
          if ( v58 <= 1u )
            return 0;
          v39 = g_pMemAlloc;
          goto LABEL_66;
        }
        *(_DWORD *)&v54[4 * v7] = v13;
        *(_DWORD *)(v59 + 4 * (v7 >> 5)) |= 1 << (v7 & 0x1F);
        if ( v13 != -1 )
        {
          v25 = *(_DWORD *)(v6 + 4 * v13);
          v26 = *(float **)(v6 + 4 * v7);
          v27 = *(float *)(v25 + 4) - v26[1];
          v25 += 4;
          v28 = *(float *)(v25 + 4) - v26[2];
          v29 = *(float *)(v25 + 8) - v26[3];
          v41 = v27 * v27 + v28 * v28 + v29 * v29;
          *(float *)&v64 = off_10689708(v41) + *(float *)&v64;
        }
        if ( (a3 <= (double)*(float *)&v64 || v63 > 20) && *(_DWORD *)(*(_DWORD *)(v6 + 4 * v7) + 60) != 4 )
        {
          v40 = sub_1008E460(v55, (int)v54, v7);
          if ( v58 > 1u )
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v59);
          return v40;
        }
        v30 = *(_DWORD **)(v6 + 4 * v7);
        v62 = 0;
        v61 = 0;
        sub_1008D300(v30);
        v31 = *(_DWORD **)(v6 + 4 * v7);
        v60 = 0.0;
        if ( (int)v31[21] > 0 )
        {
          while ( v61 != 30 && v62 != 30 )
          {
            v32 = (__int16 *)sub_1008D370(v31, SLODWORD(v60));
            v33 = sub_10074630(v32, v7);
            v34 = v33;
            if ( ((1 << (v33 & 0x1F)) & *(_DWORD *)(v59 + 4 * (v33 >> 5))) == 0
              && v33 != v50
              && sub_1008FA50(v55, (int)v32, v7) )
            {
              if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(*(_DWORD *)(v56 + 4 * v34) + 92) )
              {
                v36 = v62;
                v43[v62] = v34;
                v62 = v36 + 1;
              }
              else
              {
                v35 = v61;
                *(_DWORD *)&v42[4 * v61 + 12] = v34;
                v61 = v35 + 1;
              }
            }
            v31 = *(_DWORD **)(v56 + 4 * v7);
            ++LODWORD(v60);
            if ( SLODWORD(v60) >= v31[21] )
            {
              v6 = v56;
              goto LABEL_8;
            }
          }
          if ( v58 > 1u )
          {
            v39 = g_pMemAlloc;
LABEL_66:
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v39 + 20))(v39, v59);
            return 0;
          }
          return 0;
        }
      }
      if ( *(_DWORD *)(*(_DWORD *)(v6 + 4 * v7) + 60) != 4 )
      {
        v38 = sub_1008E460(v55, (int)v54, v7);
        if ( v58 > 1u )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v59);
        return v38;
      }
      if ( v58 <= 1u )
        return 0;
      goto LABEL_6;
    }
    if ( v58 > 1u )
    {
LABEL_6:
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v59);
      return 0;
    }
  }
  return 0;
}
