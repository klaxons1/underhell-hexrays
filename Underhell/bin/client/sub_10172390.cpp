unsigned int __stdcall sub_10172390(int a1)
{
  int v1; // eax
  int v2; // esi
  unsigned int result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st2
  double v11; // st0
  double v12; // st4
  double v13; // st6
  double v14; // st7
  int *v15; // eax
  double v16; // st7
  double v17; // st3
  double v18; // st6
  int *v19; // eax
  double v20; // st3
  double v21; // st2
  double v22; // st7
  double v23; // rtt
  double v24; // rt0
  double v25; // st4
  double v26; // st7
  double v27; // rt1
  double v28; // st5
  double v29; // st6
  double v30; // st7
  double v31; // st4
  int *v32; // eax
  double v33; // st3
  double v34; // st4
  double v35; // rt1
  double v36; // st5
  double v37; // st7
  double v38; // rt2
  double v39; // st5
  double v40; // st4
  double v41; // st7
  double v42; // rtt
  double v43; // rt0
  double v44; // st6
  unsigned int v45; // eax
  int v46; // eax
  double v47; // st6
  int *v48; // eax
  float v49; // [esp+0h] [ebp-24h]
  float v50; // [esp+0h] [ebp-24h]
  float v51; // [esp+0h] [ebp-24h]
  float v52; // [esp+0h] [ebp-24h]
  float v53; // [esp+4h] [ebp-20h]
  float v54; // [esp+4h] [ebp-20h]
  float v55; // [esp+4h] [ebp-20h]
  float v56; // [esp+4h] [ebp-20h]
  float v57; // [esp+8h] [ebp-1Ch]
  float v58; // [esp+8h] [ebp-1Ch]
  float v59; // [esp+8h] [ebp-1Ch]
  float v60; // [esp+8h] [ebp-1Ch]
  float v61; // [esp+14h] [ebp-10h]
  float v62; // [esp+1Ch] [ebp-8h]
  float v63; // [esp+20h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(v1 + 8);
  result = v1 + 4;
  if ( v2 != result )
  {
    v4 = 4.0;
    v5 = 1024.0;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 4);
    v6 = 0.0039215689;
    while ( 1 )
    {
      v7 = *(float *)(v2 + 36) - *(float *)(a1 + 8);
      *(float *)(v2 + 36) = v7;
      if ( v7 >= 0.0 )
      {
        v9 = *(float *)(a1 + 8);
        v63 = *(float *)(a1 + 8);
        result = *(unsigned __int8 *)(v2 + 40) - 1;
        v10 = v9 * 10.0;
        v61 = v9 * v4;
        v11 = *(float *)(dword_10434644 + 44) * v9 * 0.050000001;
        v62 = v11;
        switch ( *(_BYTE *)(v2 + 40) )
        {
          case 1:
            v13 = *(float *)(a1 + 8);
            v37 = v6;
            v36 = *(float *)(v2 + 32) - v11 * 20.0;
            goto LABEL_19;
          case 2:
            v14 = v11;
            v13 = *(float *)(a1 + 8);
            goto LABEL_18;
          case 3:
            v12 = v5 * (5.0 * v9);
            v13 = *(float *)(a1 + 8);
            *(_WORD *)(v2 + 42) += (int)v12;
            result = *(unsigned __int16 *)(v2 + 42) >> 10;
            if ( result < 6 )
            {
              v15 = (int *)((char *)&unk_103E9EB0 + 12 * result);
              v57 = (double)v15[2] * v6;
              v53 = (double)v15[1] * v6;
              v49 = v6 * (double)*v15;
              result = sub_101669B0((_BYTE *)v2, v49, v53, v57);
              v13 = v63;
              v6 = 0.0039215689;
              v14 = v62 + *(float *)(v2 + 32);
            }
            else
            {
              *(float *)(v2 + 36) = -1.0;
              v14 = v11 + *(float *)(v2 + 32);
            }
            goto LABEL_18;
          case 4:
            v16 = v9 * v4;
            v17 = v5 * v10;
            v18 = v11;
            *(_WORD *)(v2 + 42) += (int)v17;
            result = *(unsigned __int16 *)(v2 + 42) >> 10;
            if ( result < 8 )
            {
              v19 = (int *)((char *)&unk_103E9DF0 + 12 * result);
              v58 = (double)v19[2] * v6;
              v54 = (double)v19[1] * v6;
              v50 = v6 * (double)*v19;
              result = sub_101669B0((_BYTE *)v2, v50, v54, v58);
              v18 = v62;
              v16 = v61;
              v9 = v63;
              v6 = 0.0039215689;
            }
            else
            {
              *(float *)(v2 + 36) = -1.0;
            }
            v20 = *(float *)(v2 + 24) * v16;
            v21 = *(float *)(v2 + 28) * v16;
            v22 = v16 * *(float *)(v2 + 32) + *(float *)(v2 + 32);
            v23 = v21 + *(float *)(v2 + 28);
            *(float *)(v2 + 24) = v20 + *(float *)(v2 + 24);
            *(float *)(v2 + 28) = v23;
            v24 = v9;
            v25 = v22;
            v26 = v24;
            *(float *)(v2 + 32) = v25;
            v27 = v6;
            v28 = *(float *)(v2 + 32) - v18;
            v29 = v27;
            *(float *)(v2 + 32) = v28;
            break;
          case 5:
            v30 = v11;
            v31 = v5 * (15.0 * v9);
            v13 = *(float *)(a1 + 8);
            *(_WORD *)(v2 + 42) += (int)v31;
            result = *(unsigned __int16 *)(v2 + 42) >> 10;
            if ( result < 8 )
            {
              v32 = (int *)((char *)&unk_103E9E50 + 12 * result);
              v59 = (double)v32[2] * v6;
              v55 = (double)v32[1] * v6;
              v51 = v6 * (double)*v32;
              result = sub_101669B0((_BYTE *)v2, v51, v55, v59);
              v13 = v63;
              v6 = 0.0039215689;
              v30 = v62;
            }
            else
            {
              *(float *)(v2 + 36) = -1.0;
            }
            v33 = *(float *)(v2 + 28) - *(float *)(v2 + 28) * v13;
            v34 = *(float *)(v2 + 32) - *(float *)(v2 + 32) * v13;
            *(float *)(v2 + 24) = *(float *)(v2 + 24) - *(float *)(v2 + 24) * v13;
            *(float *)(v2 + 28) = v33;
            *(float *)(v2 + 32) = v34;
            goto LABEL_17;
          case 6:
          case 7:
            *(_WORD *)(v2 + 42) += (int)(v5 * v10);
            v45 = *(unsigned __int16 *)(v2 + 42) >> 10;
            if ( v45 >= 9 )
            {
              v45 = 0;
              *(_WORD *)(v2 + 42) = 0;
            }
            v46 = 3 * v45;
            v47 = (double)dword_103E9F00[v46];
            v48 = (int *)((char *)&unk_103E9EF8 + 4 * v46);
            v60 = v47 * v6;
            v56 = (double)v48[1] * v6;
            v52 = v6 * (double)*v48;
            sub_101669B0((_BYTE *)v2, v52, v56, v60);
            *(float *)(v2 + 24) = *(float *)(v2 + 24) - *(float *)(v2 + 24) * 0.5 * v63;
            *(float *)(v2 + 28) = *(float *)(v2 + 28) - v63 * (0.5 * *(float *)(v2 + 28));
            *(float *)(v2 + 32) = *(float *)(v2 + 32) - v62 * 5.0;
            result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
            v37 = 0.0039215689;
            v13 = v63;
            if ( result )
            {
              *(_BYTE *)(v2 + 40) = 6;
              *(_BYTE *)(v2 + 47) = 0;
            }
            else
            {
              *(_BYTE *)(v2 + 40) = 7;
              *(_BYTE *)(v2 + 47) = -52;
            }
            goto LABEL_20;
          case 8:
            v13 = *(float *)(a1 + 8);
            v30 = v4 * v11;
LABEL_17:
            v14 = *(float *)(v2 + 32) - v30;
LABEL_18:
            v35 = v6;
            v36 = v14;
            v37 = v35;
            goto LABEL_19;
          case 9:
            v13 = *(float *)(a1 + 8);
            v37 = v6;
            v36 = *(float *)(v2 + 32) - v11 * 8.0;
LABEL_19:
            *(float *)(v2 + 32) = v36;
LABEL_20:
            v38 = v13;
            v29 = v37;
            v26 = v38;
            break;
          default:
            v26 = *(float *)(a1 + 8);
            v29 = v6;
            break;
        }
        v39 = *(float *)(v2 + 24) * v26;
        v40 = *(float *)(v2 + 28) * v26;
        v41 = v26 * *(float *)(v2 + 32) + *(float *)(v2 + 20);
        v42 = v40 + *(float *)(v2 + 16);
        *(float *)(v2 + 12) = v39 + *(float *)(v2 + 12);
        *(float *)(v2 + 16) = v42;
        v43 = v29;
        v44 = v41;
        v8 = v43;
        *(float *)(v2 + 20) = v44;
      }
      else
      {
        result = sub_100EB9C0(*(_DWORD *)a1, (_DWORD *)v2);
        v8 = 0.0039215689;
      }
      v2 = *(_DWORD *)(a1 + 16);
      if ( v2 == *(_DWORD *)(a1 + 4) + 4 )
        break;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 4);
      v5 = 1024.0;
      v6 = v8;
      v4 = 4.0;
    }
  }
  return result;
}
