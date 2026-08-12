char __thiscall sub_101E4ED0(int this, int a2, int a3, int a4)
{
  char v5; // al
  double v6; // st7
  double v7; // st7
  bool v8; // cl
  char v10; // al
  unsigned __int8 v11; // al
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned __int8 v16; // cl
  int v17; // edi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edi
  float *v24; // ecx
  unsigned int v25; // eax
  _BYTE *v26; // ecx
  int v27; // edi
  int *v28; // ecx
  unsigned int v29; // eax
  _BYTE *v30; // ecx
  int v31; // edx
  bool v32; // zf
  int v33; // edi
  double v34; // st7
  unsigned int v35; // eax
  char *v36; // ecx
  unsigned __int8 v37; // cl
  int v38; // edi
  int *v39; // ecx
  unsigned int v40; // eax
  _BYTE *v41; // ecx
  int v42; // ebp
  int v43; // edi
  int *v44; // ecx
  unsigned int v45; // eax
  _BYTE *v46; // ecx
  float *v47; // edi
  unsigned __int8 v48; // cl
  int v49; // eax
  unsigned __int8 v50; // al
  int v51; // edi
  int *v52; // ecx
  unsigned int v53; // eax
  _BYTE *v54; // ecx
  __int16 v55; // ax
  __int16 v56; // cx
  unsigned __int8 v57; // cl
  float v58; // [esp+54h] [ebp-B4Ch]
  double v59; // [esp+58h] [ebp-B48h]
  float v60; // [esp+58h] [ebp-B48h]
  unsigned __int8 v61; // [esp+6Fh] [ebp-B31h] BYREF
  int v62; // [esp+70h] [ebp-B30h] BYREF
  int v63; // [esp+74h] [ebp-B2Ch] BYREF
  float v64; // [esp+78h] [ebp-B28h] BYREF
  int v65; // [esp+7Ch] [ebp-B24h]
  float *v66; // [esp+80h] [ebp-B20h]
  int v67; // [esp+84h] [ebp-B1Ch]
  _DWORD v68[6]; // [esp+88h] [ebp-B18h] BYREF
  _BYTE v69[256]; // [esp+A0h] [ebp-B00h] BYREF
  _BYTE v70[256]; // [esp+1A0h] [ebp-A00h] BYREF
  char Src[256]; // [esp+2A0h] [ebp-900h] BYREF
  char Source[2048]; // [esp+3A0h] [ebp-800h] BYREF

  v66 = (float *)this;
  v5 = sub_1011C940((_DWORD *)a2);
  *(_BYTE *)(this + 4) = v5;
  if ( v5 == 5 || v5 == 11 )
    *(_BYTE *)(this + 376) |= 1u;
  else
    *(_BYTE *)(this + 376) &= ~1u;
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
  }
  else
  {
    sub_1011C540((_DWORD *)a2, (char *)&v62);
  }
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v62, Src, 256);
  sub_1022D0A0(Src);
  sub_1011C490((_DWORD *)a2, &v63, "%f");
  v6 = *(float *)&v63;
  *(float *)(this + 72) = *(float *)&v63;
  if ( -1.0 != *(float *)(this + 76) && v6 > *(float *)(this + 76) )
    *(float *)(this + 76) = v6;
  sub_1011C490((_DWORD *)a2, &v63, "%f");
  v7 = *(float *)&v63;
  v8 = *(float *)&v63 != *(float *)(this + 76);
  *(float *)(this + 76) = *(float *)&v63;
  if ( -1.0 != v7 )
  {
    if ( v7 < *(float *)(this + 72) )
      *(float *)(this + 76) = *(float *)(this + 72);
    if ( v8 )
      sub_101E3B50((_DWORD *)this);
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
  }
  else
  {
    sub_1011C540((_DWORD *)a2, (char *)&v62);
  }
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v62, Source, 2048);
  sub_1022D0A0(Source);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
  }
  else
  {
    sub_1011C540((_DWORD *)a2, (char *)&v62);
  }
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v62, Source, 2048);
  sub_101E1BA0(Source);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
  }
  else
  {
    sub_1011C540((_DWORD *)a2, (char *)&v62);
  }
  (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v62, Source, 2048);
  sub_101E1C20(Source);
  if ( !sub_101E3F70((int *)(this + 92), 0, (_DWORD *)a2, a4) )
    return 0;
  v10 = sub_101BD3B0((_DWORD *)a2);
  *(_BYTE *)(this + 376) = *(_BYTE *)(this + 376) & 0xDC | ((v10 & 4) != 0) | (2 * (v10 & 1 | (16 * ((v10 & 2) != 0))));
  *(_BYTE *)(this + 377) = *(_BYTE *)(this + 377) & 0x97
                         | (8 * (((v10 & 0x10) != 0) | (4 * (((v10 & 8) != 0) | (2 * ((v10 & 0x20) != 0))))));
  sub_1011C490((_DWORD *)a2, &v63, "%f");
  *(float *)(this + 308) = *(float *)&v63;
  v11 = sub_101BD3B0((_DWORD *)a2);
  if ( v11 )
  {
    v12 = v11;
    do
    {
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v62 = 0;
        sub_1022F5B0(a2, "%d", &v62);
      }
      else if ( (unsigned __int8)sub_1022E380(2) )
      {
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
        {
          sub_1011C410(
            (_BYTE *)(a2 + 44),
            (char *)&v62,
            (char *)(*(_DWORD *)(a2 + 12) + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32)),
            1);
          *(_DWORD *)(a2 + 12) += 2;
        }
        else
        {
          v13 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
          *(_DWORD *)(a2 + 12) += 2;
          v62 = v13;
        }
      }
      else
      {
        v62 = 0;
      }
      (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)a4 + 4))(a4, v62, v69, 256);
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v61 = 0;
        sub_1022F5B0(a2, "%u", &v61);
      }
      else if ( (unsigned __int8)sub_1022E380(1) )
      {
        v14 = *(_DWORD *)(a2 + 12) + 1;
        v61 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
        *(_DWORD *)(a2 + 12) = v14;
      }
      else
      {
        v61 = 0;
      }
      sub_1022D3E0(v68);
      sub_1022D0A0(v69);
      v15 = *(_DWORD *)(this + 200);
      v63 = v61;
      v68[5] = this;
      *(float *)&v68[4] = (double)v61 * 0.0039215689;
      sub_101E47A0((int *)(this + 188), v15, (int)v68);
      if ( v68[2] >= 0 && v68[0] )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v68[0]);
      --v12;
    }
    while ( v12 );
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v61 = 0;
    sub_1022F5B0(a2, "%u", &v61);
    v16 = v61;
  }
  else if ( (unsigned __int8)sub_1022E380(1) )
  {
    v16 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
  }
  else
  {
    v16 = 0;
  }
  if ( v16 )
  {
    v17 = v16;
    do
    {
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v62 = 0;
        sub_1022F5B0(a2, "%d", &v62);
      }
      else if ( (unsigned __int8)sub_1022E380(2) )
      {
        v18 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
        {
          sub_1011C410((_BYTE *)(a2 + 44), (char *)&v62, (char *)(*(_DWORD *)(a2 + 12) + v18), 1);
          *(_DWORD *)(a2 + 12) += 2;
        }
        else
        {
          v19 = *(unsigned __int16 *)(v18 + *(_DWORD *)(a2 + 12));
          *(_DWORD *)(a2 + 12) += 2;
          v62 = v19;
        }
      }
      else
      {
        v62 = 0;
      }
      (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)a4 + 4))(a4, v62, v69, 256);
      if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
      {
        v61 = 0;
        sub_1022F5B0(a2, "%u", &v61);
      }
      else if ( (unsigned __int8)sub_1022E380(1) )
      {
        v20 = *(_DWORD *)(a2 + 12) + 1;
        v61 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
        *(_DWORD *)(a2 + 12) = v20;
      }
      else
      {
        v61 = 0;
      }
      v63 = v61;
      v58 = (double)v61 * 0.0039215689;
      sub_101E4AD0((int *)this, v69, v58, 0);
      --v17;
    }
    while ( v17 );
  }
  *(float *)&v21 = 0.0;
  *(float *)&v63 = 0.0;
  do
  {
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v61 = 0;
      sub_1022F5B0(a2, "%u", &v61);
    }
    else if ( (unsigned __int8)sub_1022E380(1) )
    {
      v22 = *(_DWORD *)(a2 + 12) + 1;
      v61 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v22;
    }
    else
    {
      v61 = 0;
    }
    if ( v61 )
    {
      v67 = v61;
      do
      {
        if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
        {
          v64 = 0.0;
          sub_1022F5B0(a2, "%d", &v64);
        }
        else if ( (unsigned __int8)sub_1022E380(2) )
        {
          v23 = *(_DWORD *)(a2 + 12);
          if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
          {
            LODWORD(v64) = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + v23);
LABEL_85:
            *(_DWORD *)(a2 + 12) = v23 + 2;
            goto LABEL_88;
          }
          v24 = (float *)(v23 + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32));
          if ( !v24 )
            v24 = &v64;
          if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
          {
            if ( v24 )
            {
              LOWORD(v64) = *(_WORD *)v24;
              *(_DWORD *)(a2 + 12) = v23 + 2;
              goto LABEL_88;
            }
            goto LABEL_85;
          }
          v25 = 0;
          v65 = LOWORD(v64);
          v26 = (char *)v24 + 1;
          do
            *((_BYTE *)&v65 + v25++) = *v26--;
          while ( v25 < 2 );
          LOWORD(v64) = v65;
          *(_DWORD *)(a2 + 12) = v23 + 2;
        }
        else
        {
          v64 = 0.0;
        }
