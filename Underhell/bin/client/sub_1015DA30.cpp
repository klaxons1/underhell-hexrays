void __userpurge sub_1015DA30(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, float a4)
{
  int (__thiscall *v5)(int); // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // esi
  int v11; // eax
  float *v12; // eax
  float *v13; // esi
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double (__stdcall *v21)(_DWORD, _DWORD); // eax
  double v22; // st3
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  double v27; // st4
  double v28; // st6
  double v29; // st3
  double v30; // rt0
  double v31; // st3
  double v32; // st5
  double v33; // st3
  double v34; // rtt
  double v35; // rt0
  double v36; // st3
  double v37; // st7
  double v38; // st5
  double v39; // rt2
  long double v40; // st7
  double v41; // st6
  float v43; // [esp+38h] [ebp-50h]
  float v45; // [esp+3Ch] [ebp-4Ch]
  float v46[3]; // [esp+44h] [ebp-44h] BYREF
  float v47; // [esp+50h] [ebp-38h]
  float v48; // [esp+54h] [ebp-34h]
  float v49; // [esp+58h] [ebp-30h]
  float v50; // [esp+5Ch] [ebp-2Ch]
  float v51; // [esp+60h] [ebp-28h]
  float v52; // [esp+64h] [ebp-24h]
  float v53; // [esp+68h] [ebp-20h] BYREF
  float v54; // [esp+6Ch] [ebp-1Ch]
  float v55; // [esp+70h] [ebp-18h]
  int v56; // [esp+74h] [ebp-14h]
  int v57; // [esp+78h] [ebp-10h]
  float v58; // [esp+7Ch] [ebp-Ch]
  float v59; // [esp+80h] [ebp-8h]
  float v60; // [esp+84h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 388)
    && *(_BYTE *)(a1 + 308)
    && (0.0 == *(float *)(a1 + 264) || *((float *)off_103DC81C + 3) < (double)*(float *)(a1 + 264)) )
  {
    v58 = a4;
    sub_10038150(a1 - 1192);
    v5 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36);
    v59 = -a4;
    v6 = (float *)v5(a1 - 1192);
    v50 = v59 * *(float *)(a1 - 948) + *v6;
    v51 = *(float *)(a1 - 944) * v59 + v6[1];
    v52 = v59 * *(float *)(a1 - 940) + v6[2];
    sub_100392A0((char *)(a1 - 1192), (int)v46, 0, 0);
    while ( 1 )
    {
      v7 = v58;
      if ( v58 < (double)*(float *)(a1 + 380) )
        break;
      v8 = v7 - *(float *)(a1 + 380);
      v58 = v8;
      *(float *)(a1 + 380) = *(float *)(a1 + 376);
      *(float *)&v56 = a4 - v8;
      v9 = -*(float *)(a1 + 292);
      v59 = v9;
      v60 = *(float *)(a1 + 292) - v9;
      v57 = sub_10115FB0();
      v53 = (double)v57 * 0.000030518509 * v60 + v59;
      v57 = sub_10115FB0();
      v54 = (double)v57 * 0.000030518509 * v60 + v59;
      v57 = sub_10115FB0();
      v53 = v53 + v50;
      v54 = v54 + v51;
      v55 = (double)v57 * 0.000030518509 * v60 + v59 + v52;
      sub_10038150(a1 - 1192);
      v10 = *(_DWORD *)(a1 + 388);
      v53 = *(float *)(a1 - 948) * *(float *)&v56 + v53;
      v54 = *(float *)(a1 - 944) * *(float *)&v56 + v54;
      v55 = *(float *)&v56 * *(float *)(a1 - 940) + v55;
      v11 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 0);
      v12 = sub_100F2B60(v10, v10, 60, *(_DWORD *)(a1 + 4 * v11 + 312), &v53);
      v13 = v12;
      if ( v12 )
      {
        v12[11] = 0.0;
        v12[10] = *(float *)(a1 + 256);
        *(float *)&v56 = COERCE_FLOAT(sub_10115FB0());
        v13[6] = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        *(float *)&v56 = COERCE_FLOAT(sub_10115FB0());
        v13[7] = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        *(float *)&v56 = COERCE_FLOAT(sub_10115FB0());
        v13[8] = (double)v56 * 0.000030518509 + (double)v56 * 0.000030518509 - 1.0;
        v14 = ((double (__stdcall *)(_DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                *(float *)(a1 + 268),
                *(float *)(a1 + 272),
                a3,
                a2);
        v13[6] = v13[6] * v14;
        v13[7] = v13[7] * v14;
        v13[8] = v14 * v13[8];
        sub_10038150(a1 - 1192);
        v15 = *(float *)(a1 - 944) + v13[7];
        v16 = *(float *)(a1 - 940) + v13[8];
        v13[6] = v13[6] + *(float *)(a1 - 948);
        v13[7] = v15;
        v13[8] = v16;
        v17 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                *(float *)(a1 + 276),
                *(float *)(a1 + 280));
        v13[6] = v46[0] * v17 + v13[6];
        v13[7] = v46[1] * v17 + v13[7];
        v13[8] = v17 * v46[2] + v13[8];
        v18 = *(float *)(a1 + 244);
        v19 = *(float *)(a1 + 248);
        if ( v18 >= *(float *)(a1 + 240) )
          v20 = *(float *)(a1 + 244);
        else
          v20 = *(float *)(a1 + 240);
        if ( v20 < *(float *)(a1 + 248) )
          v20 = *(float *)(a1 + 248);
        v21 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v22 = 1.0 / v20;
        v47 = *(float *)(a1 + 240) * v22;
        v48 = v18 * v22;
        v49 = v22 * v19;
        v23 = v21(-0.2, 0.2);
        v24 = v47 * v23 + *(float *)(a1 + 240);
        v25 = v48 * v23 + *(float *)(a1 + 244);
        v26 = v23 * v49 + *(float *)(a1 + 248);
        v27 = 1.0;
        if ( v24 <= 1.0 )
        {
          if ( v24 >= 0.0 )
          {
            v33 = v24;
            v28 = 1.0;
            v34 = v33;
            v29 = 0.0;
            v27 = v34;
          }
          else
          {
            v27 = 0.0;
            v29 = 0.0;
            v28 = 1.0;
          }
        }
        else
        {
          v28 = 1.0;
          v29 = 0.0;
        }
        v30 = v29;
        v31 = v25;
        v32 = v30;
        if ( v31 <= v28 )
        {
          if ( v31 < v32 )
            v31 = v32;
        }
        else
        {
          v31 = v28;
        }
        v35 = v31;
        v36 = v26;
        v37 = v35;
        if ( v36 <= v28 )
        {
          if ( v36 >= v32 )
            v32 = v36;
          v39 = v32;
          v38 = v27;
          v28 = v39;
        }
        else
        {
          v38 = v27;
        }
        *((_BYTE *)v13 + 48) = (int)(v38 * 255.0);
        *((_BYTE *)v13 + 49) = (int)(v37 * 255.0);
        v56 = (int)(255.0 * v28);
        *((_BYTE *)v13 + 50) = v56;
        v56 = (int)*(float *)(a1 + 284);
        *((_BYTE *)v13 + 53) = v56;
        v56 = (int)*(float *)(a1 + 288);
        *((_BYTE *)v13 + 54) = v56;
        v45 = *(float *)(a1 + 252) * 1.25;
        v43 = *(float *)(a1 + 252) * 0.75;
        v40 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                LODWORD(v43),
                LODWORD(v45));
        if ( v40 <= 1.0 )
        {
          v41 = 0.0;
          if ( v40 < 0.0 )
            v40 = 0.0;
        }
        else
        {
          v40 = 1.0;
          v41 = 0.0;
        }
        if ( *(float *)(a1 + 264) != v41 && *(float *)(a1 + 260) < (double)*(float *)(a1 + 264) )
          v40 = v40
              * sqrt((*(float *)(a1 + 264) - *((float *)off_103DC81C + 3)) / (*(float *)(a1 + 264) - *(float *)(a1 + 260)));
        *((_BYTE *)v13 + 52) = 0;
        a2 = 360;
        a3 = 0;
        v56 = (int)(v40 * 255.0);
        *((_BYTE *)v13 + 51) = v56;
        *(float *)&v56 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
        v13[9] = (float)v56;
        v13[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
      }
    }
    *(float *)(a1 + 380) = *(float *)(a1 + 380) - v7;
  }
}
