char __userpurge sub_1041A980@<al>(_DWORD *a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  unsigned __int8 v4; // al
  int v5; // eax
  int v6; // edx
  char *v7; // eax
  bool v8; // zf
  char *v9; // edi
  int v10; // eax
  int v11; // eax
  int *v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // ebp
  int v16; // edi
  float *v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // ecx
  __int16 v20; // ax
  __int16 v21; // cx
  __int16 v22; // dx
  int v23; // eax
  int *v24; // ebx
  int v25; // edx
  int v26; // edi
  double v27; // st7
  unsigned int v28; // eax
  char *v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // ebp
  int v33; // edi
  int *v34; // ecx
  unsigned int v35; // eax
  _BYTE *v36; // ecx
  __int16 v37; // dx
  double v39; // [esp-8h] [ebp-16Ch]
  unsigned __int8 v40; // [esp+Dh] [ebp-157h] BYREF
  char v41; // [esp+Eh] [ebp-156h] BYREF
  unsigned __int8 v42; // [esp+Fh] [ebp-155h] BYREF
  int v43; // [esp+10h] [ebp-154h] BYREF
  float v44; // [esp+14h] [ebp-150h]
  float v45; // [esp+18h] [ebp-14Ch] BYREF
  float v46; // [esp+1Ch] [ebp-148h] BYREF
  float v47; // [esp+20h] [ebp-144h]
  float v48; // [esp+24h] [ebp-140h] BYREF
  float Src; // [esp+28h] [ebp-13Ch] BYREF
  float v50; // [esp+2Ch] [ebp-138h] BYREF
  int v51; // [esp+30h] [ebp-134h] BYREF
  int v52; // [esp+34h] [ebp-130h] BYREF
  int v53; // [esp+38h] [ebp-12Ch] BYREF
  char *v54; // [esp+3Ch] [ebp-128h]
  int v55; // [esp+40h] [ebp-124h]
  int v56; // [esp+44h] [ebp-120h]
  _DWORD *v57; // [esp+48h] [ebp-11Ch]
  float v58[2]; // [esp+4Ch] [ebp-118h] BYREF
  __int16 v59; // [esp+54h] [ebp-110h]
  float v60[2]; // [esp+58h] [ebp-10Ch] BYREF
  __int16 v61; // [esp+60h] [ebp-104h]
  char Source[256]; // [esp+64h] [ebp-100h] BYREF

  v57 = a1;
  v4 = sub_1041A0B0((_DWORD *)a3);
  v56 = v4;
  v55 = 0;
  if ( v4 )
  {
    HIDWORD(v39) = a2;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        v52 = 0;
        sub_1042E720(a3, "%d", &v52);
      }
      else if ( (unsigned __int8)sub_1042D170(2) )
      {
        v5 = *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32);
        if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
        {
          sub_10086860((_BYTE *)(a3 + 44), (char *)&v52, (char *)(*(_DWORD *)a3 + v5), 1);
          *(_DWORD *)(a3 + 12) += 2;
        }
        else
        {
          v6 = *(unsigned __int16 *)(v5 + *(_DWORD *)a3);
          *(_DWORD *)(a3 + 12) += 2;
          v52 = v6;
        }
      }
      else
      {
        v52 = 0;
      }
      (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)a4 + 4))(a4, v52, Source, 256);
      v7 = sub_1041A6C0(v57, Source);
      v8 = (*(_BYTE *)(a3 + 21) & 1) == 0;
      v9 = v7;
      v54 = v7;
      if ( v8 )
      {
        if ( (unsigned __int8)sub_1042D170(1) )
        {
          v10 = *(_DWORD *)(a3 + 12) + 1;
          v41 = *(_BYTE *)(*(_DWORD *)a3 - *(_DWORD *)(a3 + 32) + *(_DWORD *)(a3 + 12));
          *(_DWORD *)(a3 + 12) = v10;
        }
        else
        {
          v41 = 0;
        }
      }
      else
      {
        v41 = 0;
        sub_1042E720(a3, "%u", &v41);
      }
      v9[92] = v9[92] & 0xFC | v41 & 1 | (2 * ((v41 & 2) != 0));
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        LODWORD(v39) = &Src;
        Src = 0.0;
        sub_1042E720(a3, "%f", v39);
      }
      else if ( (unsigned __int8)sub_1042D170(4) )
      {
        v8 = (*(_BYTE *)(a3 + 44) & 1) == 0;
        Src = *(float *)(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32) + *(_DWORD *)a3);
        if ( !v8 )
          sub_100867E0((_BYTE *)(a3 + 44), (int *)&Src, (char *)&Src, 1);
        *(_DWORD *)(a3 + 12) += 4;
      }
      else
      {
        Src = 0.0;
      }
      *((float *)v9 + 2) = Src;
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        LODWORD(v39) = &v48;
        v48 = 0.0;
        sub_1042E720(a3, "%f", v39);
      }
      else if ( (unsigned __int8)sub_1042D170(4) )
      {
        v8 = (*(_BYTE *)(a3 + 44) & 1) == 0;
        v48 = *(float *)(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32) + *(_DWORD *)a3);
        if ( !v8 )
          sub_100867E0((_BYTE *)(a3 + 44), (int *)&v48, (char *)&v48, 1);
        *(_DWORD *)(a3 + 12) += 4;
      }
      else
      {
        v48 = 0.0;
      }
      *((float *)v9 + 3) = v48;
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        v51 = 0;
        sub_1042E720(a3, "%d", &v51);
      }
      else if ( (unsigned __int8)sub_1042D170(2) )
      {
        if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
        {
          sub_10086860(
            (_BYTE *)(a3 + 44),
            (char *)&v51,
            (char *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32)),
            1);
          *(_DWORD *)(a3 + 12) += 2;
        }
        else
        {
          v11 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32) + *(_DWORD *)a3);
          *(_DWORD *)(a3 + 12) += 2;
          v51 = v11;
        }
      }
      else
      {
        v51 = 0;
      }
      if ( (__int16)v51 > 0 )
      {
        v59 = 0;
        v12 = (int *)(v9 + 16);
        LODWORD(v44) = (__int16)v51;
        while ( 1 )
        {
          if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
          {
            LODWORD(v39) = &v50;
            v50 = 0.0;
            sub_1042E720(a3, "%f", v39);
          }
          else if ( (unsigned __int8)sub_1042D170(4) )
          {
            v8 = (*(_BYTE *)(a3 + 44) & 1) == 0;
            v50 = *(float *)(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32) + *(_DWORD *)a3);
            if ( !v8 )
              sub_100867E0((_BYTE *)(a3 + 44), (int *)&v50, (char *)&v50, 1);
            *(_DWORD *)(a3 + 12) += 4;
          }
          else
          {
            v50 = 0.0;
          }
          if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
          {
            v40 = 0;
            sub_1042E720(a3, "%u", &v40);
          }
          else if ( (unsigned __int8)sub_1042D170(1) )
          {
            v13 = *(_DWORD *)(a3 + 12) + 1;
            v40 = *(_BYTE *)(*(_DWORD *)a3 - *(_DWORD *)(a3 + 32) + *(_DWORD *)(a3 + 12));
            *(_DWORD *)(a3 + 12) = v13;
          }
          else
          {
            v40 = 0;
          }
          v14 = v12[3];
          v58[1] = v50;
          LODWORD(v47) = v40;
          v58[0] = (double)v40 * 0.0039215689;
          v15 = *v12 + 10 * sub_1041A030(v12, v14, (int)v58);
          if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
          {
            v46 = 0.0;
            sub_1042E720(a3, "%u", &v46);
            goto LABEL_65;
          }
          if ( !(unsigned __int8)sub_1042D170(2) )
          {
            v46 = 0.0;
            goto LABEL_65;
          }
          v16 = *(_DWORD *)(a3 + 12);
          if ( (*(_BYTE *)(a3 + 44) & 1) == 0 )
            break;
          v17 = (float *)(v16 + *(_DWORD *)a3 - *(_DWORD *)(a3 + 32));
          if ( !v17 )
            v17 = &v46;
          if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
          {
            v18 = 0;
            LODWORD(v47) = LOWORD(v46);
            v19 = (char *)v17 + 1;
            do
              *((_BYTE *)&v47 + v18++) = *v19--;
            while ( v18 < 2 );
            v20 = LOWORD(v47);
            *(_DWORD *)(a3 + 12) = v16 + 2;
            v9 = v54;
            LOWORD(v46) = v20;
            goto LABEL_65;
          }
          if ( !v17 )
            goto LABEL_62;
          v21 = *(_WORD *)v17;
          *(_DWORD *)(a3 + 12) = v16 + 2;
          v9 = v54;
          LOWORD(v46) = v21;
LABEL_65:
          v22 = (2 * LOWORD(v46)) | *(_BYTE *)(v15 + 8) & 1;
          v8 = LODWORD(v44)-- == 1;
          *(_WORD *)(v15 + 8) = v22;
          if ( v8 )
            goto LABEL_66;
        }
        LODWORD(v46) = *(unsigned __int16 *)(*(_DWORD *)a3 - *(_DWORD *)(a3 + 32) + v16);
