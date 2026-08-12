_DWORD *__thiscall sub_101FE0F0(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  bool v3; // zf
  unsigned int v4; // edi
  int v5; // esi
  bool v6; // cc
  int v7; // eax
  float *v8; // edx
  int v9; // edx
  int v10; // edi
  double v11; // st7
  unsigned int v12; // eax
  char *v13; // esi
  int v14; // eax
  int v15; // edi
  double v16; // st7
  unsigned int v17; // eax
  char *v18; // esi
  int v19; // eax
  int v20; // edi
  double v21; // st7
  unsigned int v22; // eax
  char *v23; // esi
  int v24; // eax
  int v25; // edi
  double v26; // st7
  unsigned int v27; // eax
  char *v28; // esi
  float *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  char *v33; // edx
  char *v34; // esi
  int v35; // ecx
  float v36; // edi
  double v37; // st7
  double v38; // st7
  _BYTE *v39; // edi
  double v40; // st7
  float v41; // edi
  double v42; // st7
  float *v43; // edi
  int v44; // eax
  _DWORD *i; // ecx
  _BYTE *v47; // edi
  _DWORD *v48; // ecx
  int v49; // edx
  float v50; // [esp+0h] [ebp-1310Ch]
  double v51; // [esp+10h] [ebp-130FCh]
  int v52; // [esp+20h] [ebp-130ECh] BYREF
  float v53; // [esp+24h] [ebp-130E8h]
  unsigned int v54; // [esp+28h] [ebp-130E4h] BYREF
  float v55; // [esp+2Ch] [ebp-130E0h] BYREF
  _DWORD *v56; // [esp+30h] [ebp-130DCh]
  float v57; // [esp+34h] [ebp-130D8h] BYREF
  float v58; // [esp+38h] [ebp-130D4h] BYREF
  float v59; // [esp+3Ch] [ebp-130D0h] BYREF
  int v60; // [esp+40h] [ebp-130CCh]
  float *v61; // [esp+44h] [ebp-130C8h]
  int v62; // [esp+48h] [ebp-130C4h] BYREF
  _BYTE *v63; // [esp+4Ch] [ebp-130C0h]
  float Src; // [esp+50h] [ebp-130BCh] BYREF
  float *v65; // [esp+54h] [ebp-130B8h]
  int v66; // [esp+58h] [ebp-130B4h]
  float v67; // [esp+5Ch] [ebp-130B0h]
  int v68; // [esp+60h] [ebp-130ACh] BYREF
  int v69; // [esp+64h] [ebp-130A8h]
  int v70; // [esp+68h] [ebp-130A4h]
  float v71; // [esp+6Ch] [ebp-130A0h] BYREF
  int v72; // [esp+70h] [ebp-1309Ch] BYREF
  int v73; // [esp+74h] [ebp-13098h] BYREF
  int v74; // [esp+78h] [ebp-13094h] BYREF
  float v75[18]; // [esp+7Ch] [ebp-13090h] BYREF
  _BYTE v76[72]; // [esp+C4h] [ebp-13048h] BYREF
  float v77[1024]; // [esp+10Ch] [ebp-13000h] BYREF
  float v78[1024]; // [esp+110Ch] [ebp-12000h] BYREF
  _DWORD v79[17408]; // [esp+210Ch] [ebp-11000h] BYREF

  v2 = this;
  v56 = this;
  *this = 0;
  memset(this + 1, 0, 0x100u);
  memset(v2 + 65, 0, 0x40u);
  memset(v2 + 81, 0, 0x40u);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v52 = 0;
    sub_1022F5B0(a2, "%d", &v52);
  }
  else
  {
    sub_10096130((_DWORD *)a2, &v52);
  }
  v3 = (*(_BYTE *)(a2 + 21) & 1) == 0;
  v69 = v52 != 0 ? 4 : 1;
  if ( v3 )
  {
    sub_10096130((_DWORD *)a2, &v52);
  }
  else
  {
    v52 = 0;
    sub_1022F5B0(a2, "%d", &v52);
  }
  v66 = v52;
  if ( v52 )
  {
    while ( 1 )
    {
      --v66;
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v54 = 0;
        sub_1022F5B0(a2, "%d", &v54);
        v4 = v54;
      }
      else
      {
        if ( !(unsigned __int8)sub_1022E380(4) )
        {
          v4 = 0;
          v54 = 0;
          goto LABEL_16;
        }
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
        {
          sub_1003EE40(
            (_BYTE *)(a2 + 44),
            (int *)&v54,
            (char *)(*(_DWORD *)a2 + *(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 32)),
            1);
          v4 = v54;
          *(_DWORD *)(a2 + 12) += 4;
        }
        else
        {
          v4 = *(_DWORD *)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2);
          *(_DWORD *)(a2 + 12) += 4;
          v54 = v4;
        }
      }
      if ( v4 >= 0x40 )
      {
        Warning("sequence number %d too high in sheet file!!!\n", v4);
        return v56;
      }
