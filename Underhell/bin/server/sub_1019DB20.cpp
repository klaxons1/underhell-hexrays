int __usercall sub_1019DB20@<eax>(int a1@<ebp>)
{
  int v1; // edi
  float v2; // ecx
  float v3; // edx
  double v4; // st6
  double v5; // st6
  double v6; // st7
  _DWORD *v7; // eax
  int v8; // esi
  double v9; // st7
  double v10; // st5
  double v11; // st6
  double i; // st7
  double v13; // st4
  double v14; // rtt
  double v15; // st4
  double v16; // rt0
  double v17; // st4
  double v18; // rt1
  double v19; // st3
  double v20; // st4
  double v21; // st7
  double v22; // st6
  double v23; // st4
  double v24; // st7
  double v25; // st4
  double v26; // st7
  double v27; // st4
  double v28; // st5
  double v29; // st7
  int v30; // ecx
  int v31; // ecx
  bool v32; // zf
  float v33; // ecx
  int v34; // edx
  double v35; // st3
  double v36; // rt0
  double v37; // st3
  double v38; // rt1
  double v39; // st3
  double v40; // st7
  double v41; // rtt
  double v42; // st1
  double v43; // st6
  double v44; // rt1
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  int *v48; // edi
  int result; // eax
  float v50; // [esp+10h] [ebp-130h]
  float v51; // [esp+10h] [ebp-130h]
  _BYTE v52[12]; // [esp+1Ch] [ebp-124h] BYREF
  _BYTE v53[32]; // [esp+28h] [ebp-118h] BYREF
  float v54; // [esp+48h] [ebp-F8h]
  char v55; // [esp+53h] [ebp-EDh]
  float v56[14]; // [esp+74h] [ebp-CCh] BYREF
  float v57; // [esp+ACh] [ebp-94h]
  char v58; // [esp+B4h] [ebp-8Ch]
  bool v59; // [esp+B5h] [ebp-8Bh]
  float v60; // [esp+C4h] [ebp-7Ch]
  float v61; // [esp+C8h] [ebp-78h]
  float v62; // [esp+CCh] [ebp-74h]
  float v63; // [esp+D0h] [ebp-70h] BYREF
  float v64; // [esp+D4h] [ebp-6Ch]
  float v65; // [esp+D8h] [ebp-68h]
  float v66; // [esp+DCh] [ebp-64h] BYREF
  float v67; // [esp+E0h] [ebp-60h]
  float v68; // [esp+E4h] [ebp-5Ch]
  float v69; // [esp+E8h] [ebp-58h] BYREF
  float v70; // [esp+ECh] [ebp-54h]
  float v71; // [esp+F0h] [ebp-50h]
  float v72; // [esp+F4h] [ebp-4Ch]
  float v73; // [esp+F8h] [ebp-48h]
  float v74; // [esp+FCh] [ebp-44h]
  float v75; // [esp+100h] [ebp-40h] BYREF
  float v76; // [esp+104h] [ebp-3Ch]
  float v77; // [esp+108h] [ebp-38h]
  float v78; // [esp+10Ch] [ebp-34h] BYREF
  float v79; // [esp+110h] [ebp-30h]
  int v80; // [esp+114h] [ebp-2Ch]
  float v81; // [esp+118h] [ebp-28h] BYREF
  float v82; // [esp+11Ch] [ebp-24h]
  float v83; // [esp+120h] [ebp-20h]
  float v84; // [esp+124h] [ebp-1Ch] BYREF
  float v85; // [esp+128h] [ebp-18h]
  float v86; // [esp+12Ch] [ebp-14h]
  float v87; // [esp+130h] [ebp-10h]
  _DWORD v88[3]; // [esp+134h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+140h] [ebp+0h]

  *(float *)&result = COERCE_FLOAT(sub_1025EF10());
  if ( (_BYTE)result )
  {
    v88[0] = a1;
    v88[1] = retaddr;
    v1 = dword_106B8370;
    if ( *(_DWORD *)(dword_106B8370 + 1124) != 1
      && !*(_BYTE *)(dword_106B8370 + 1168)
      && *(_BYTE *)(dword_106B8370 + 1128) )
    {
      v84 = -*(float *)(dword_106B8370 + 1132);
      v85 = -*(float *)(dword_106B8370 + 1136);
      v86 = -*(float *)(dword_106B8370 + 1140);
      sub_10421D80(&v84, &v63);
      v2 = *(float *)(v1 + 1080);
      v3 = *(float *)(v1 + 1084);
      v4 = *(float *)(v1 + 1132) * -16.0;
      v75 = *(float *)(v1 + 1076);
      v84 = v75;
      v78 = v4;
      v66 = v75;
      v5 = *(float *)(v1 + 1136);
      v69 = v75;
      v76 = v2;
      v85 = v2;
      v79 = v5 * -16.0;
      v67 = v2;
      v70 = v2;
      v6 = -16.0 * *(float *)(v1 + 1140);
      v77 = v3;
      *(float *)&v80 = v6;
      v86 = v3;
      v68 = v3;
      v71 = v3;
      v81 = v63 * -1.0;
      v82 = v64 * -1.0;
      v83 = -1.0 * v65;
      sub_10192EA0(&v75, &v81, &v78);
      v81 = v63;
      v82 = v64;
      v83 = v65;
      sub_10192EA0(&v84, &v81, &v78);
      v81 = v60;
      v82 = v61;
      v83 = v62;
      sub_10192EA0(&v66, &v81, &v78);
      v81 = v60 * -1.0;
      v82 = v61 * -1.0;
      v83 = -1.0 * v62;
      sub_10192EA0(&v69, &v81, &v78);
      v79 = *(float *)(v1 + 1132);
      v80 = *(int *)(v1 + 1136);
      v7 = (_DWORD *)sub_10184390(72);
      v8 = 0;
      if ( v7 )
      {
        v7[8] = 0;
        v7[10] = 0;
        v7[9] = 0;
        v7[11] = 0;
        v7[12] = 0;
        v7[17] = dword_10632748++;
        v8 = (int)v7;
      }
      *(float *)v8 = v66;
      *(float *)(v8 + 4) = v67;
      *(float *)(v8 + 8) = v68;
      *(float *)(v8 + 12) = v69;
      *(float *)(v8 + 16) = v70;
      *(float *)(v8 + 20) = v71;
      v50 = (v77 - v86) * (v77 - v86) + (v76 - v85) * (v76 - v85) + (v75 - v84) * (v75 - v84);
      *(float *)(v8 + 28) = off_10689708(v50);
      if ( fabs(*(float *)&v80) >= fabs(v79) )
      {
        if ( *(float *)&v80 <= 0.0 )
          sub_1019CD40(v8, COERCE_FLOAT(v88), v8, 0);
        else
          sub_1019CD40(v8, COERCE_FLOAT(v88), v8, 2);
      }
      else if ( v79 <= 0.0 )
      {
        sub_1019CD40(v8, COERCE_FLOAT(v88), v8, 3);
      }
      else
      {
        sub_1019CD40(v8, COERCE_FLOAT(v88), v8, 1);
      }
      v72 = *(float *)v8 - *(float *)(v8 + 12);
      v73 = *(float *)(v8 + 4) - *(float *)(v8 + 16);
      v74 = *(float *)(v8 + 8) - *(float *)(v8 + 20);
      v9 = off_10689714();
      *(float *)&v80 = v9;
      v10 = 0.0;
      v87 = 0.0;
      v11 = 0.0;
      if ( v9 < 0.0 )
      {
        v22 = 32.0;
      }
      else
      {
        for ( i = 32.0; ; i = 32.0 )
        {
          v13 = v72 * v11 + *(float *)(v8 + 12);
          v84 = v13;
          v14 = v13;
          v15 = v73 * v11 + *(float *)(v8 + 16);
          v85 = v15;
          v16 = v15;
          v17 = v11 * v74 + *(float *)(v8 + 20);
          v86 = v17;
          v77 = v17;
          v18 = v17;
          v75 = v14;
          v76 = v16;
          v19 = *(float *)(v8 + 60) * i;
          v20 = i * *(float *)(v8 + 64);
          v81 = v14 + *(float *)(v8 + 56) * i;
          v82 = v16 + v19;
          v83 = v18 + v20;
          sub_1001F180(v56, &v75, &v81);
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v56,
            81931,
            &v69,
            v52);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v52, (int)v53, 255, 0, 0, 1, 5.0);
          if ( 1.0 == v54 && !v55 )
            break;
          v21 = v87 + 10.0;
          v87 = v21;
          if ( *(float *)&v80 < v21 )
          {
            v9 = *(float *)&v80;
            v22 = 32.0;
            v10 = 0.0;
            goto LABEL_24;
          }
          v11 = v21;
        }
        *(float *)(v8 + 12) = v84;
        *(float *)(v8 + 16) = v85;
        *(float *)(v8 + 20) = v86;
        v9 = *(float *)&v80;
        v10 = 0.0;
        v22 = 32.0;
      }
LABEL_24:
      v87 = v10;
      v23 = v9;
      v24 = v10;
      if ( v23 >= v10 )
      {
        while ( 1 )
        {
          v35 = *(float *)v8 - v72 * v24;
          v84 = v35;
          v36 = v35;
          v37 = *(float *)(v8 + 4) - v73 * v24;
          v85 = v37;
          v38 = v37;
          v39 = *(float *)(v8 + 8) - v24 * v74;
          v40 = v38;
          v86 = v39;
          v41 = *(float *)(v8 + 56) * v22 + v36;
          v42 = v22 * *(float *)(v8 + 64);
          v43 = *(float *)(v8 + 60) * v22 + v38;
          v44 = v42 + v39;
          v56[4] = v41 - v36;
          v56[5] = v43 - v40;
          v56[6] = v44 - v39;
          v59 = v10 != (v41 - v36) * (v41 - v36) + (v43 - v40) * (v43 - v40) + (v44 - v39) * (v44 - v39);
          v57 = v10;
          v56[13] = v57;
          v56[12] = v57;
          v58 = 1;
          v56[10] = v57;
          v56[9] = v57;
          v56[8] = v57;
          v56[0] = v36;
          v56[1] = v40;
          v56[2] = v39;
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v56,
            81931,
            &v81,
            v52);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v52, (int)v53, 255, 0, 0, 1, 5.0);
          if ( 1.0 == v54 && !v55 )
            break;
          v24 = v87 + 10.0;
          v87 = v24;
          if ( *(float *)&v80 < v24 )
            goto LABEL_25;
          v22 = 32.0;
          v10 = 0.0;
        }
        *(float *)v8 = v84;
        *(float *)(v8 + 4) = v85;
        *(float *)(v8 + 8) = v86;
      }