LABEL_62:
        *(_DWORD *)(a3 + 12) = v16 + 2;
        v9 = v54;
        goto LABEL_65;
      }
LABEL_66:
      if ( (v9[92] & 2) != 0 )
      {
        if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
        {
          v53 = 0;
          sub_1042E720(a3, "%u", &v53);
        }
        else if ( (unsigned __int8)sub_1042D170(2) )
        {
          if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
          {
            sub_10086860(
              (_BYTE *)(a3 + 44),
              (char *)&v53,
              (char *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32)),
              1);
            *(_DWORD *)(a3 + 12) += 2;
          }
          else
          {
            v23 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 32) + *(_DWORD *)a3);
            *(_DWORD *)(a3 + 12) += 2;
            v53 = v23;
          }
        }
        else
        {
          v53 = 0;
        }
        if ( (_WORD)v53 )
          break;
      }
LABEL_106:
      if ( ++v55 >= v56 )
        return 1;
    }
    v61 = 0;
    v24 = (int *)(v9 + 36);
    LODWORD(v47) = (unsigned __int16)v53;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        LODWORD(v39) = &v45;
        v45 = 0.0;
        sub_1042E720(a3, "%f", v39);
      }
      else if ( (unsigned __int8)sub_1042D170(4) )
      {
        v25 = *(_DWORD *)a3 - *(_DWORD *)(a3 + 32);
        v8 = (*(_BYTE *)(a3 + 44) & 1) == 0;
        v26 = *(_DWORD *)(a3 + 12);
        v27 = *(float *)(v25 + v26);
        v45 = *(float *)(v25 + v26);
        if ( v8 )
        {
          *(_DWORD *)(a3 + 12) = v26 + 4;
        }
        else
        {
          v44 = v27;
          v28 = 0;
          v29 = (char *)&v45 + 3;
          do
            *((_BYTE *)&v44 + v28++) = *v29--;
          while ( v28 < 4 );
          v45 = v44;
          *(_DWORD *)(a3 + 12) = v26 + 4;
        }
      }
      else
      {
        v45 = 0.0;
      }
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        v42 = 0;
        sub_1042E720(a3, "%u", &v42);
      }
      else if ( (unsigned __int8)sub_1042D170(1) )
      {
        v30 = *(_DWORD *)(a3 + 12) + 1;
        v42 = *(_BYTE *)(*(_DWORD *)a3 - *(_DWORD *)(a3 + 32) + *(_DWORD *)(a3 + 12));
        *(_DWORD *)(a3 + 12) = v30;
      }
      else
      {
        v42 = 0;
      }
      v31 = v24[3];
      v60[1] = v45;
      v54 = (char *)v42;
      v60[0] = (double)v42 * 0.0039215689;
      v32 = *v24 + 10 * sub_1041A030(v24, v31, (int)v60);
      if ( (*(_BYTE *)(a3 + 21) & 1) != 0 )
      {
        v43 = 0;
        sub_1042E720(a3, "%u", &v43);
        goto LABEL_105;
      }
      if ( !(unsigned __int8)sub_1042D170(2) )
      {
        v43 = 0;
        goto LABEL_105;
      }
      v33 = *(_DWORD *)(a3 + 12);
      if ( (*(_BYTE *)(a3 + 44) & 1) == 0 )
        break;
      v34 = (int *)(v33 + *(_DWORD *)a3 - *(_DWORD *)(a3 + 32));
      if ( !v34 )
        v34 = &v43;
      if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
      {
        LODWORD(v44) = (unsigned __int16)v43;
        v35 = 0;
        v36 = (char *)v34 + 1;
        do
          *((_BYTE *)&v44 + v35++) = *v36--;
        while ( v35 < 2 );
        LOWORD(v43) = LOWORD(v44);
        *(_DWORD *)(a3 + 12) = v33 + 2;
        goto LABEL_105;
      }
      if ( !v34 )
        goto LABEL_102;
      LOWORD(v43) = *(_WORD *)v34;
      *(_DWORD *)(a3 + 12) = v33 + 2;
LABEL_105:
      v37 = (2 * v43) | *(_BYTE *)(v32 + 8) & 1;
      v8 = LODWORD(v47)-- == 1;
      *(_WORD *)(v32 + 8) = v37;
      if ( v8 )
        goto LABEL_106;
    }
    v43 = *(unsigned __int16 *)(*(_DWORD *)a3 - *(_DWORD *)(a3 + 32) + v33);
LABEL_102:
    *(_DWORD *)(a3 + 12) = v33 + 2;
    goto LABEL_105;
  }
  return 1;
}
