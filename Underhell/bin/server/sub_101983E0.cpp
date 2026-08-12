int __usercall sub_101983E0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v2; // esi
  int result; // eax
  bool v4; // zf
  float v5; // edx
  float v6; // eax
  double v7; // st7
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  int v11; // eax
  float *v12; // eax
  double v13; // st6
  double v14; // st6
  float *v15; // ebx
  float *v16; // eax
  float v17; // edx
  float v18; // eax
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  double v24; // st7
  int v25; // ecx
  int i; // eax
  int v27; // edx
  int v28; // edi
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // eax
  float v32; // edx
  int v33; // ebx
  int v34; // esi
  int v35; // eax
  double v36; // st7
  double v37; // st4
  double v38; // st6
  double v39; // st4
  double v40; // st5
  double v41; // st6
  double v42; // st7
  double v43; // st6
  float *v44; // edx
  int v45; // eax
  int v46; // ecx
  float *v47; // eax
  float **v48; // edx
  int v49; // ebx
  int v50; // eax
  int v51; // ecx
  float *v52; // edx
  int v53; // eax
  int v54; // ecx
  _DWORD *v55; // edx
  int v56; // ecx
  int v57; // eax
  float v58; // [esp+0h] [ebp-45Ch]
  float v59; // [esp+0h] [ebp-45Ch]
  _DWORD v60[258]; // [esp+8h] [ebp-454h] BYREF
  int v61; // [esp+410h] [ebp-4Ch]
  int v62; // [esp+414h] [ebp-48h]
  float v63; // [esp+418h] [ebp-44h]
  float v64; // [esp+41Ch] [ebp-40h]
  float v65; // [esp+420h] [ebp-3Ch]
  float *v66; // [esp+424h] [ebp-38h]
  float v67[2]; // [esp+428h] [ebp-34h] BYREF
  float v68; // [esp+430h] [ebp-2Ch] BYREF
  float v69; // [esp+434h] [ebp-28h]
  int v70; // [esp+438h] [ebp-24h]
  float *v71; // [esp+43Ch] [ebp-20h]
  int v72; // [esp+440h] [ebp-1Ch]
  int j; // [esp+444h] [ebp-18h]
  float *v74; // [esp+448h] [ebp-14h]
  float *v75; // [esp+44Ch] [ebp-10h]
  float *v76; // [esp+450h] [ebp-Ch]
  int v77; // [esp+454h] [ebp-8h]
  char v78; // [esp+45Ah] [ebp-2h]
  char v79; // [esp+45Bh] [ebp-1h]
  int savedregs; // [esp+45Ch] [ebp+0h] BYREF

  v2 = a1;
  *(_BYTE *)(a1 + 476) = 0;
  result = dword_106B83DC;
  v4 = *(_DWORD *)(dword_106B83DC + 48) == 0;
  v62 = a1;
  if ( v4 )
  {
    v5 = *(float *)(a1 + 32);
    v6 = *(float *)(a1 + 36);
    v67[0] = *(float *)(a1 + 28);
    v67[1] = v5;
    v68 = v6;
    result = sub_1019DEA0(v67, &v68, 0);
    if ( (_BYTE)result )
    {
      v7 = v68;
      if ( (*(_BYTE *)(v2 + 40) & 1) != 0 )
        v8 = v7 + 32.399998;
      else
        v8 = v7 + 64.799995;
      v9 = dword_10632624;
      v68 = v8;
      v10 = 200.0;
      v72 = 0;
      while ( 1 )
      {
        v11 = dword_10632630;
        if ( dword_10632630 != -1 )
          break;
LABEL_92:
        result = v72 + 1;
        v72 = result;
        if ( result == 2 )
          return result;
      }
      while ( 1 )
      {
        v61 = 12 * v11;
        v12 = *(float **)(12 * v11 + v9);
        v13 = v12[4];
        v75 = v12;
        v14 = v13 - v12[1];
        dword_106B82B0 = 0;
        if ( v14 < v10 || v75[5] - v75[2] < v10 )
          goto LABEL_91;
        if ( sub_10198130(v75, (int)&savedregs, a2, v2, v67, 0) || *(_BYTE *)(v2 + 476) >= 0x10u )
          goto LABEL_90;
LABEL_12:
        if ( v72 )
        {
          a2 = (int)v75;
          v15 = (float *)v2;
          v71 = (float *)v2;
        }
        else
        {
          v15 = v75;
          a2 = v2;
          v71 = v75;
        }
        if ( a2 && v15 && !*((_BYTE *)v15 + 48) )
        {
          *(_DWORD *)(a2 + 496) = 0;
          *(_DWORD *)(a2 + 500) = 7;
          if ( (float *)a2 == v15 )
          {
            v15[124] = 0.0;
            *((_DWORD *)v15 + 125) = 7;
LABEL_20:
            a2 = 0;
            v16 = v15;
            do
            {
              v16 = (float *)*((_DWORD *)v16 + 124);
              ++a2;
            }
            while ( v16 );
            if ( a2 <= 256 )
            {
              if ( a2 <= 2 )
                goto LABEL_90;
            }
            else
            {
              a2 = 256;
            }
            v46 = 0;
            v47 = v15;
            if ( v72 )
            {
              do
              {
                if ( !v47 )
                  break;
                v60[v46 + 2] = v47;
                v47 = (float *)*((_DWORD *)v47 + 124);
                ++v46;
              }
              while ( v46 < a2 );
            }
            else
            {
              v48 = (float **)&v60[a2 + 1];
              do
              {
                if ( !v47 )
                  break;
                *v48 = v47;
                v47 = (float *)*((_DWORD *)v47 + 124);
                ++v46;
                --v48;
              }
              while ( v46 < a2 );
            }
            v49 = 1;
            while ( 1 )
            {
              if ( !sub_10198130((float *)v60[v49 + 2], (int)&savedregs, a2, v2, v67, 0) )
              {
                v50 = dword_106B82B0;
                if ( dword_106B82B0 == 256 )
                  return Msg("Overflow computing approach areas for area #%d.\n", *(_DWORD *)v2);
                if ( (float *)v60[v49 + 2] == v75 )
                {
                  v51 = v49 - 1;
                  v77 = v49 - 1;
                }
                else
                {
                  v51 = v49;
                  v77 = v49;
                }
                if ( v51 )
                  break;
              }
              if ( ++v49 >= a2 )
                goto LABEL_89;
            }
            a2 = v60[v77 + 2];
            v52 = (float *)&v60[v77 + 2];
            dword_106B7EB0[dword_106B82B0] = *(_DWORD *)a2;
            dword_106B82B0 = v50 + 1;
            v53 = *(unsigned __int8 *)(v2 + 476);
            v54 = 0;
            v71 = v52;
            if ( v53 )
            {
              v69 = *(v52 - 1);
              v55 = (_DWORD *)(v2 + 156);
              do
              {
                if ( *v55 == LODWORD(v69) )
                  break;
                ++v54;
                v55 += 5;
              }
              while ( v54 < *(unsigned __int8 *)(v2 + 476) );
              v52 = v71;
            }
            if ( v54 == v53 )
            {
              if ( v77 < 2 )
                v56 = 0;
              else
                v56 = v60[v77];
              *(_DWORD *)(v2 + 4 * (5 * v53 + 40)) = v56;
              v57 = *((_DWORD *)v52 - 1);
              *(_DWORD *)(v2 + 20 * *(unsigned __int8 *)(v2 + 476) + 156) = v57;
              *(_DWORD *)(v2 + 20 * *(unsigned __int8 *)(v2 + 476) + 164) = *(_DWORD *)(v57 + 500);
              *(_DWORD *)(v2 + 20 * *(unsigned __int8 *)(v2 + 476) + 168) = a2;
              *(_DWORD *)(v2 + 20 * (unsigned __int8)(*(_BYTE *)(v2 + 476))++ + 172) = *(_DWORD *)(a2 + 500);
            }
LABEL_89:
            if ( *(_BYTE *)(v2 + 476) < 0x10u )
              goto LABEL_12;
            goto LABEL_90;
          }
          v17 = v15[8];
          v18 = v15[9];
          v63 = v15[7];
          v64 = v17;
          v65 = v18;
          sub_1018B460();
          v19 = *(float *)(a2 + 32) - v64;
          v20 = v19 * v19;
          v21 = *(float *)(a2 + 28) - v63;
          v22 = v20;
          v23 = *(float *)(a2 + 36) - v65;
          v58 = v21 * v21 + v22 + v23 * v23;
          v24 = off_10689708(v58);
          v25 = dword_106B82B0;
          *(float *)(a2 + 504) = v24;
          for ( i = 0; i < v25; ++i )
          {
            if ( *(_DWORD *)a2 == dword_106B7EB0[i] )
              goto LABEL_90;
          }
          *(float *)(a2 + 508) = 0.0;
          sub_1018B2F0(a2);
          a2 = dword_106B7A10;
          if ( dword_106B7A10 )
            break;
        }
LABEL_90:
        v9 = dword_10632624;
        v10 = 200.0;
LABEL_91:
        v11 = *(_DWORD *)(v61 + v9 + 8);
        if ( v11 == -1 )
          goto LABEL_92;
      }
LABEL_28:
      v76 = (float *)a2;
      sub_1018B410((_DWORD *)a2);
      if ( *(_BYTE *)(a2 + 48) )
        goto LABEL_60;
      if ( (float *)a2 == v15 )
        goto LABEL_20;
      v27 = *(_DWORD *)(a2 + 536);
      v78 = 1;
      v70 = 0;
      v66 = (float *)(a2 + 524);
      v77 = v27;
      v79 = 1;
      v74 = 0;
      v28 = -1;
      for ( j = 0; ; j = 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v29 = 0;
              if ( !v78 )
                break;
              if ( v77 == -1 )
              {
                v30 = v70 + 1;
                v70 = v30;
                if ( v30 == 4 )
                {
                  v28 = *((_DWORD *)v76 + 170);
                  v78 = 0;
                  v74 = v76 + 167;
                  j = 0;
                }
                else
                {
                  v31 = 9 * v30;
                  v32 = v76[v31 + 134];
                  v66 = &v76[v31 + 131];
                  v77 = LODWORD(v32);
                }
              }
              else
              {
                v33 = v70;
                v34 = *(_DWORD *)(*(_DWORD *)v66 + 12 * v77);
                v77 = *(_DWORD *)(*(_DWORD *)v66 + 12 * v77 + 8);
LABEL_50:
                if ( (float *)v34 != v76 && !*(_BYTE *)(v34 + 48) )
                {
                  v36 = sub_10197D70(v34, v76, (int)v29);
                  v69 = v36;
                  if ( v36 >= 0.0
                    && (*(_DWORD *)(v34 + 520) != dword_10632620 && *(_DWORD *)(v34 + 492) != dword_10632620
                     || v36 < *(float *)(v34 + 508)) )
                  {
                    v37 = *(float *)(v34 + 32) - v64;
                    v38 = v37 * v37;
                    v39 = *(float *)(v34 + 28) - v63;
                    v40 = v38;
                    v41 = *(float *)(v34 + 36) - v65;
                    v59 = v39 * v39 + v40 + v41 * v41;
                    v42 = off_10689708(v59);
                    v43 = v69;
                    v44 = v76;
                    v45 = *(_DWORD *)(v34 + 520);
                    *(float *)(v34 + 508) = v69;
                    *(_DWORD *)(v34 + 496) = v44;
                    *(_DWORD *)(v34 + 500) = v33;
                    *(float *)(v34 + 504) = v42 + v43;
                    if ( v45 == dword_10632620 )
                      sub_1018B390(v34);
                    else
                      sub_1018B2F0(v34);
                  }
                }
              }
            }
            if ( v28 != -1 )
              break;
            if ( !v79 )
            {
              v2 = v62;
              v15 = v71;
              *((_DWORD *)v76 + 123) = dword_10632620;
LABEL_60:
              a2 = dword_106B7A10;
              if ( !dword_106B7A10 )
                goto LABEL_90;
              goto LABEL_28;
            }
            v28 = *((_DWORD *)v76 + 179);
            v79 = 0;
            v74 = v76 + 176;
          }
          v35 = *(_DWORD *)v74 + 12 * v28;
          v29 = *(_DWORD **)v35;
          if ( !v79 )
          {
            v34 = v29[12];
            v28 = *(_DWORD *)(v35 + 8);
            v33 = 5;
            goto LABEL_49;
          }
          if ( j )
            break;
          v34 = v29[8];
          v33 = 4;
          j = 1;
LABEL_49:
          if ( v34 )
            goto LABEL_50;
        }
        if ( j == 1 )
        {
          v34 = v29[9];
          v33 = 4;
          j = 2;
          goto LABEL_49;
        }
        if ( j == 2 )
        {
          v34 = v29[10];
          v33 = 4;
          j = 3;
          goto LABEL_49;
        }
        v28 = *(_DWORD *)(v35 + 8);
      }
    }
  }
  return result;
}
