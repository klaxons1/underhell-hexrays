int __thiscall sub_10126DF0(_DWORD *this, int a2, int a3)
{
  double v3; // st7
  _DWORD *v4; // edi
  int i; // eax
  int result; // eax
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  float v12; // ecx
  int v13; // esi
  int v14; // eax
  float v15; // ebx
  double v16; // st5
  double v17; // st5
  double v18; // st5
  double v19; // st5
  int v20; // ecx
  int v21; // eax
  double v22; // st5
  double v23; // st5
  double v24; // st5
  double v25; // st5
  double v26; // st5
  int v27; // ecx
  double v28; // st5
  int v29; // eax
  double v30; // st5
  double v31; // st5
  double v32; // st5
  int v33; // ebx
  double v34; // st1
  double v35; // st5
  double v36; // st4
  double v37; // st7
  double v38; // st6
  double v39; // st3
  double v40; // st4
  double v41; // st7
  double v42; // st5
  double v43; // st5
  double v44; // rt1
  double v45; // st4
  double v46; // rt2
  double v47; // st5
  int v48; // eax
  double v49; // st4
  double v50; // st2
  double v51; // rtt
  double v52; // st5
  double v53; // st6
  double v54; // rt2
  int v55; // eax
  double v56; // st4
  double v57; // st2
  double v58; // st4
  int v59; // eax
  double v60; // st7
  double v61; // st6
  double v62; // st5
  double v63; // st7
  double v64; // st4
  double v65; // st6
  double v66; // st5
  double v67; // rtt
  double v68; // rt0
  int v69; // eax
  double v70; // st4
  double v71; // st2
  double v72; // rt1
  double v73; // st5
  double v74; // st6
  double v75; // rt0
  int v76; // eax
  double v77; // st4
  double v78; // st2
  double v79; // st4
  int v80; // eax
  double v81; // st7
  double v82; // st5
  double v83; // st4
  float v84; // [esp+0h] [ebp-B8h]
  float v85; // [esp+4h] [ebp-B4h]
  float v86; // [esp+8h] [ebp-B0h]
  float v87; // [esp+Ch] [ebp-ACh]
  float v88; // [esp+Ch] [ebp-ACh]
  float v89; // [esp+Ch] [ebp-ACh]
  float v90; // [esp+10h] [ebp-A8h]
  float v91; // [esp+10h] [ebp-A8h]
  float v92; // [esp+10h] [ebp-A8h]
  float v93[3]; // [esp+14h] [ebp-A4h]
  int v94; // [esp+20h] [ebp-98h]
  _DWORD *v95; // [esp+24h] [ebp-94h]
  float v96[32]; // [esp+28h] [ebp-90h]
  int v97; // [esp+A8h] [ebp-10h]
  int v98; // [esp+ACh] [ebp-Ch]
  float v99; // [esp+B0h] [ebp-8h]
  float v100; // [esp+B4h] [ebp-4h]

  v3 = 0.0;
  v4 = (_DWORD *)*this;
  for ( i = 0; i < v4[65]; ++i )
    *(float *)(a3 + 4 * i) = 0.0;
  result = 0;
  v98 = 0;
  if ( (int)v4[69] > 0 )
  {
    v7 = 1.0;
    v8 = -1.0;
    while ( 1 )
    {
      v9 = v4[70] + 12 * result;
      v10 = *(_DWORD *)((char *)v4 + v9 + 8);
      v11 = (_DWORD *)((char *)v4 + v9);
      LODWORD(v12) = (char *)v11 + v10;
      v13 = 0;
      v95 = v11;
      v14 = v11[1];
      v100 = v12;
      v97 = 0;
      v94 = v14;
      if ( v14 > 0 )
        break;
LABEL_87:
      *(float *)(a3 + 4 * *v95) = v96[0];
      result = v98 + 1;
      v98 = result;
      if ( result >= v4[69] )
        return result;
      result = v98;
    }
    v15 = v12;
    while ( 2 )
    {
      switch ( *(_DWORD *)LODWORD(v15) )
      {
        case 1:
          v96[v13++] = *(float *)(LODWORD(v15) + 4);
          goto LABEL_86;
        case 2:
          v96[v13++] = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * *(_DWORD *)(LODWORD(v15) + 4) + 2] + v4[68]));
          goto LABEL_86;
        case 3:
          v96[v13++] = *(float *)(a3 + 4 * *(_DWORD *)(LODWORD(v15) + 4));
          goto LABEL_86;
        case 4:
          --v13;
          v96[v13 - 1] = v96[v13] + v96[v13 - 1];
          goto LABEL_86;
        case 5:
          --v13;
          v96[v13 - 1] = v96[v13 - 1] - v96[v13];
          goto LABEL_86;
        case 6:
          --v13;
          v96[v13 - 1] = v96[v13] * v96[v13 - 1];
          goto LABEL_86;
        case 7:
          if ( v96[v13 - 1] <= 0.0001 )
          {
            v96[--v13 - 1] = v3;
          }
          else
          {
            v16 = *((float *)&v94 + v13--);
            v96[v13 - 1] = v16 / v96[v13];
          }
          goto LABEL_86;
        case 8:
          v96[v13 - 1] = -v96[v13 - 1];
          goto LABEL_86;
        case 0xD:
          if ( v96[v13 - 1] >= (double)*((float *)&v94 + v13) )
            goto LABEL_18;
          v17 = *((float *)&v94 + v13--);
          v96[v13 - 1] = v17;
          goto LABEL_86;
        case 0xE:
          if ( v96[v13 - 1] <= (double)*((float *)&v94 + v13) )
          {
LABEL_18:
            v18 = v96[--v13];
            v96[v13 - 1] = v18;
          }
          else
          {
            v19 = *((float *)&v94 + v13--);
            v96[v13 - 1] = v19;
          }
          goto LABEL_86;
        case 0xF:
          v31 = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * *(_DWORD *)(LODWORD(v15) + 4) + 2] + v4[68])) - v8;
          if ( v31 >= v3 )
          {
            if ( v31 > v7 )
              v31 = v7;
            v96[v13++] = v7 - v31;
          }
          else
          {
            v96[v13++] = v7 - v3;
          }
          goto LABEL_86;
        case 0x10:
          v32 = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * *(_DWORD *)(LODWORD(v15) + 4) + 2] + v4[68]));
          if ( v32 >= v3 )
          {
            if ( v32 > v7 )
              v32 = v7;
            v96[v13++] = v32;
          }
          else
          {
            v96[v13++] = v3;
          }
          goto LABEL_86;
        case 0x11:
          v33 = *(_DWORD *)((char *)&v4[5 * *(_DWORD *)(LODWORD(v100) + 4) + 2] + v4[68]);
          v34 = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * (int)v96[v13 - 1] + 2] + v4[68]));
          v35 = *((float *)&v94 + v13);
          if ( v34 <= v93[v13] || v34 >= v35 )
          {
            v43 = v3;
          }
          else
          {
            if ( v34 < v93[v13 + 1] )
            {
              v90 = v7;
              v36 = v3;
              v37 = v93[v13];
              v87 = v36;
              v35 = v93[v13 + 1];
              v38 = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * (int)v96[v13 - 1] + 2] + v4[68]));