LABEL_88:
        (*(void (__thiscall **)(int, float, _BYTE *, int))(*(_DWORD *)a4 + 4))(a4, COERCE_FLOAT(LODWORD(v64)), v69, 256);
        if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
        {
          v62 = 0;
          sub_1022F5B0(a2, "%u", &v62);
          goto LABEL_103;
        }
        if ( !(unsigned __int8)sub_1022E380(2) )
        {
          v62 = 0;
          goto LABEL_103;
        }
        v27 = *(_DWORD *)(a2 + 12);
        if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
        {
          v62 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + v27);
LABEL_100:
          *(_DWORD *)(a2 + 12) = v27 + 2;
          goto LABEL_103;
        }
        v28 = (int *)(v27 + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32));
        if ( !v28 )
          v28 = &v62;
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
        {
          v65 = (unsigned __int16)v62;
          v29 = 0;
          v30 = (char *)v28 + 1;
          do
            *((_BYTE *)&v65 + v29++) = *v30--;
          while ( v29 < 2 );
          LOWORD(v62) = v65;
          *(_DWORD *)(a2 + 12) = v27 + 2;
          goto LABEL_103;
        }
        if ( !v28 )
          goto LABEL_100;
        LOWORD(v62) = *(_WORD *)v28;
        *(_DWORD *)(a2 + 12) = v27 + 2;
