void __usercall sub_1017BE10(int a1@<esi>, float *a2, float *a3)
{
  double v3; // st4
  double v4; // st7
  int v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  float *v13; // eax
  double v14; // st7
  double (__stdcall *v15)(_DWORD, _DWORD); // edx
  double v16; // st7
  double (__stdcall *v17)(_DWORD, _DWORD); // edx
  double v18; // st7
  double (__stdcall *v19)(_DWORD, _DWORD); // edx
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  int v24; // eax
  float *v25; // esi
  int v26; // eax
  float *v27; // eax
  float *v28; // esi
  int v29; // ebx
  float *v30; // esi
  int v31; // eax
  float *v32; // eax
  float *v33; // esi
  int v34; // esi
  float *v35; // eax
  int v36; // edi
  float *v37; // eax
  float *v38; // esi
  int v39; // eax
  int v40; // edx
  double v41; // st7
  double (__thiscall *v42)(int, _DWORD, _DWORD); // eax
  double v43; // st7
  double v44; // st6
  double v45; // st5
  double v46; // st7
  float *v47; // eax
  int v48; // edi
  int v49; // ebx
  _BYTE *v50; // esi
  float *v51; // eax
  float *v52; // esi
  double v53; // st7
  double v54; // st6
  double v55; // st5
  double v56; // st7
  int v57; // ecx
  float v58; // [esp+180h] [ebp-40h]
  float v59; // [esp+180h] [ebp-40h]
  float v60; // [esp+198h] [ebp-28h] BYREF
  float v61; // [esp+19Ch] [ebp-24h]
  float v62; // [esp+1A0h] [ebp-20h]
  float v63; // [esp+1A4h] [ebp-1Ch]
  float v64; // [esp+1A8h] [ebp-18h]
  float v65; // [esp+1ACh] [ebp-14h]
  int v66; // [esp+1B0h] [ebp-10h]
  int v67; // [esp+1B4h] [ebp-Ch]
  float *v68; // [esp+1B8h] [ebp-8h] BYREF
  float *v69; // [esp+1BCh] [ebp-4h] BYREF
  int v70; // [esp+1C8h] [ebp+8h]
  _BYTE *v71; // [esp+1C8h] [ebp+8h]
  int v72; // [esp+1CCh] [ebp+Ch]
  int v73; // [esp+1CCh] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_ConcussiveExplosion", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = a3[2];
  v4 = a3[1] * 2.0;
  v60 = *a3 * 2.0 + *a2;
  v61 = v4 + a2[1];
  v62 = 2.0 * v3 + a2[2];
  sub_100F32D0(&v69, (int)"FX_ConcussiveExplosion 1");
  sub_100F3060((int)v69, &v60);
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_100F2B60((int)v69, a1, 60, dword_1043DF24, &v60);
    a1 = (int)v6;
    if ( !v6 )
      break;
    v6[11] = 0.0;
    v6[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.2,
               0.40000001);
    *(_BYTE *)(a1 + 53) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 4, 8);
    *(_BYTE *)(a1 + 54) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
    v63 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0);
    v64 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0);
    v65 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -1.0,
            1.0);
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           64.0,
           128.0);
    v8 = v63 * v7;
    v9 = v64 * v7;
    v10 = v7 * v65;
    *(float *)(a1 + 24) = v8;
    *(float *)(a1 + 28) = v9;
    *(float *)(a1 + 32) = v10;
    *(_BYTE *)(a1 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                            dword_10413198,
                            64,
                            128);
    *(_BYTE *)(a1 + 52) = 0;
    *(float *)(a1 + 36) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            180.0,
                            360.0);
    *(float *)(a1 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            -4.0,
                            4.0);
    v11 = (int)((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 235.0,
                 255.0);
    ++v5;
    *(_BYTE *)(a1 + 48) = v11;
    *(_BYTE *)(a1 + 49) = v11;
    *(_BYTE *)(a1 + 50) = v11;
    if ( v5 >= 16 )
    {
      v12 = 0;
      do
      {
        v13 = sub_100F2B60((int)v69, a1, 60, dword_1043DF24, &v60);
        a1 = (int)v13;
        if ( !v13 )
          goto LABEL_27;
        v13[11] = 0.0;
        v13[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    1.0,
                    2.0);
        *(_BYTE *)(a1 + 53) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                32,
                                64);
        *(_BYTE *)(a1 + 54) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                100,
                                128);
        v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -0.80000001,
                0.80000001);
        v15 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v63 = v14 + *a3;
        v16 = v15(-0.80000001, 0.80000001);
        v17 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v64 = v16 + a3[1];
        v18 = v17(-0.80000001, 0.80000001);
        v19 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v65 = v18 + a3[2];
        v20 = v19(16.0, 32.0);
        v21 = v63 * v20;
        v22 = v64 * v20;
        v23 = v20 * v65;
        *(float *)(a1 + 24) = v21;
        *(float *)(a1 + 28) = v22;
        *(float *)(a1 + 32) = v23;
        *(_BYTE *)(a1 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                dword_10413198,
                                32,
                                64);
        *(_BYTE *)(a1 + 52) = 0;
        *(float *)(a1 + 36) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                180.0,
                                360.0);
        *(float *)(a1 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                -1.0,
                                1.0);
        v24 = (int)((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     235.0,
                     255.0);
        ++v12;
        *(_BYTE *)(a1 + 48) = v24;
        *(_BYTE *)(a1 + 49) = v24;
        *(_BYTE *)(a1 + 50) = v24;
      }
      while ( v12 < 2 );
      sub_100F32D0(&v68, (int)"FX_ConcussiveExplosion 2");
      sub_100F3060((int)v68, &v60);
      v25 = v68;
      v26 = sub_100F29B0((int)v68, (int)a3, (int)v68, "effects/blueflare1");
      v27 = sub_100F2B60((int)v25, (int)v25, 60, v26, &v60);
      v28 = v27;
      v29 = 0;
      if ( v27 )
      {
        v27[11] = 0.0;
        v27[10] = 0.1;
        v27[6] = 0.0;
        v27[7] = 0.0;
        v27[8] = 0.0;
        v27[9] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   180.0,
                   360.0);
        v28[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
        *((_BYTE *)v28 + 48) = 0x80;
        *(float *)((char *)v28 + 49) = 2.3464149e-38;
        *(_WORD *)((char *)v28 + 53) = 16400;
      }
      v30 = v68;
      v31 = sub_100F29B0((int)v68, (int)a3, (int)v68, "effects/blueflare1");
      v32 = sub_100F2B60((int)v30, (int)v30, 60, v31, &v60);
      v33 = v32;
      if ( v32 )
      {
        v32[11] = 0.0;
        v32[10] = 0.2;
        v32[6] = 0.0;
        v32[7] = 0.0;
        v32[8] = 0.0;
        v32[9] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   180.0,
                   360.0);
        v33[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    -1.0,
                    1.0);
        *((_BYTE *)v33 + 48) = 32;
        *(_DWORD *)((char *)v33 + 49) = 4202528;
        *(_WORD *)((char *)v33 + 53) = -32704;
      }
      v34 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, 0);
      *(float *)(v34 + 4) = v60;
      *(float *)(v34 + 8) = v61;
      *(float *)(v34 + 12) = v62;
      *(_WORD *)(v34 + 21) = 16448;
      *(_BYTE *)(v34 + 20) = 64;
      *(float *)(v34 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               128.0,
                               256.0);
      *(float *)(v34 + 24) = *((float *)off_103DC81C + 3) + 0.1;
      v35 = (float *)sub_100DDA40(384);
      v36 = (int)v35;
      if ( v35 )
      {
        sub_100F2BA0(v35, (int)"FX_ConcussiveExplosion 3");
        *(_DWORD *)v36 = &CTrailParticles::`vftable';
        sub_100E8AB0((void *)(v36 + 260));
        *(float *)(v36 + 380) = 0.0;
        *(_DWORD *)(v36 + 376) = 0;
      }
      else
      {
        v36 = 0;
      }
      v67 = 0;
      if ( v36
        && (sub_100F2950((_DWORD *)v36),
            v67 = v36,
            v72 = sub_100F29B0(v36, v36, v34, "effects/blueflare1"),
            sub_100F3060(v36, &v60),
            *(float *)(v36 + 364) = 0.0,
            v70 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32),
            v70 > 0) )
      {
        while ( 1 )
        {
          v37 = sub_100F2B60(v36, v34, 56, v72, &v60);
          v38 = v37;
          if ( !v37 )
            break;
          v37[11] = 0.0;
          v66 = sub_10115FB0();
          v63 = (double)v66 * 0.000030518509 + (double)v66 * 0.000030518509 - 1.0;
          v66 = sub_10115FB0();
          v64 = (double)v66 * 0.000030518509 + (double)v66 * 0.000030518509 - 1.0;
          v39 = sub_10115FB0();
          v40 = *(_DWORD *)dword_10413198;
          v66 = v39;
          v41 = (double)v39;
          v42 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v40 + 4);
          v65 = v41 * 0.000030518509 * 2.0 - 1.0;
          v38[13] = v42(dword_10413198, 1.0, 2.0);
          v38[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.0099999998,
                      0.1);
          v38[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.1,
                      0.2);
          v43 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  800.0,
                  1000.0);
          v44 = v63 * v43;
          v45 = v64 * v43;
          v46 = v43 * v65;
          v38[6] = v44;
          v38[7] = v45;
          v38[8] = v46;
          v34 = (int)(v38 + 9);
          v58 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.75,
                  1.0);
          sub_1009ECE0((_BYTE *)v34, v58, v58, 1.0, 1.0);
          if ( ++v29 >= v70 )
            goto LABEL_18;
        }
        v57 = v36;
LABEL_24:
        sub_100F2FF0(v57);
      }
      else
      {
LABEL_18:
        v47 = (float *)sub_100DDA40(384);
        v48 = (int)v47;
        v49 = 0;
        if ( v47 )
        {
          sub_100F2BA0(v47, (int)"FX_ConcussiveExplosion 4");
          *(_DWORD *)v48 = &CTrailParticles::`vftable';
          sub_100E8AB0((void *)(v48 + 260));
          *(float *)(v48 + 380) = 0.0;
          *(_DWORD *)(v48 + 376) = 0;
          sub_100F2950((_DWORD *)v48);
          (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v48 + 72))(
            v48,
            &v60,
            0,
            0.0,
            384.0,
            1800.0,
            -400.0,
            0.30000001,
            4,
            0);
          sub_100F3060(v48, &v60);
          v50 = (_BYTE *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 8, 16);
          v71 = v50;
          v73 = sub_100F29B0(v48, v48, (int)v50, "effects/blueflare1");
          if ( (int)v50 > 0 )
          {
            do
            {
              v51 = sub_100F2B60(v48, (int)v50, 56, v73, &v60);
              v52 = v51;
              if ( !v51 )
                break;
              v51[11] = 0.0;
              v66 = sub_10115FB0();
              v63 = (double)v66 * 0.000030518509 + (double)v66 * 0.000030518509 - 1.0;
              v66 = sub_10115FB0();
              v64 = (double)v66 * 0.000030518509 + (double)v66 * 0.000030518509 - 1.0;
              sub_10115FB0();
              v65 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.0,
                      0.75);
              v52[13] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          dword_10413198,
                          1.0,
                          2.0);
              v52[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          dword_10413198,
                          0.0099999998,
                          0.1);
              v52[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          dword_10413198,
                          0.2,
                          1.0);
              v53 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      128.0,
                      512.0);
              v54 = v63 * v53;
              v55 = v64 * v53;
              v56 = v53 * v65;
              v52[6] = v54;
              v52[7] = v55;
              v52[8] = v56;
              v50 = v52 + 9;
              v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.75,
                      1.0);
              sub_1009ECE0(v50, v59, v59, 1.0, 1.0);
              ++v49;
            }
            while ( v49 < (int)v71 );
          }
          sub_100F2FF0(v48);
        }
        v57 = v67;
        if ( v67 )
          goto LABEL_24;
      }
      if ( v68 )
        sub_100F2FF0((int)v68);
      break;
    }
  }
LABEL_27:
  if ( v69 )
    sub_100F2FF0((int)v69);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
