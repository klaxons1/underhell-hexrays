void __thiscall sub_1018CB50(int this, int *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  float *v7; // eax
  int v8; // esi
  int v9; // eax
  int (__thiscall **v10)(int, int); // edi
  int v11; // eax
  int (__thiscall *v12)(int); // edx
  int v13; // edi
  int v14; // esi
  int v15; // edi
  float *v16; // eax
  double v17; // st7
  float *v18; // eax
  double v19; // st4
  double v20; // st4
  double v21; // st1
  double v22; // rt2
  float *v23; // esi
  float *v24; // eax
  double v25; // st7
  int v26; // edi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  double v30; // st4
  double v31; // st3
  double v32; // st2
  double v33; // st7
  long double v34; // st7
  float *v35; // eax
  int v36; // [esp+2Ch] [ebp-6CC8h]
  int v37; // [esp+2Ch] [ebp-6CC8h]
  _BYTE v38[27648]; // [esp+3Ch] [ebp-6CB8h] BYREF
  float v39[12]; // [esp+6C3Ch] [ebp-B8h] BYREF
  _DWORD v40[4]; // [esp+6C6Ch] [ebp-88h] BYREF
  float v41[3]; // [esp+6C7Ch] [ebp-78h] BYREF
  float v42[3]; // [esp+6C88h] [ebp-6Ch] BYREF
  float v43; // [esp+6C94h] [ebp-60h]
  float v44; // [esp+6C98h] [ebp-5Ch]
  int v45; // [esp+6CA0h] [ebp-54h]
  int v46; // [esp+6CA4h] [ebp-50h]
  int v47; // [esp+6CA8h] [ebp-4Ch]
  int v48; // [esp+6CACh] [ebp-48h]
  float v49; // [esp+6CB0h] [ebp-44h]
  float v50; // [esp+6CB4h] [ebp-40h]
  float v51; // [esp+6CB8h] [ebp-3Ch]
  float v52; // [esp+6CBCh] [ebp-38h]
  float v53; // [esp+6CC0h] [ebp-34h]
  float v54; // [esp+6CC4h] [ebp-30h]
  float v55; // [esp+6CC8h] [ebp-2Ch]
  float v56; // [esp+6CCCh] [ebp-28h]
  float v57; // [esp+6CD0h] [ebp-24h]
  float v58; // [esp+6CD4h] [ebp-20h] BYREF
  float v59; // [esp+6CD8h] [ebp-1Ch]
  float v60; // [esp+6CDCh] [ebp-18h]
  int v61; // [esp+6CE0h] [ebp-14h]
  float v62; // [esp+6CE4h] [ebp-10h]
  float v63; // [esp+6CE8h] [ebp-Ch]
  float v64; // [esp+6CECh] [ebp-8h]
  float v65; // [esp+6CF0h] [ebp-4h]
  int v66; // [esp+6CFCh] [ebp+8h]
  float v67; // [esp+6CFCh] [ebp+8h]
  float v68; // [esp+6CFCh] [ebp+8h]
  int v69; // [esp+6CFCh] [ebp+8h]

  *(_DWORD *)(this + 4) = a2;
  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  if ( sub_100F0010(a2, this - 228, v4) )
  {
    if ( !*(_BYTE *)(this + 12) )
      sub_102282F0((char *)(this + 12), "particle/particle_noisesphere", 0xFFu);
    v5 = sub_100F0C50(this - 228, this - 228, this + 12, (const char *)(this + 12));
    v6 = *(_DWORD *)(this - 1424);
    *(_DWORD *)(this + 8) = v5;
    v7 = (float *)(*(int (__thiscall **)(int))(v6 + 36))(this - 1424);
    v58 = *v7;
    v59 = v7[1];
    v8 = 0;
    v60 = v7[2];
    v48 = 0;
    v9 = sub_1007A6A0(off_103DCD78, 0);
    if ( v9 )
    {
      v10 = *(int (__thiscall ***)(int, int))dword_1041315C;
      v11 = (*(int (__thiscall **)(int, float *, _DWORD, int, _BYTE *, int))(*(_DWORD *)(v9 + 4) + 36))(
              v9 + 4,
              &v58,
              240.0,
              1,
              v38,
              128);
      v48 = (*v10)(dword_1041315C, v11);
    }
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124);
    v47 = 0;
    v66 = 70;
    if ( v12(dword_1047C97C) < 80 )
      v66 = 17;
    v13 = v66;
    if ( v48 > 0 )
    {
      v46 = v66;
      do
      {
        v45 = 0;
        while ( 1 )
        {
          v65 = COERCE_FLOAT(sub_10115FB0());
          v62 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          v65 = COERCE_FLOAT(sub_10115FB0());
          v63 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          v65 = COERCE_FLOAT(sub_10115FB0());
          v64 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          off_103EDFEC();
          v41[0] = v62 * 240.0 + v58;
          v41[1] = v63 * 240.0 + v59;
          v41[2] = 240.0 * v64 + v60;
          v65 = COERCE_FLOAT(sub_10115FB0());
          v43 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          v65 = COERCE_FLOAT(sub_10115FB0());
          v44 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          v65 = COERCE_FLOAT(sub_10115FB0());
          v62 = v43;
          v63 = v44;
          v64 = (double)SLODWORD(v65) * 0.000030518509 + (double)SLODWORD(v65) * 0.000030518509 - 1.0;
          off_103EDFEC();
          v42[0] = v62 * 240.0 + v58;
          v42[1] = v63 * 240.0 + v59;
          v42[2] = 240.0 * v64 + v60;
          v14 = sub_1018C670((int)v39, (int)v38, v41, v42, v48, (int)v40, 4);
          if ( v14 )
          {
            v15 = sub_10115FB0() % v14;
            v16 = &v39[3 * v15];
            v55 = *v16 - v58;
            v56 = v16[1] - v59;
            v57 = v16[2] - v60;
            v17 = off_103EDFEC();
            v65 = v17;
            if ( v17 > 240.0 )
            {
              v17 = 240.0;
              v65 = 240.0;
            }
            *(float *)&v61 = pow(1.0 - v17 * 0.0041666669, flt_103EA8E0);
            v18 = (float *)v40[v15];
            v19 = v18[51] * v57 + v18[49] * v55 + v18[50] * v56;
            v20 = v19 + v19;
            v21 = v18[51];
            v22 = v18[50] * v20;
            v52 = v55 - v18[49] * v20;
            v53 = v56 - v22;
            v54 = v57 - v20 * v21;
            off_103EDFEC();
            v36 = *(_DWORD *)(this + 8);
            v49 = v52 * 10000.0 * *(float *)&v61;
            v50 = v53 * 10000.0 * *(float *)&v61;
            v51 = *(float *)&v61 * (10000.0 * v54);
            v23 = (float *)sub_100F06D0(this - 228, v14, 76, v36);
            if ( v23 )
              break;
          }
          if ( ++v45 >= 3 )
            goto LABEL_21;
        }
        v24 = &v39[3 * v15];
        v23[3] = *v24;
        v23[4] = v24[1];
        v23[5] = v24[2];
        v23[13] = v23[3];
        v23[14] = v23[4];
        v23[15] = v23[5];
        v23[12] = 8.0;
        v23[6] = v49;
        v23[7] = v50;
        v23[8] = v51;
        v23[9] = v65 * -0.000076737138 - 0.1;
        *(float *)&v61 = COERCE_FLOAT(sub_10115FB0());
        v23[16] = (double)v61 * 0.000030518509 * 6.2831855;
        *(float *)&v61 = COERCE_FLOAT(sub_10115FB0());
        v23[17] = ((double)v61 * 0.000030518509 + (double)v61 * 0.000030518509 - 1.0) * 0.4;
        v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.0,
                6.0);
        ++v47;
        v23[18] = v25 + 4.0;
LABEL_21:
        --v46;
      }
      while ( v46 );
      v8 = v47;
      v13 = v66;
    }
    if ( v8 < v13 )
    {
      v26 = v13 - v8;
      do
      {
        v27 = sub_10115FB0();
        v52 = (double)v27 * 0.000030518509 + (double)v27 * 0.000030518509 - 1.0;
        v28 = sub_10115FB0();
        v53 = (double)v28 * 0.000030518509 + (double)v28 * 0.000030518509 - 1.0;
        v29 = sub_10115FB0();
        v54 = (double)v29 * 0.000030518509 + (double)v29 * 0.000030518509 - 1.0;
        off_103EDFEC();
        v30 = v52 * 240.0 * 0.25 + v58;
        v49 = v30;
        v31 = v53 * 240.0 * 0.25 + v59;
        v50 = v31;
        v32 = 240.0 * v54 * 0.25 + v60;
        v51 = v32;
        v55 = v30 - v58;
        v56 = v31 - v59;
        v57 = v32 - v60;
        v67 = off_103EDFEC();
        v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.0,
                60.0)
            + v67;
        v68 = v33;
        if ( v33 > 240.0 )
        {
          v33 = 240.0;
          v68 = 240.0;
        }
        v34 = pow(1.0 - v33 * 0.0083333338, flt_103EA8DC);
        v37 = *(_DWORD *)(this + 8);
        v62 = v55 * 10000.0 * v34;
        v63 = v56 * 10000.0 * v34;
        v64 = v34 * (10000.0 * v57);
        v35 = (float *)sub_100F06D0(this - 228, v8, 76, v37);
        v8 = (int)v35;
        if ( v35 )
        {
          v35[3] = v49;
          v35[4] = v50;
          v35[5] = v51;
          v35[13] = v35[3];
          v35[14] = v35[4];
          v35[15] = v35[5];
          v35[12] = 8.0;
          v35[6] = v62;
          v35[7] = v63;
          v35[8] = v64;
          v35[9] = v68 * -0.000076737138 - 0.1;
          v35[16] = (double)sub_10115FB0() * 0.000030518509 * 6.2831855;
          v69 = sub_10115FB0();
          *(float *)(v8 + 68) = ((double)v69 * 0.000030518509 + (double)v69 * 0.000030518509) * 4.0 - 4.0;
          *(float *)(v8 + 72) = (((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.0,
                                   6.0)
                               + 4.0)
                              * 0.5;
        }
        --v26;
      }
      while ( v26 );
    }
  }
}