LABEL_103:
        v21 = v63;
        v65 = (unsigned __int16)v62;
        v60 = (double)(unsigned __int16)v62 * 0.00024414062;
        sub_101E4C80((_DWORD *)this, v63, v69, v60);
        --v67;
      }
      while ( v67 );
    }
    v63 = ++v21;
  }
  while ( v21 < 2 );
  if ( *((_BYTE *)v66 + 4) == 6 )
  {
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      LODWORD(v59) = &v64;
      v64 = 0.0;
      sub_1022F5B0(a2, "%f", v59);
      v34 = v64;
      goto LABEL_115;
    }
    if ( (unsigned __int8)sub_1022E380(4) )
    {
      v31 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 32);
      v32 = (*(_BYTE *)(a2 + 44) & 1) == 0;
      v33 = *(_DWORD *)(a2 + 12);
      v34 = *(float *)(v31 + v33);
      v64 = *(float *)(v31 + v33);
      if ( !v32 )
      {
        *(float *)&v63 = v34;
        v35 = 0;
        v36 = (char *)&v64 + 3;
        do
          *((_BYTE *)&v63 + v35++) = *v36--;
        while ( v35 < 4 );
        v64 = *(float *)&v63;
        v34 = *(float *)&v63;
      }
      *(_DWORD *)(a2 + 12) = v33 + 4;
LABEL_115:
      if ( -1.0 != v34 )
        v66[20] = v34;
    }
    else
    {
      v66[20] = 0.0;
    }
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) == 0 )
  {
    if ( (unsigned __int8)sub_1022E380(1) )
    {
      v37 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
      goto LABEL_121;
    }
    goto LABEL_153;
  }
  v61 = 0;
  sub_1022F5B0(a2, "%c", &v61);
  v37 = v61;
LABEL_121:
  if ( v37 != 1 )
  {
LABEL_153:
    v42 = a4;
    goto LABEL_154;
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
    goto LABEL_137;
  }
  if ( !(unsigned __int8)sub_1022E380(2) )
  {
    v62 = 0;
    goto LABEL_137;
  }
  v38 = *(_DWORD *)(a2 + 12);
  if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
  {
    v62 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + v38);
LABEL_134:
    *(_DWORD *)(a2 + 12) = v38 + 2;
    goto LABEL_137;
  }
  v39 = (int *)(v38 + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32));
  if ( !v39 )
    v39 = &v62;
  if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
  {
    if ( v39 )
    {
      LOWORD(v62) = *(_WORD *)v39;
      *(_DWORD *)(a2 + 12) = v38 + 2;
      goto LABEL_137;
    }
    goto LABEL_134;
  }
  v63 = (unsigned __int16)v62;
  v40 = 0;
  v41 = (char *)v39 + 1;
  do
    *((_BYTE *)&v63 + v40++) = *v41--;
  while ( v40 < 2 );
  LOWORD(v62) = v63;
  *(_DWORD *)(a2 + 12) = v38 + 2;