LABEL_54:
              v86 = v35;
              v85 = v37;
              v84 = v38;
              v41 = sub_100260E0(v84, v85, v86, v87, v90);
              v7 = 1.0;
              v42 = 0.0;
              goto LABEL_58;
            }
            if ( v93[v13 + 2] < v34 )
            {
              v39 = v3;
              v37 = v93[v13 + 2];
              v90 = v39;
              v40 = v7;
              v38 = *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * (int)v96[v13 - 1] + 2] + v4[68]));
              v87 = v40;
              goto LABEL_54;
            }
            v43 = v7;
          }
          v44 = v43;
          v42 = v3;
          v41 = v44;
LABEL_58:
          v45 = *(float *)(a2 + 4 * v33);
          v15 = v100;
          v13 -= 4;
          v46 = v42;
          v47 = v41 * v45;
          v3 = v46;
          v96[v13 - 1] = v47;
LABEL_86:
          v8 = -1.0;
          LODWORD(v15) += 8;
          v100 = v15;
          if ( ++v97 >= v94 )
            goto LABEL_87;
          continue;
        case 0x12:
          v20 = v13 - *(_DWORD *)(LODWORD(v15) + 4);
          v21 = v20 + 1;
          if ( v20 + 1 < v13 )
          {
            if ( v13 - v21 >= 4 )
            {
              v22 = v96[v20];
              do
              {
                v23 = v22 * v96[v21];
                v21 += 4;
                v96[v20] = v23;
                v24 = v23 * v93[v21 + 2];
                v96[v20] = v24;
                v25 = v24 * *((float *)&v94 + v21);
                v96[v20] = v25;
                v22 = v25 * v96[v21 - 1];
                v96[v20] = v22;
              }
              while ( v21 < v13 - 3 );
            }
            if ( v21 < v13 )
            {
              v26 = v96[v20];
              do
              {
                v26 = v26 * v96[v21++];
                v96[v20] = v26;
              }
              while ( v21 < v13 );
            }
          }
          v13 = v20 + 1;
          goto LABEL_86;
        case 0x13:
          v27 = v13 - *(_DWORD *)(LODWORD(v15) + 4);
          v28 = v96[v27];
          v29 = v27 + 1;
          if ( v27 + 1 < v13 )
          {
            if ( v13 - v29 >= 4 )
            {
              do
              {
                v30 = v28 * v96[v29];
                v29 += 4;
                v28 = v30 * v93[v29 + 2] * *((float *)&v94 + v29) * v96[v29 - 1];
              }
              while ( v29 < v13 - 3 );
            }
            for ( ; v29 < v13; ++v29 )
              v28 = v28 * v96[v29];
          }
          v13 -= *(_DWORD *)(LODWORD(v15) + 4);
          v96[v27 - 1] = (v7 - v28) * v96[v27 - 1];
          goto LABEL_86;
        case 0x14:
          v48 = v4[68] + 20 * *(_DWORD *)(LODWORD(v15) + 4);
          v49 = *(float *)(a2 + 4 * *(_DWORD *)((char *)v4 + v48 + 8));
          v50 = *(float *)((char *)v4 + v48 + 16);
          if ( v50 == *(float *)((char *)v4 + v48 + 12) )
          {
            if ( v50 <= v49 )
            {
              v51 = v8;
              v52 = v7;
              v53 = v51;
              v99 = v52;
LABEL_64:
              v55 = v4[68] + 20 * (int)v96[v13 - 1];
              v56 = *(float *)(a2 + 4 * *(_DWORD *)((char *)v4 + v55 + 8));
              v57 = *(float *)((char *)v4 + v55 + 16);
              if ( v57 == *(float *)((char *)v4 + v55 + 12) )
              {
                if ( v57 > v56 )
                  v100 = v3;
                else
                  v100 = v52;
              }
              else
              {
                v64 = (v56 - *(float *)((char *)v4 + v55 + 12)) / (v57 - *(float *)((char *)v4 + v55 + 12));
                if ( v64 >= v3 )
                {
                  if ( v64 > v52 )
                    v64 = v52;
                  v100 = v64;
                }
                else
                {
                  v100 = v3;
                }
              }
              v59 = (int)v93[v13 + 2];
              if ( v59 < 0 )
              {
                v65 = v52;
              }
              else
              {
                v91 = v52;
                v88 = v53;
                v60 = sub_100260E0(
                        *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * v59 + 2] + v4[68])),
                        *(float *)((char *)&v4[5 * v59 + 3] + v4[68]),
                        *(float *)((char *)&v4[5 * v59 + 4] + v4[68]),
                        v88,
                        v91);
                v61 = 0.0;
                if ( v60 > 0.0 )
                {
                  v62 = (1.0 - v60) * (1.0 - v99);
                  v63 = 1.0;
                  v93[v13 + 2] = v62 * v100;
                  goto LABEL_85;
                }
                v3 = 0.0;
                v65 = 1.0;
              }
              v66 = (v65 - v99) * v100;
              goto LABEL_84;
            }
            v99 = v3;
          }
          else
          {
            v58 = (v49 - *(float *)((char *)v4 + v48 + 12)) / (v50 - *(float *)((char *)v4 + v48 + 12));
            if ( v58 >= v3 )
            {
              if ( v58 > v7 )
                v58 = v7;
              v99 = v58;
            }
            else
            {
              v99 = v3;
            }
          }
          v54 = v8;
          v52 = v7;
          v53 = v54;
          goto LABEL_64;
        case 0x15:
          v69 = v4[68] + 20 * *(_DWORD *)(LODWORD(v15) + 4);
          v70 = *(float *)(a2 + 4 * *(_DWORD *)((char *)v4 + v69 + 8));
          v71 = *(float *)((char *)v4 + v69 + 16);
          if ( v71 == *(float *)((char *)v4 + v69 + 12) )
          {
            if ( v71 <= v70 )
            {
              v72 = v8;
              v73 = v7;
              v74 = v72;
              v99 = v73;
              goto LABEL_94;
            }
            v99 = v3;
          }
          else
          {
            v79 = (v70 - *(float *)((char *)v4 + v69 + 12)) / (v71 - *(float *)((char *)v4 + v69 + 12));
            if ( v79 >= v3 )
            {
              if ( v79 > v7 )
                v79 = v7;
              v99 = v79;
            }
            else
            {
              v99 = v3;
            }
          }
          v75 = v8;
          v73 = v7;
          v74 = v75;
