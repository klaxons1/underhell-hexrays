int __userpurge sub_10023590@<eax>(int a1@<eax>, int a2@<ecx>, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v7; // st6
  int v9; // ecx
  double v10; // rt0
  double v11; // rt1
  double v12; // st6
  double v13; // st7
  int result; // eax
  double v15; // st7
  float v16; // edx
  double v17; // st6
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // edi
  double v21; // st7
  double v22; // rt0
  double v23; // rt1
  double v24; // st7
  int v25; // ecx
  double v26; // st5
  int v27; // ecx
  double v28; // st5
  int v29; // eax
  double v30; // st7
  int v31; // esi
  int v32; // eax
  int v33; // edi
  int v34; // ebx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // ecx
  _DWORD *v41; // ebx
  bool v42; // zf
  double v43; // st7
  double v44; // st6
  double v45; // st7
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  double v49; // st7
  double v50; // st7
  double v51; // st7
  double v52; // st5
  double v53; // st6
  int v54; // edx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  double v60; // rt2
  double v61; // st4
  double v62; // st5
  double v63; // st7
  long double v64; // st7
  double v65; // st7
  double v66; // st6
  double v67; // st5
  double v68; // st4
  double v69; // st3
  long double v70; // st2
  double v71; // st1
  long double v72; // st0
  double v73; // st2
  double v74; // rt1
  double v75; // st7
  double v76; // st1
  double v77; // st2
  double v78; // st0
  double v79; // st1
  float v80; // [esp+0h] [ebp-110h]
  float v81; // [esp+0h] [ebp-110h]
  float v82; // [esp+4h] [ebp-10Ch]
  float v83; // [esp+4h] [ebp-10Ch]
  float v84; // [esp+4h] [ebp-10Ch]
  _BYTE v85[48]; // [esp+14h] [ebp-FCh] BYREF
  _BYTE v86[48]; // [esp+44h] [ebp-CCh] BYREF
  int v87[4]; // [esp+74h] [ebp-9Ch] BYREF
  int v88[4]; // [esp+84h] [ebp-8Ch] BYREF
  float v89; // [esp+94h] [ebp-7Ch]
  float v90; // [esp+98h] [ebp-78h]
  float v91; // [esp+A0h] [ebp-70h]
  float v92; // [esp+A8h] [ebp-68h]
  float v93[4]; // [esp+ACh] [ebp-64h] BYREF
  float v94[4]; // [esp+BCh] [ebp-54h] BYREF
  float v95; // [esp+CCh] [ebp-44h] BYREF
  float v96; // [esp+D0h] [ebp-40h]
  float v97; // [esp+D4h] [ebp-3Ch]
  float v98; // [esp+D8h] [ebp-38h]
  float v99; // [esp+DCh] [ebp-34h]
  float v100; // [esp+E0h] [ebp-30h]
  float v101; // [esp+E4h] [ebp-2Ch] BYREF
  float v102; // [esp+E8h] [ebp-28h]
  float v103; // [esp+ECh] [ebp-24h]
  int v104; // [esp+F0h] [ebp-20h]
  float v105; // [esp+F4h] [ebp-1Ch] BYREF
  float v106; // [esp+F8h] [ebp-18h]
  float v107; // [esp+FCh] [ebp-14h]
  int v108; // [esp+100h] [ebp-10h]
  _DWORD *v109; // [esp+104h] [ebp-Ch]
  float v110; // [esp+108h] [ebp-8h]
  float v111; // [esp+10Ch] [ebp-4h]

  v6 = 0.0;
  v7 = 1.0;
  v9 = 0;
  v108 = a2;
  if ( *(int *)(a2 + 4080) > 0 )
  {
    a1 = a2 + 20;
    while ( 1 )
    {
      v11 = v7;
      v12 = v6;
      ++v9;
      *(float *)(a1 + 72) = v6;
      a1 += 340;
      *(float *)(a1 - 292) = v11;
      *(float *)(a1 - 288) = v11;
      v13 = v11;
      *(float *)(a1 - 284) = v12;
      *(float *)(a1 - 280) = v12;
      *(float *)(a1 - 276) = v12;
      *(float *)(a1 - 348) = v12;
      *(float *)(a1 - 344) = v12;
      *(float *)(a1 - 340) = v12;
      *(float *)(a1 - 336) = v12;
      *(float *)(a1 - 332) = v12;
      *(float *)(a1 - 328) = v12;
      *(float *)(a1 - 324) = v12;
      if ( v9 >= *(_DWORD *)(a2 + 4080) )
        break;
      v10 = v12;
      v7 = v13;
      v6 = v10;
    }
  }
  *(float *)&result = COERCE_FLOAT(sub_10023190((_DWORD *)a1, a2));
  v110 = 0.0;
  if ( *(int *)(a2 + 4104) <= 0 )
  {
    v30 = 0.0;
  }
  else
  {
    v15 = 1.0;
    v16 = 0.0;
    v17 = 0.0;
    v111 = 0.0;
    do
    {
      v18 = (_DWORD *)(LODWORD(v16) + *(_DWORD *)(a2 + 4092));
      v109 = 0;
      if ( (int)v18[3] > 0 )
      {
        v104 = 0;
        do
        {
          v19 = v104 + *v18;
          switch ( *(_DWORD *)(v19 + 4) )
          {
            case 3:
            case 5:
              v20 = a2 + 340 * *(_DWORD *)(v19 + 16);
              *(_DWORD *)v20 = *(_DWORD *)(v19 + 8);
              *(_DWORD *)(v20 + 4) = *(_DWORD *)(v19 + 4);
              if ( *(_DWORD *)(v19 + 4) == 5 )
                *(_DWORD *)(v20 + 8) = *(_DWORD *)(v19 + 104);
              else
                *(_DWORD *)(v20 + 8) = 0;
              if ( v15 == *(float *)(v19 + 96) || v17 == *(float *)(v20 + 92) )
              {
                *(_DWORD *)(v20 + 24) = *(_DWORD *)(v19 + 44);
                *(_DWORD *)(v20 + 28) = *(_DWORD *)(v19 + 48);
                *(_DWORD *)(v20 + 32) = *(_DWORD *)(v19 + 52);
                *(_DWORD *)(v20 + 36) = *(_DWORD *)(v19 + 56);
                *(float *)(v20 + 12) = *(float *)(v19 + 32);
                *(float *)(v20 + 16) = *(float *)(v19 + 36);
                *(float *)(v20 + 20) = *(float *)(v19 + 40);
                *(float *)(v20 + 76) = *(float *)(v19 + 20);
                *(float *)(v20 + 80) = *(float *)(v19 + 28);
                *(float *)(v20 + 84) = *(float *)(v19 + 24);
                *(float *)(v20 + 68) = *(float *)(v19 + 100) * *(float *)(v19 + 96);
                *(float *)(v20 + 72) = *(float *)(v19 + 88);
                *(float *)(v20 + 92) = *(float *)(v19 + 92) * *(float *)(v19 + 96);
              }
              else
              {
                sub_101F0F00(v20 + 24, v19 + 44, *(float *)(v19 + 96), v20 + 24);
                v21 = *(float *)(v19 + 96);
                v22 = (*(float *)(v19 + 36) - *(float *)(v20 + 16)) * v21 + *(float *)(v20 + 16);
                v23 = v21 * (*(float *)(v19 + 40) - *(float *)(v20 + 20)) + *(float *)(v20 + 20);
                *(float *)(v20 + 12) = (*(float *)(v19 + 32) - *(float *)(v20 + 12)) * v21 + *(float *)(v20 + 12);
                *(float *)(v20 + 16) = v22;
                *(float *)(v20 + 20) = v23;
                *(float *)(v20 + 76) = (*(float *)(v19 + 20) - *(float *)(v20 + 76)) * *(float *)(v19 + 96)
                                     + *(float *)(v20 + 76);
                *(float *)(v20 + 80) = (*(float *)(v19 + 28) - *(float *)(v20 + 80)) * *(float *)(v19 + 96)
                                     + *(float *)(v20 + 80);
                *(float *)(v20 + 84) = (*(float *)(v19 + 24) - *(float *)(v20 + 84)) * *(float *)(v19 + 96)
                                     + *(float *)(v20 + 84);
                if ( *(float *)(v19 + 100) <= (double)*(float *)(v20 + 68) )
                  v24 = *(float *)(v19 + 100);
                else
                  v24 = *(float *)(v20 + 68);
                *(float *)(v20 + 68) = v24;
                v16 = v111;
                *(float *)(v20 + 72) = (*(float *)(v19 + 88) - *(float *)(v20 + 72)) * *(float *)(v19 + 96)
                                     + *(float *)(v20 + 72);
                *(float *)(v20 + 92) = (*(float *)(v19 + 92) - *(float *)(v20 + 92)) * *(float *)(v19 + 96)
                                     + *(float *)(v20 + 92);
                v15 = 1.0;
                v17 = 0.0;
              }
              if ( *(_DWORD *)(v19 + 4) == 3 )
              {
                *(float *)(v20 + 276) = v17;
                *(float *)(v20 + 104) = *(float *)(a2 + 4176) + *(float *)(v20 + 80);
              }
              break;
            case 4:
              v27 = a2 + 340 * *(_DWORD *)(v19 + 16);
              if ( v17 >= *(float *)(v19 + 100) )
              {
                v28 = v15 - *(float *)(v19 + 92);
                if ( v28 > *(float *)(v27 + 68) )
                  v28 = *(float *)(v27 + 68);
                *(float *)(v27 + 68) = v28;
              }
              else
              {
                *(float *)(v27 + 68) = v17;
              }
              *(float *)(v27 + 92) = (v15 - *(float *)(v19 + 96) * *(float *)(v19 + 92)) * *(float *)(v27 + 92);
              break;
            case 6:
              v25 = a2 + 340 * *(_DWORD *)(v19 + 16);
              if ( v17 >= *(float *)(v19 + 100) )
              {
                v26 = v15 - *(float *)(v19 + 92);
                if ( v26 > *(float *)(v25 + 68) )
                  v26 = *(float *)(v25 + 68);
                *(float *)(v25 + 68) = v26;
              }
              else
              {
                *(float *)(v25 + 68) = v17;
              }
              break;
            default:
              break;
          }
          v29 = *(_DWORD *)(a2 + 4092);
          v104 += 132;
          v18 = (_DWORD *)(LODWORD(v16) + v29);
          v109 = (_DWORD *)((char *)v109 + 1);
        }
        while ( (int)v109 < v18[3] );
      }
      result = LODWORD(v110) + 1;
      LODWORD(v16) += 20;
      v110 = *(float *)&result;
      v111 = v16;
    }
    while ( result < *(_DWORD *)(a2 + 4104) );
    v30 = v17;
  }
  v109 = 0;
  if ( *(int *)(a2 + 4080) > 0 )
  {
    v31 = a2 + 48;
    do
    {
      if ( v30 < *(float *)(v31 + 44) )
      {
        v32 = *(_DWORD *)(a2 + 4088);
        v33 = *(_DWORD *)v32 + *(_DWORD *)(*(_DWORD *)v32 + 288) + 16 * *(_DWORD *)(v31 - 48);
        v34 = *(_DWORD *)(*(_DWORD *)(v33 + 12) + v33 + 56);
        sub_10020130(v32, v108 + 4132, a3, a4, v34, a5, a6);
        sub_101F0F40(v31 - 24, v31 - 36, v86);
        sub_101F0AB0(v86, v86);
        sub_101EDC00(a5 + 48 * v34, v86, v85);
        *(_BYTE *)(v31 + 152) = 1.0 == *(float *)(v31 + 20);
        v35 = v108;
        v36 = *(_DWORD *)(v108 + 4180);
        if ( v36 < 0 || (v37 = *(_DWORD *)(v31 + 160), v37 < v36 - 1) || v37 > v36 )
        {
          *(_BYTE *)(v31 + 153) = 0;
          *(float *)(v31 + 156) = 0.0;
        }
        *(_DWORD *)(v31 + 160) = *(_DWORD *)(v35 + 4180);
        sub_101F0930(v85, v31 + 4, v31 - 8);
        v38 = *(_DWORD *)(v31 + 8);
        v39 = *(_DWORD *)(v31 + 12);
        *(_DWORD *)(v31 + 60) = *(_DWORD *)(v31 + 4);
        v40 = *(_DWORD *)(v31 + 16);
        *(_DWORD *)(v31 + 64) = v38;
        v41 = (_DWORD *)(v31 + 60);
        *(_DWORD *)(v31 + 68) = v39;
        *(_DWORD *)(v31 + 72) = v40;
        *(float *)(v31 + 48) = *(float *)(v31 - 8);
        *(float *)(v31 + 52) = *(float *)(v31 - 4);
        *(float *)(v31 + 56) = *(float *)v31;
        v42 = *(_BYTE *)(v31 + 153) == 0;
        v43 = *(float *)(v31 + 20);
        v111 = *(float *)(v31 + 20);
        if ( !v42 )
        {
          if ( 1.0 == *(float *)(v31 + 20) )
          {
            v44 = *(float *)(v31 + 196) - *(float *)(v31 + 52);
            v45 = *(float *)(v31 + 200) - *(float *)(v31 + 56);
            *(float *)(v31 + 220) = *(float *)(v31 + 192) - *(float *)(v31 + 48);
            *(float *)(v31 + 224) = v44;
            *(float *)(v31 + 228) = v45;
            sub_101EEBE0(v31 + 60, -1.0, (int)v88);
            sub_101EECB0(v88, v31 + 204, v93);
            sub_101EEB80(v93);
            *(float *)(v31 + 232) = v93[0];
            *(float *)(v31 + 236) = v93[1];
            *(float *)(v31 + 240) = v93[2];
            *(float *)(v31 + 244) = v93[3];
            v46 = *(_DWORD *)(v31 + 208);
            v47 = *(_DWORD *)(v31 + 212);
            *v41 = *(_DWORD *)(v31 + 204);
            v48 = *(_DWORD *)(v31 + 216);
            *(_DWORD *)(v31 + 64) = v46;
            *(_DWORD *)(v31 + 68) = v47;
            *(_DWORD *)(v31 + 72) = v48;
            *(float *)(v31 + 48) = *(float *)(v31 + 192);
            *(float *)(v31 + 52) = *(float *)(v31 + 196);
            *(float *)(v31 + 56) = *(float *)(v31 + 200);
            *(float *)(v31 + 156) = v111;
          }
          else if ( *(float *)(v31 + 20) <= 0.0 )
          {
            v57 = *(_DWORD *)(v31 + 64);
            v58 = *(_DWORD *)(v31 + 68);
            *(_DWORD *)(v31 + 204) = *v41;
            v59 = *(_DWORD *)(v31 + 72);
            *(_DWORD *)(v31 + 208) = v57;
            *(_DWORD *)(v31 + 212) = v58;
            *(_BYTE *)(v31 + 153) = 0;
            *(_DWORD *)(v31 + 216) = v59;
            *(float *)(v31 + 192) = *(float *)(v31 + 48);
            *(float *)(v31 + 196) = *(float *)(v31 + 52);
            *(float *)(v31 + 200) = *(float *)(v31 + 56);
            *(float *)(v31 + 220) = 0.0;
            *(float *)(v31 + 224) = 0.0;
            *(float *)(v31 + 228) = 0.0;
            *(float *)(v31 + 232) = 0.0;
            *(float *)(v31 + 236) = 0.0;
            *(float *)(v31 + 240) = 0.0;
            *(float *)(v31 + 244) = 0.0;
            *(float *)(v31 + 156) = v43;
          }
          else
          {
            if ( v43 <= 0.0 || *(float *)(v31 + 156) <= v43 )
            {
              v51 = 1.0;
            }
            else
            {
              v49 = *(float *)(v31 + 156) - v43;
              if ( *(float *)(v31 + 156) > 0.0 )
                v49 = v49 / *(float *)(v31 + 156);
              v50 = 1.0 - v49;
              *(float *)(v31 + 220) = v50 * *(float *)(v31 + 220);
              *(float *)(v31 + 224) = v50 * *(float *)(v31 + 224);
              *(float *)(v31 + 228) = v50 * *(float *)(v31 + 228);
              v80 = v50;
              sub_101EEBE0(v31 + 232, v80, v31 + 232);
              v51 = 1.0;
            }
            v52 = *(float *)(v31 + 224) + *(float *)(v31 + 52);
            v53 = *(float *)(v31 + 228) + *(float *)(v31 + 56);
            *(float *)(v31 + 48) = *(float *)(v31 + 220) + *(float *)(v31 + 48);
            *(float *)(v31 + 52) = v52;
            *(float *)(v31 + 56) = v53;
            v81 = v51;
            sub_101EEBE0(v31 + 232, v81, (int)v87);
            sub_101EECB0(v31 + 60, v87, v94);
            sub_101EEB80(v94);
            *(float *)v41 = v94[0];
            *(float *)(v31 + 64) = v94[1];
            *(float *)(v31 + 68) = v94[2];
            *(float *)(v31 + 72) = v94[3];
            v54 = *(_DWORD *)(v31 + 64);
            v55 = *(_DWORD *)(v31 + 68);
            *(_DWORD *)(v31 + 204) = *v41;
            v56 = *(_DWORD *)(v31 + 72);
            *(_DWORD *)(v31 + 208) = v54;
            *(_DWORD *)(v31 + 212) = v55;
            *(_DWORD *)(v31 + 216) = v56;
            *(float *)(v31 + 192) = *(float *)(v31 + 48);
            *(float *)(v31 + 196) = *(float *)(v31 + 52);
            *(float *)(v31 + 200) = *(float *)(v31 + 56);
            *(float *)(v31 + 156) = v111;
          }
        }
        sub_101EDA00(a5 + 48 * *(_DWORD *)(v33 + *(_DWORD *)(v33 + 12)), 3, &v105);
        sub_101EDA00(a5 + 48 * *(_DWORD *)(*(_DWORD *)(v33 + 12) + v33 + 28), 3, &v101);
        sub_101EDA00(a5 + 48 * *(_DWORD *)(*(_DWORD *)(v33 + 12) + v33 + 56), 3, &v95);
        v82 = (v101 - v105) * (v101 - v105) + (v102 - v106) * (v102 - v106) + (v103 - v107) * (v103 - v107);
        v111 = off_103EDFE0(v82);
        v83 = (v95 - v101) * (v95 - v101) + (v96 - v102) * (v96 - v102) + (v97 - v103) * (v97 - v103);
        v110 = off_103EDFE0(v83);
        if ( *(_BYTE *)(v31 + 153) )
        {
          v60 = *(float *)(v31 + 220) + v95 - v105;
          v61 = *(float *)(v31 + 224) + v96 - v106;
          v62 = *(float *)(v31 + 228) + v97 - v107;
          v84 = v62 * v62 + v60 * v60 + v61 * v61;
          v63 = off_103EDFE0(v84);
          if ( (fabs(v111 - v110) > v63 || v111 + v110 < v63 * 0.95) && *(float *)(v31 + 20) > 0.2 )
            *(float *)(v31 + 276) = *(float *)(v108 + 4184);
          if ( *(float *)(v31 + 20) > 0.2 )
          {
            v64 = fabs(*(float *)(v31 + 244));
            if ( v64 + v64 - 1.0 < 0.707 )
              *(float *)(v31 + 276) = *(float *)(v108 + 4184);
          }
        }
        v98 = *(float *)(v31 + 48) - v105;
        v99 = *(float *)(v31 + 52) - v106;
        v100 = *(float *)(v31 + 56) - v107;
        *(float *)(v31 + 80) = off_103EDFEC();
        v65 = v111;
        *(float *)(v31 + 84) = v111;
        v66 = v110;
        *(float *)(v31 + 88) = v110;
        v67 = v105;
        *(float *)(v31 + 92) = v105;
        v68 = v106;
        *(float *)(v31 + 96) = v106;
        v69 = v107;
        *(float *)(v31 + 100) = v107;
        *(float *)(v31 + 116) = v101;
        *(float *)(v31 + 120) = v102;
        *(float *)(v31 + 124) = v103;
        v70 = fabs(v65 - v66) * 1.01;
        v71 = v98;
        v89 = v98 * v70;
        v90 = v99 * v70;
        v91 = v89 + v67;
        v72 = v70 * v100;
        v73 = v90 + v68;
        v92 = v72 + v69;
        *(float *)(v31 + 104) = v91;
        v74 = v71;
        *(float *)(v31 + 108) = v73;
        *(float *)(v31 + 112) = v92;
        v75 = v65 + v66;
        v76 = v99 * v75 * 0.99000001 + v68;
        v77 = v75 * v100 * 0.99000001 + v69;
        *(float *)(v31 + 128) = v74 * v75 * 0.99000001 + v67;
        *(float *)(v31 + 132) = v76;
        *(float *)(v31 + 136) = v77;
        a2 = v108;
        v78 = v75 * -1.0;
        v79 = v75 * 0.0 * 0.99000001;
        v30 = 0.0;
        *(float *)(v31 + 140) = v67 + v79;
        *(float *)(v31 + 144) = v68 + v79;
        *(float *)(v31 + 148) = 0.99000001 * v78 + v69;
      }
      result = (int)v109 + 1;
      v31 += 340;
      v109 = (_DWORD *)result;
    }
    while ( result < *(_DWORD *)(a2 + 4080) );
  }
  return result;
}
