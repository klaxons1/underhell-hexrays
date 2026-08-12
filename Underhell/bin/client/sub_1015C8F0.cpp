void __userpurge sub_1015C8F0(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, float a4)
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
  double v40; // st7
  float v42; // [esp+38h] [ebp-50h]
  float v44; // [esp+3Ch] [ebp-4Ch]
  float v45[3]; // [esp+44h] [ebp-44h] BYREF
  float v46; // [esp+50h] [ebp-38h]
  float v47; // [esp+54h] [ebp-34h]
  float v48; // [esp+58h] [ebp-30h]
  float v49; // [esp+5Ch] [ebp-2Ch]
  float v50; // [esp+60h] [ebp-28h]
  float v51; // [esp+64h] [ebp-24h]
  float v52; // [esp+68h] [ebp-20h] BYREF
  float v53; // [esp+6Ch] [ebp-1Ch]
  float v54; // [esp+70h] [ebp-18h]
  int v55; // [esp+74h] [ebp-14h]
  int v56; // [esp+78h] [ebp-10h]
  float v57; // [esp+7Ch] [ebp-Ch]
  float v58; // [esp+80h] [ebp-8h]
  float v59; // [esp+84h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 344)
    && *(_BYTE *)(a1 + 316)
    && (0.0 == *(float *)(a1 + 272) || *((float *)off_103DC81C + 3) < (double)*(float *)(a1 + 272)) )
  {
    v57 = a4;
    sub_10038150(a1 - 1192);
    v5 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1192) + 36);
    v58 = -a4;
    v6 = (float *)v5(a1 - 1192);
    v49 = v58 * *(float *)(a1 - 948) + *v6;
    v50 = *(float *)(a1 - 944) * v58 + v6[1];
    v51 = v58 * *(float *)(a1 - 940) + v6[2];
    sub_100392A0((char *)(a1 - 1192), (int)v45, 0, 0);
    while ( 1 )
    {
      v7 = v57;
      if ( v57 < (double)*(float *)(a1 + 336) )
        break;
      v8 = v7 - *(float *)(a1 + 336);
      v57 = v8;
      *(float *)(a1 + 336) = *(float *)(a1 + 332);
      *(float *)&v55 = a4 - v8;
      v9 = -*(float *)(a1 + 300);
      v58 = v9;
      v59 = *(float *)(a1 + 300) - v9;
      v56 = sub_10115FB0();
      v52 = (double)v56 * 0.000030518509 * v59 + v58;
      v56 = sub_10115FB0();
      v53 = (double)v56 * 0.000030518509 * v59 + v58;
      v56 = sub_10115FB0();
      v52 = v52 + v49;
      v53 = v53 + v50;
      v54 = (double)v56 * 0.000030518509 * v59 + v58 + v51;
      sub_10038150(a1 - 1192);
      v10 = *(_DWORD *)(a1 + 344);
      v52 = *(float *)(a1 - 948) * *(float *)&v55 + v52;
      v53 = *(float *)(a1 - 944) * *(float *)&v55 + v53;
      v54 = *(float *)&v55 * *(float *)(a1 - 940) + v54;
      v11 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v12 = sub_100F2B60(v10, v10, 60, *(_DWORD *)(a1 + 4 * v11 + 324), &v52);
      v13 = v12;
      if ( v12 )
      {
        v12[11] = 0.0;
        v12[10] = *(float *)(a1 + 268);
        *(float *)&v55 = COERCE_FLOAT(sub_10115FB0());
        v13[6] = (double)v55 * 0.000030518509 + (double)v55 * 0.000030518509 - 1.0;
        *(float *)&v55 = COERCE_FLOAT(sub_10115FB0());
        v13[7] = (double)v55 * 0.000030518509 + (double)v55 * 0.000030518509 - 1.0;
        *(float *)&v55 = COERCE_FLOAT(sub_10115FB0());
        v13[8] = (double)v55 * 0.000030518509 + (double)v55 * 0.000030518509 - 1.0;
        v14 = ((double (__stdcall *)(_DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                *(float *)(a1 + 276),
                *(float *)(a1 + 280),
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
                *(float *)(a1 + 284),
                *(float *)(a1 + 288));
        v13[6] = v45[0] * v17 + v13[6];
        v13[7] = v45[1] * v17 + v13[7];
        v13[8] = v17 * v45[2] + v13[8];
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
        v46 = *(float *)(a1 + 240) * v22;
        v47 = v18 * v22;
        v48 = v22 * v19;
        v23 = v21(-0.2, 0.2);
        v24 = v46 * v23 + *(float *)(a1 + 240);
        v25 = v47 * v23 + *(float *)(a1 + 244);
        v26 = v23 * v48 + *(float *)(a1 + 248);
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
        v55 = (int)(255.0 * v28);
        *((_BYTE *)v13 + 50) = v55;
        v55 = (int)*(float *)(a1 + 292);
        *((_BYTE *)v13 + 53) = v55;
        v55 = (int)*(float *)(a1 + 296);
        *((_BYTE *)v13 + 54) = v55;
        v44 = *(float *)(a1 + 264) * 1.25;
        v42 = *(float *)(a1 + 264) * 0.75;
        v40 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                LODWORD(v42),
                LODWORD(v44));
        if ( v40 <= 1.0 )
        {
          if ( v40 < 0.0 )
            v40 = 0.0;
        }
        else
        {
          v40 = 1.0;
        }
        *((_BYTE *)v13 + 52) = 0;
        a2 = 360;
        a3 = 0;
        v55 = (int)(v40 * 255.0);
        *((_BYTE *)v13 + 51) = v55;
        *(float *)&v55 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
        v13[9] = (float)v55;
        v13[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
      }
    }
    *(float *)(a1 + 336) = *(float *)(a1 + 336) - v7;
  }
}