LABEL_94:
          v76 = v4[68] + 20 * (int)v96[v13 - 1];
          v77 = *(float *)(a2 + 4 * *(_DWORD *)((char *)v4 + v76 + 8));
          v78 = *(float *)((char *)v4 + v76 + 16);
          if ( v78 == *(float *)((char *)v4 + v76 + 12) )
          {
            if ( v78 > v77 )
              v100 = v3;
            else
              v100 = v73;
          }
          else
          {
            v83 = (v77 - *(float *)((char *)v4 + v76 + 12)) / (v78 - *(float *)((char *)v4 + v76 + 12));
            if ( v83 >= v3 )
            {
              if ( v83 > v73 )
                v83 = v73;
              v100 = v83;
            }
            else
            {
              v100 = v3;
            }
          }
          v80 = (int)v93[v13 + 2];
          if ( v80 < 0 )
          {
            v65 = v73;
            v66 = v100 * v99;
            goto LABEL_84;
          }
          v92 = v73;
          v89 = v74;
          v81 = sub_100260E0(
                  *(float *)(a2 + 4 * *(_DWORD *)((char *)&v4[5 * v80 + 2] + v4[68])),
                  *(float *)((char *)&v4[5 * v80 + 3] + v4[68]),
                  *(float *)((char *)&v4[5 * v80 + 4] + v4[68]),
                  v89,
                  v92);
          v61 = 0.0;
          if ( v81 >= 0.0 )
          {
            v3 = 0.0;
            v65 = 1.0;
            v66 = v100 * v99;
LABEL_84:
            v93[v13 + 2] = v66;
            v67 = v65;
            v61 = v3;
            v63 = v67;
            goto LABEL_85;
          }
          v82 = v81 + 1.0;
          v63 = 1.0;
          v93[v13 + 2] = v82 * v99 * v100;
LABEL_85:
          v13 -= 2;
          v68 = v61;
          v7 = v63;
          v3 = v68;
          goto LABEL_86;
        default:
          goto LABEL_86;
      }
    }
  }
  return result;
}
