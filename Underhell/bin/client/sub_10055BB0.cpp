void __userpurge sub_10055BB0(int a1@<ecx>, int a2@<esi>, int a3)
{
  double v4; // st7
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  double v9; // st6
  double v10; // st5
  bool v11; // zf
  float v12; // eax
  float v13; // ecx
  float v14; // edx
  double v15; // st4
  int v16; // eax
  double v17; // st3
  double v18; // st2
  int v19; // ecx
  double v20; // st1
  int v21; // edx
  double v22; // rt1
  double v23; // st2
  double v24; // st3
  double v25; // st4
  double v26; // st2
  double v27; // rt2
  double v28; // st2
  double v29; // rtt
  double v30; // st2
  double v31; // st6
  double v32; // st3
  double v33; // rt1
  double v34; // st3
  double v35; // st4
  double v36; // rt2
  double v37; // st4
  double v38; // st5
  double v39; // rt1
  double v40; // rt2
  double v41; // st5
  double v42; // st6
  double v43; // rtt
  double v44; // st4
  double v45; // st6
  double v46; // rt2
  float *v47; // eax
  double v48; // st7
  double v49; // st7
  double v50; // st7
  float v51; // [esp+0h] [ebp-40h]
  int v52; // [esp+Ch] [ebp-34h]
  int v53[3]; // [esp+18h] [ebp-28h] BYREF
  float v54; // [esp+24h] [ebp-1Ch]
  float v55; // [esp+28h] [ebp-18h]
  float v56; // [esp+2Ch] [ebp-14h]
  int v57; // [esp+30h] [ebp-10h] BYREF
  float v58; // [esp+34h] [ebp-Ch]
  float v59; // [esp+38h] [ebp-8h]
  float v60; // [esp+3Ch] [ebp-4h]
  int v61; // [esp+48h] [ebp+8h]

  v4 = 0.0;
  if ( 0.0 != *(float *)(a1 + 528) )
  {
    v6 = *(_DWORD *)(a3 + 4);
    *(_BYTE *)(a3 + 16424) = 1;
    v7 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(a3 + 16420) = v7;
    if ( v7 != v6 + 4 )
    {
      v52 = a2;
      **(_DWORD **)(a3 + 8) = *(_DWORD *)(v7 + 8);
      v8 = *(_DWORD *)(a3 + 16420);
      if ( v8 )
      {
        v9 = 0.0039215689;
        v10 = 1.0;
        while ( 1 )
        {
          v11 = (*(_BYTE *)(a1 + 524) & 1) == 0;
          v12 = *(float *)(v8 + 12);
          v13 = *(float *)(v8 + 16);
          v14 = *(float *)(v8 + 20);
          v60 = *(float *)(v8 + 32) * *(float *)(a1 + 528);
          v54 = v12;
          v15 = *(float *)(a1 + 576) - *(float *)(a1 + 564);
          v61 = *(unsigned __int8 *)(v8 + 36);
          v16 = *(unsigned __int8 *)(v8 + 39);
          v17 = *(float *)(a1 + 580) - *(float *)(a1 + 568);
          v18 = *(float *)(a1 + 584) - *(float *)(a1 + 572);
          v55 = v13;
          v19 = *(unsigned __int8 *)(v8 + 37);
          v20 = (double)v61 * 0.0039200312;
          v56 = v14;
          v21 = *(unsigned __int8 *)(v8 + 38);
          v22 = v18 * v20;
          v23 = v15 * v20 + *(float *)(a1 + 564);
          v24 = v17 * v20 + *(float *)(a1 + 568);
          v25 = v22 + *(float *)(a1 + 572);
          if ( v11 )
          {
            *(float *)&v57 = v23 * ((double)v19 * v9);
            v58 = v24 * ((double)v21 * v9);
            v59 = v25 * (v9 * (double)v16);
          }
          else
          {
            v26 = v23 + (double)v19 * v9;
            *(float *)&v57 = v26;
            v27 = v26;
            v28 = v24 + (double)v21 * v9;
            v58 = v28;
            v29 = v28;
            v30 = v9 * (double)v16;
            v31 = v29;
            v32 = v25 + v30;
            v59 = v32;
            v33 = v32;
            v34 = v27;
            v35 = v33;
            if ( v27 <= v10 )
            {
              if ( v34 < v4 )
                *(float *)&v57 = v4;
              v39 = v35;
              v37 = v10;
              v38 = v39;
            }
            else
            {
              v36 = v35;
              v37 = v10;
              v38 = v36;
              *(float *)&v57 = v37;
            }
            if ( v37 >= v31 )
            {
              v43 = v37;
              v44 = v31;
              v45 = v43;
              if ( v44 < v4 )
                v58 = v4;
              v46 = v38;
              v41 = v45;
              v42 = v46;
            }
            else
            {
              v40 = v38;
              v41 = v37;
              v42 = v40;
              v58 = v37;
            }
            if ( v41 >= v42 )
            {
              if ( v42 < v4 )
                v59 = v4;
            }
            else
            {
              v59 = v41;
            }
          }
          v47 = (float *)sub_100F0920(v52);
          *(float *)v53 = v47[26] * v56 + v47[24] * v54 + v47[25] * v55 + v47[27];
          *(float *)&v53[1] = v47[29] * v55 + v47[28] * v54 + v47[30] * v56 + v47[31];
          v48 = v54 * v47[32] + v55 * v47[33] + v56 * v47[34] + v47[35];
          *(float *)&v53[2] = v48;
          v49 = -v48;
          if ( v49 <= 30.0 )
            v50 = v49 <= 10.0 ? 0.0 : (v49 - 10.0) * 0.050000001;
          else
            v50 = 1.0;
          v51 = v50 * v60;
          sub_10054ED0(
            *(float ***)(a3 + 8),
            (float *)v53,
            (float *)&v57,
            v51,
            *(float *)(a1 + 532),
            *(float *)(v8 + 28));
          v8 = sub_1004B070(a3, 1.0);
          if ( !v8 )
            break;
          v9 = 0.0039215689;
          v10 = 1.0;
          v4 = 0.0;
        }
      }
    }
  }
}
