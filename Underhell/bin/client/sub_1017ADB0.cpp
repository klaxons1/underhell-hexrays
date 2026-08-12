void __usercall sub_1017ADB0(int a1@<edi>, float *a2, int a3, int a4, float *a5)
{
  int v5; // ebx
  float *v6; // eax
  int v7; // esi
  double v8; // st7
  float *v9; // eax
  float *v10; // esi
  double v11; // st7
  double v12; // st3
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  float *v18; // eax
  int v19; // ebx
  int v20; // esi
  float *v21; // eax
  double v22; // st7
  double v23; // st7
  double v24; // st6
  int v25; // eax
  double v26; // st5
  double v27; // st7
  float *v28; // eax
  int v29; // ebx
  int v30; // ebx
  int v31; // eax
  float *v32; // eax
  int v33; // esi
  int v34; // eax
  float *v35; // eax
  int v36; // esi
  char v37; // al
  int v38; // eax
  double v39; // st7
  double (__stdcall *v40)(_DWORD, _DWORD); // edx
  double v41; // st7
  float *v42; // eax
  float *v43; // esi
  unsigned __int8 v44; // al
  int v45; // ecx
  int v46; // ecx
  float v47; // [esp+100h] [ebp-38h]
  float v48[3]; // [esp+10Ch] [ebp-2Ch] BYREF
  float v49; // [esp+118h] [ebp-20h]
  float v50; // [esp+11Ch] [ebp-1Ch]
  float v51; // [esp+120h] [ebp-18h]
  float v52; // [esp+124h] [ebp-14h]
  int v53; // [esp+128h] [ebp-10h]
  float *v54; // [esp+12Ch] [ebp-Ch]
  float *v55; // [esp+130h] [ebp-8h]
  int v56; // [esp+134h] [ebp-4h]

  v5 = 0;
  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_ElectricSpark", 0, "Particle/Effect_Rendering", 0, 4);
  v6 = (float *)sub_100DDA40(384);
  v7 = (int)v6;
  v55 = v6;
  if ( v6 )
  {
    sub_100F2BA0(v6, (int)"FX_ElectricSpark 1");
    *(_DWORD *)v7 = &CTrailParticles::`vftable';
    sub_100E8AB0((void *)(v7 + 260));
    *(float *)(v7 + 380) = 0.0;
    *(_DWORD *)(v7 + 376) = 0;
    sub_100F2950((_DWORD *)v7);
    if ( !dword_10445298 )
      dword_10445298 = sub_100F29B0(v7, a1, v7, "effects/spark");
    v47 = *(float *)&a1;
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v7 + 72))(
      v7,
      a2,
      0,
      0.0,
      64.0,
      300.0,
      800.0,
      0.30000001,
      1,
      0);
    sub_100F3060(v7, a2);
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           2.0,
           4.0);
    v53 = a3 * a3;
    v56 = (int)(v8 * (double)(a3 * a3));
    if ( v56 <= 0 )
    {
LABEL_9:
      v18 = (float *)sub_100DDA40(384);
      v19 = (int)v18;
      v54 = v18;
      if ( !v18 )
      {
        v46 = v7;
        goto LABEL_29;
      }
      sub_100F2BA0(v18, (int)"FX_ElectricSpark 2");
      *(_DWORD *)v19 = &CTrailParticles::`vftable';
      sub_100E8AB0((void *)(v19 + 260));
      v20 = 0;
      *(float *)(v19 + 380) = 0.0;
      *(_DWORD *)(v19 + 376) = 0;
      sub_100F2950((_DWORD *)v19);
      sub_100F3060(v19, a2);
      *(float *)(v19 + 364) = 400.0;
      *(_DWORD *)(v19 + 376) |= 1u;
      v56 = a3 * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
      v53 = 0;
      if ( v56 <= 0 )
      {
LABEL_16:
        v52 = *((float *)off_103DC81C + 3) + 0.2;
        v28 = (float *)sub_100DDA40(276);
        v29 = (int)v28;
        if ( v28 )
        {
          sub_100F2BA0(v28, (int)"FX_ElectricSpark 3");
          *(_DWORD *)v29 = &CSimpleGlowEmitter::`vftable';
          sub_100F3060(v29, a2);
          *(_DWORD *)(v29 + 268) = 0;
          *(_WORD *)(v29 + 272) = 0;
          v20 = v29;
          *(float *)(v29 + 264) = *((float *)off_103DC81C + 3);
          *(float *)(v29 + 260) = v52;
        }
        v30 = 0;
        if ( v20 )
        {
          sub_100F2950((_DWORD *)v20);
          v30 = v20;
        }
        v31 = sub_100F29B0(v30, (int)a2, v20, "effects/yellowflare_noz");
        v32 = sub_100F2B60(v30, v20, 60, v31, a2);
        v33 = (int)v32;
        if ( v32 )
        {
          v32[11] = 0.0;
          v32[10] = 0.2;
          v32[6] = 0.0;
          v32[7] = 0.0;
          v32[8] = 0.0;
          v32[12] = NAN;
          *((_BYTE *)v32 + 52) = -1;
          *((_BYTE *)v32 + 53) = a3
                               * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                   dword_10413198,
                                   4,
                                   8);
          *(_BYTE *)(v33 + 54) = 0;
          v52 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360));
          *(float *)(v33 + 36) = (float)SLODWORD(v52);
          *(float *)(v33 + 56) = 0.0;
          v34 = sub_100F29B0(v30, (int)a2, v33, "effects/yellowflare_noz");
          v35 = sub_100F2B60(v30, v33, 60, v34, a2);
          v36 = (int)v35;
          if ( v35 )
          {
            v35[11] = 0.0;
            v35[10] = 0.2;
            v35[6] = 0.0;
            v35[7] = 0.0;
            v35[8] = 0.0;
            LODWORD(v52) = (int)(double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                          dword_10413198,
                                          32,
                                          64);
            v37 = LOBYTE(v52);
            *(_BYTE *)(v36 + 48) = LOBYTE(v52);
            *(_BYTE *)(v36 + 49) = v37;
            *(_BYTE *)(v36 + 50) = v37;
            *(_BYTE *)(v36 + 51) = v37;
            *(_BYTE *)(v36 + 52) = 0;
            *(_BYTE *)(v36 + 53) = a3
                                 * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                     dword_10413198,
                                     32,
                                     64);
            *(_BYTE *)(v36 + 54) = 0;
            v52 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360));
            *(float *)(v36 + 36) = (float)SLODWORD(v52);
            *(float *)(v36 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                     dword_10413198,
                                     -1.0,
                                     1.0);
            v38 = *(_DWORD *)dword_10413198;
            v52 = *a2;
            v39 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v38 + 4))(dword_10413198, -4.0, 4.0);
            v48[0] = v39 + v52;
            v40 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
            v52 = a2[1];
            v41 = v40(-4.0, 4.0);
            v48[1] = v41 + v52;
            v48[2] = a2[2];
            v42 = sub_100F2B60(v30, v36, 60, dword_1043DF24, v48);
            v43 = v42;
            if ( v42 )
            {
              v42[11] = 0.0;
              v42[10] = 1.0;
              v42[6] = 0.0;
              v42[7] = 0.0;
              v42[8] = 0.0;
              v42[8] = 16.0;
              v42[6] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                         dword_10413198,
                         -16.0,
                         16.0);
              v43[7] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                         dword_10413198,
                         -16.0,
                         16.0);
              *((_WORD *)v43 + 24) = -1;
              *((_BYTE *)v43 + 50) = -56;
              *((_BYTE *)v43 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                       dword_10413198,
                                       16,
                                       32);
              *((_BYTE *)v43 + 52) = 0;
              v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 4, 8);
              *((_BYTE *)v43 + 53) = v44;
              LODWORD(v52) = (int)((double)v44 * 4.0);
              *((_BYTE *)v43 + 54) = LOBYTE(v52);
              v52 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360));
              v43[9] = (float)SLODWORD(v52);
              v43[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          dword_10413198,
                          -2.0,
                          2.0);
            }
          }
        }
        if ( v30 )
          sub_100F2FF0(v30);
        v45 = (int)v54;
      }
      else
      {
        while ( 1 )
        {
          v21 = sub_100F2B60(v19, v20, 56, dword_10445298, a2);
          v20 = (int)v21;
          if ( !v21 )
            break;
          v21[11] = 0.0;
          v52 = COERCE_FLOAT(sub_10115FB0());
          v49 = (double)SLODWORD(v52) * 0.000030518509 + (double)SLODWORD(v52) * 0.000030518509 - 1.0;
          v52 = COERCE_FLOAT(sub_10115FB0());
          v50 = (double)SLODWORD(v52) * 0.000030518509 + (double)SLODWORD(v52) * 0.000030518509 - 1.0;
          v52 = COERCE_FLOAT(sub_10115FB0());
          v22 = (double)SLODWORD(v52) * 0.000030518509 + (double)SLODWORD(v52) * 0.000030518509 - 1.0;
          v51 = v22;
          if ( a5 )
          {
            v49 = *a5 + v49;
            v50 = a5[1] + v50;
            v51 = v22 + a5[2];
            off_103EDFEC();
          }
          *(float *)(v20 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   2.0,
                                   4.0);
          *(float *)(v20 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.02,
                                   0.029999999)
                               * (double)a4;
          *(float *)(v20 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.1,
                                   0.2)
                               * (double)a3;
          v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  128.0,
                  256.0);
          v24 = v49 * v23;
          v25 = ++v53;
          v26 = v50 * v23;
          v27 = v23 * v51;
          *(float *)(v20 + 24) = v24;
          *(float *)(v20 + 28) = v26;
          *(float *)(v20 + 32) = v27;
          *(_DWORD *)(v20 + 36) = -1;
          if ( v25 >= v56 )
          {
            v20 = 0;
            goto LABEL_16;
          }
        }
        v45 = v19;
      }
      sub_100F2FF0(v45);
    }
    else
    {
      while ( 1 )
      {
        v9 = sub_100F2B60(v7, v7, 56, dword_10445298, a2);
        v10 = v9;
        if ( !v9 )
          break;
        v9[11] = 0.0;
        v9[10] = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   1.0,
                   2.0,
                   LODWORD(v47))
               * (double)a3;
        v53 = sub_10115FB0();
        v49 = (double)v53 * 0.000030518509 + (double)v53 * 0.000030518509 - 1.0;
        v53 = sub_10115FB0();
        v50 = (double)v53 * 0.000030518509 + (double)v53 * 0.000030518509 - 1.0;
        v53 = sub_10115FB0();
        v51 = (double)v53 * 0.000030518509 + (double)v53 * 0.000030518509 - 1.0;
        v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.5,
                1.0);
        v51 = v11;
        if ( a5 )
        {
          v12 = a5[2];
          v13 = a5[1] * 2.0;
          v49 = *a5 * 2.0 + v49;
          v50 = v13 + v50;
          v51 = v11 + 2.0 * v12;
          off_103EDFEC();
        }
        v47 = 5.0;
        v10[13] = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198, 2.0);
        v10[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.02,
                    0.050000001)
                * (double)a4;
        v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                64.0,
                300.0);
        ++v5;
        v15 = v49 * v14;
        v16 = v50 * v14;
        v17 = v14 * v51;
        v10[6] = v15;
        v10[7] = v16;
        v10[8] = v17;
        v10[9] = NAN;
        v7 = (int)v55;
        if ( v5 >= v56 )
          goto LABEL_9;
      }
    }
    v46 = (int)v55;
LABEL_29:
    sub_100F2FF0(v46);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return;
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