LABEL_137:
  v42 = a4;
  (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)a4 + 4))(a4, v62, v69, 256);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v62 = 0;
    sub_1022F5B0(a2, "%d", &v62);
    goto LABEL_152;
  }
  if ( !(unsigned __int8)sub_1022E380(2) )
  {
    v62 = 0;
    goto LABEL_152;
  }
  v43 = *(_DWORD *)(a2 + 12);
  if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
  {
    v62 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + v43);
LABEL_149:
    *(_DWORD *)(a2 + 12) = v43 + 2;
    goto LABEL_152;
  }
  v44 = (int *)(v43 + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32));
  if ( !v44 )
    v44 = &v62;
  if ( (*(_BYTE *)(a2 + 44) & 1) == 0 )
  {
    if ( v44 )
    {
      LOWORD(v62) = *(_WORD *)v44;
      *(_DWORD *)(a2 + 12) = v43 + 2;
      goto LABEL_152;
    }
    goto LABEL_149;
  }
  v63 = (unsigned __int16)v62;
  v45 = 0;
  v46 = (char *)v44 + 1;
  do
    *((_BYTE *)&v63 + v45++) = *v46--;
  while ( v45 < 2 );
  LOWORD(v62) = v63;
  *(_DWORD *)(a2 + 12) = v43 + 2;
LABEL_152:
  (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)a4 + 4))(a4, v62, v70, 256);
  *((_BYTE *)v66 + 376) |= 4u;
  sub_1022D0A0(v69);
  sub_1022D0A0(v70);
LABEL_154:
  v47 = v66;
  if ( !sub_101E40A0(v66, (int)v66, a2, v42) )
    return 0;
  if ( *((_BYTE *)v47 + 4) == 12 )
  {
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v61 = 0;
      sub_1022F5B0(a2, "%c", &v61);
      v48 = v61;
    }
    else if ( (unsigned __int8)sub_1022E380(1) )
    {
      v48 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
    }
    else
    {
      v48 = 0;
    }
    v49 = (char)v48;
    if ( (char)v48 <= -1 )
      v49 = -1;
    *((_DWORD *)v47 + 21) = v49;
  }
  if ( *((_BYTE *)v47 + 4) == 5 )
  {
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v61 = 0;
      sub_1022F5B0(a2, "%c", &v61);
      v50 = v61;
    }
    else if ( (unsigned __int8)sub_1022E380(1) )
    {
      v50 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
    }
    else
    {
      v50 = 0;
    }
    *((_BYTE *)v47 + 5) = v50;
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v62 = 0;
      sub_1022F5B0(a2, "%d", &v62);
    }
    else if ( (unsigned __int8)sub_1022E380(2) )
    {
      v51 = *(_DWORD *)(a2 + 12);
      if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
      {
        v52 = (int *)(v51 + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32));
        if ( !v52 )
          v52 = &v62;
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
        {
          v53 = 0;
          v63 = (unsigned __int16)v62;
          v54 = (char *)v52 + 1;
          do
            *((_BYTE *)&v63 + v53++) = *v54--;
          while ( v53 < 2 );
          v55 = v63;
          v42 = a4;
          *(_DWORD *)(a2 + 12) = v51 + 2;
          v47 = v66;
          LOWORD(v62) = v55;
          goto LABEL_185;
        }
        if ( v52 )
        {
          v56 = *(_WORD *)v52;
          *(_DWORD *)(a2 + 12) = v51 + 2;
          v47 = v66;
          LOWORD(v62) = v56;
          goto LABEL_185;
        }
      }
      else
      {
        v62 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + v51);
      }
      *(_DWORD *)(a2 + 12) = v51 + 2;
      v47 = v66;
    }
    else
    {
      v62 = 0;
    }
LABEL_185:
    (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)v42 + 4))(v42, v62, v70, 256);
    sub_1022D0A0(v70);
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v61 = 0;
      sub_1022F5B0(a2, "%c", &v61);
      v57 = v61;
    }
    else if ( (unsigned __int8)sub_1022E380(1) )
    {
      v57 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + (*(_DWORD *)(a2 + 12))++);
    }
    else
    {
      v57 = 0;
    }
    if ( (v57 & 1) != 0 )
      *((_BYTE *)v47 + 376) |= 0x80u;
    if ( (v57 & 2) != 0 )
      *((_BYTE *)v47 + 377) |= 2u;
    if ( (v57 & 4) != 0 )
      *((_BYTE *)v47 + 377) |= 4u;
  }
  return 1;
}