LABEL_25:
      v25 = *(float *)v8 - *(float *)(v8 + 12);
      v26 = v25 * v25;
      v27 = *(float *)(v8 + 4) - *(float *)(v8 + 16);
      v28 = *(float *)(v8 + 8) - *(float *)(v8 + 20);
      v51 = v28 * v28 + v27 * v27 + v26;
      v29 = off_10689708(v51);
      v30 = *(_DWORD *)(v8 + 52);
      *(float *)(v8 + 24) = v29;
      sub_1019CD40(v8, COERCE_FLOAT(v88), v8, v30);
      *(_DWORD *)(v8 + 48) = 0;
      *(_DWORD *)(v8 + 32) = 0;
      *(_DWORD *)(v8 + 36) = 0;
      *(_DWORD *)(v8 + 40) = 0;
      *(_DWORD *)(v8 + 44) = 0;
      sub_10198C10(v8);
      *(float *)&result = COERCE_FLOAT(sub_1018CED0((int *)(v1 + 1200), 0));
      v80 = result;
      if ( result >= 0 && result < *(_DWORD *)(v1 + 1204) && result <= *(_DWORD *)(v1 + 1228) )
      {
        v31 = *(_DWORD *)(v1 + 1200);
        v32 = *(_DWORD *)(v31 + 12 * result + 4) == result;
        LODWORD(v33) = v31 + 12 * result;
        v87 = v33;
        if ( !v32 )
        {
          v34 = *(_DWORD *)(LODWORD(v33) + 4);
          if ( v34 == -1 )
          {
            *(_DWORD *)(v1 + 1212) = *(_DWORD *)(LODWORD(v33) + 8);
          }
          else
          {
            *(_DWORD *)(*(_DWORD *)(v1 + 1200) + 12 * v34 + 8) = *(_DWORD *)(LODWORD(v33) + 8);
            result = v80;
            v33 = v87;
          }
          v45 = *(_DWORD *)(LODWORD(v33) + 8);
          if ( v45 == -1 )
          {
            *(_DWORD *)(v1 + 1216) = *(_DWORD *)(LODWORD(v33) + 4);
          }
          else
          {
            *(_DWORD *)(*(_DWORD *)(v1 + 1200) + 12 * v45 + 4) = *(_DWORD *)(LODWORD(v33) + 4);
            result = v80;
            v33 = v87;
          }
          *(float *)(LODWORD(v33) + 8) = *(float *)&result;
          *(float *)(LODWORD(v33) + 4) = *(float *)&result;
          --*(_DWORD *)(v1 + 1224);
        }
      }
      v46 = 12 * result + *(_DWORD *)(v1 + 1200);
      *(_DWORD *)(v46 + 8) = -1;
      v80 = 12 * result;
      v47 = *(_DWORD *)(v1 + 1216);
      *(_DWORD *)(v46 + 4) = v47;
      *(float *)(v1 + 1216) = *(float *)&result;
      if ( v47 == -1 )
        *(float *)(v1 + 1212) = *(float *)&result;
      else
        *(float *)(*(_DWORD *)(v1 + 1200) + 12 * v47 + 8) = *(float *)&result;
      ++*(_DWORD *)(v1 + 1224);
      v48 = (int *)(v80 + *(_DWORD *)(v1 + 1200));
      if ( v48 )
        *v48 = v8;
    }
  }
  return result;
}