LABEL_16:
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v68 = 0;
        sub_1022F5B0(a2, "%d", &v68);
      }
      else
      {
        sub_10096130((_DWORD *)a2, &v68);
      }
      *((_BYTE *)v56 + v4 + 260) = v68 != 0;
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v62 = 0;
        sub_1022F5B0(a2, "%d", &v62);
      }
      else
      {
        sub_10096130((_DWORD *)a2, &v62);
      }
      v5 = v62;
      v56[v4 + 97] = v62;
      v70 = v5 != 1 ? 1024 : 1;
      v56[v54 + 1] = sub_100DDA40((68 * (unsigned __int64)(unsigned int)v70) >> 32 != 0 ? -1 : 68 * v70);
      sub_1011C490((_DWORD *)a2, (int *)&v71, "%f");
      *(float *)&v60 = 0.0;
      v63 = (_BYTE *)(int)v71;
      v52 = 0;
      if ( v62 > 0 )
      {
        v61 = (float *)v79;
        v67 = 1.0 / (double)(int)v63;
        do
        {
          if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
          {
            LODWORD(v51) = &Src;
            Src = 0.0;
            sub_1022F5B0(a2, "%f", v51);
          }
          else if ( (unsigned __int8)sub_1022E380(4) )
          {
            v3 = (*(_BYTE *)(a2 + 44) & 1) == 0;
            Src = *(float *)(*(_DWORD *)(a2 + 12) - *(_DWORD *)(a2 + 32) + *(_DWORD *)a2);
            if ( !v3 )
              sub_1011C390((_BYTE *)(a2 + 44), (int *)&Src, (char *)&Src, 1);
            *(_DWORD *)(a2 + 12) += 4;
          }
          else
          {
            Src = 0.0;
          }
          v6 = v69 <= 0;
          v7 = v52;
          v8 = v61;
          v77[v52] = (float)v52;
          v78[v7] = v67 * *(float *)&v60 * 1024.0;
          v8[16] = 0.0;
          if ( !v6 )
          {
            v65 = v8;
            v63 = (_BYTE *)v69;
            do
            {
              if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
              {
                LODWORD(v51) = &v59;
                v59 = 0.0;
                sub_1022F5B0(a2, "%f", v51);
              }
              else if ( (unsigned __int8)sub_1022E380(4) )
              {
                v9 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
                v3 = (*(_BYTE *)(a2 + 44) & 1) == 0;
                v10 = *(_DWORD *)(a2 + 12);
                v11 = *(float *)(v9 + v10);
                v59 = *(float *)(v9 + v10);
                if ( v3 )
                {
                  *(_DWORD *)(a2 + 12) = v10 + 4;
                }
                else
                {
                  v53 = v11;
                  v12 = 0;
                  v13 = (char *)&v59 + 3;
                  do
                    *((_BYTE *)&v53 + v12++) = *v13--;
                  while ( v12 < 4 );
                  v59 = v53;
                  *(_DWORD *)(a2 + 12) = v10 + 4;
                }
              }
              else
              {
                v59 = 0.0;
              }
              v3 = (*(_BYTE *)(a2 + 21) & 1) == 0;
              *v65 = v59;
              if ( v3 )
              {
                if ( (unsigned __int8)sub_1022E380(4) )
                {
                  v14 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
                  v3 = (*(_BYTE *)(a2 + 44) & 1) == 0;
                  v15 = *(_DWORD *)(a2 + 12);
                  v16 = *(float *)(v14 + v15);
                  v57 = *(float *)(v14 + v15);
                  if ( v3 )
                  {
                    *(_DWORD *)(a2 + 12) = v15 + 4;
                  }
                  else
                  {
                    v53 = v16;
                    v17 = 0;
                    v18 = (char *)&v57 + 3;
                    do
                      *((_BYTE *)&v53 + v17++) = *v18--;
                    while ( v17 < 4 );
                    v57 = v53;
                    *(_DWORD *)(a2 + 12) = v15 + 4;
                  }
                }
                else
                {
                  v57 = 0.0;
                }
              }
              else
              {
                LODWORD(v51) = &v57;
                v57 = 0.0;
                sub_1022F5B0(a2, "%f", v51);
              }
              v3 = (*(_BYTE *)(a2 + 21) & 1) == 0;
              v65[1] = v57;
              if ( v3 )
              {
                if ( (unsigned __int8)sub_1022E380(4) )
                {
                  v19 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
                  v3 = (*(_BYTE *)(a2 + 44) & 1) == 0;
                  v20 = *(_DWORD *)(a2 + 12);
                  v21 = *(float *)(v19 + v20);
                  v55 = *(float *)(v19 + v20);
                  if ( v3 )
                  {
                    *(_DWORD *)(a2 + 12) = v20 + 4;
                  }
                  else
                  {
                    v53 = v21;
                    v22 = 0;
                    v23 = (char *)&v55 + 3;
                    do
                      *((_BYTE *)&v53 + v22++) = *v23--;
                    while ( v22 < 4 );
                    v55 = v53;
                    *(_DWORD *)(a2 + 12) = v20 + 4;
                  }
                }
                else
                {
                  v55 = 0.0;
                }
              }
              else
              {
                LODWORD(v51) = &v55;
                v55 = 0.0;
                sub_1022F5B0(a2, "%f", v51);
              }
              v3 = (*(_BYTE *)(a2 + 21) & 1) == 0;
              v65[2] = v55;
              if ( v3 )
              {
                if ( (unsigned __int8)sub_1022E380(4) )
                {
                  v24 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
                  v3 = (*(_BYTE *)(a2 + 44) & 1) == 0;
                  v25 = *(_DWORD *)(a2 + 12);
                  v26 = *(float *)(v24 + v25);
                  v58 = *(float *)(v24 + v25);
                  if ( v3 )
                  {
                    *(_DWORD *)(a2 + 12) = v25 + 4;
                  }
                  else
                  {
                    v53 = v26;
                    v27 = 0;
                    v28 = (char *)&v58 + 3;
                    do
                      *((_BYTE *)&v53 + v27++) = *v28--;
                    while ( v27 < 4 );
                    v58 = v53;
                    *(_DWORD *)(a2 + 12) = v25 + 4;
                  }
                }
                else
                {
                  v58 = 0.0;
                }
              }
              else
              {
                LODWORD(v51) = &v58;
                v58 = 0.0;
                sub_1022F5B0(a2, "%f", v51);
              }
              v29 = v65;
              v65[3] = v58;
              v3 = v63-- == (_BYTE *)1;
              v65 = v29 + 8;
            }
            while ( !v3 );
          }
          if ( v69 == 1 )
            qmemcpy(v61 + 8, v61, 0x20u);
          v61 += 17;
          *(float *)&v60 = Src + *(float *)&v60;
          v56[v54 + 161] = v60;
          ++v52;
        }
        while ( v52 < v62 );
      }
      *(float *)&v60 = 0.0;
      if ( v70 > 0 )
      {
        v52 = 0;
        do
        {
          v50 = (float)v60;
          sub_101F0770(
            v78,
            v77,
            v62,
            1024,
            v50,
            *((_BYTE *)v56 + v54 + 260) == 0,
            (float *)&v73,
            (float *)&v72,
            (float *)&v74);
          qmemcpy(v75, &v79[17 * (int)*(float *)&v73], 0x44u);
          qmemcpy(v76, &v79[17 * (int)*(float *)&v72], 0x44u);
          v30 = v52 + v56[v54 + 1];
          *(float *)(v30 + 64) = *(float *)&v74;
          v31 = v30 + 4;
          v32 = -v30;
          LODWORD(v67) = (char *)&v75[2] + v32;
          v33 = (char *)v75 + v32;
          v34 = (char *)&v75[1] + v32;
          v63 = &v76[v32];
          v61 = (float *)&v76[v32 + 8];
          LODWORD(v53) = &v76[v32 + 4];
          v35 = 0;
          do
          {
            v36 = v67;
            *(float *)(v31 - 4) = v75[v35];
            v35 += 8;
            v37 = *(float *)&v33[v31];
            v31 += 32;
            *(float *)(v31 - 32) = v37;
            *(float *)(v31 - 28) = *(float *)&v34[v31 - 32];
            v38 = *(float *)(LODWORD(v36) + v31 - 32);
            v39 = v63;
            *(float *)(v31 - 24) = v38;
            *(float *)(v31 - 20) = v75[v35 + 10];
            v40 = *(float *)&v39[v31 - 32];
            v41 = v53;
            *(float *)(v31 - 16) = v40;
            v42 = *(float *)(LODWORD(v41) + v31 - 32);
            v43 = v61;
            *(float *)(v31 - 12) = v42;
            *(float *)(v31 - 8) = *(float *)((char *)v43 + v31 - 32);
          }
          while ( v35 < 16 );
          v52 += 68;
          ++v60;
        }
        while ( v60 < v70 );
      }
      if ( !v66 )
      {
        v2 = v56;
        break;
      }
    }
  }
  v44 = 0;
  for ( i = v2 + 1; !*i; ++i )
  {
    if ( ++v44 >= 64 )
      return v2;
  }
  if ( v44 != -1 )
  {
    v47 = v2 + 81;
    v48 = v2 + 1;
    v49 = 64;
    do
    {
      if ( !*v48 )
      {
        *v48 = v2[v44 + 1];
        *(v47 - 64) = *((_BYTE *)v2 + v44 + 260);
        v48[96] = v2[v44 + 97];
        *v47 = 1;
      }
      ++v48;
      ++v47;
      --v49;
    }
    while ( v49 );
  }
  return v2;
}
