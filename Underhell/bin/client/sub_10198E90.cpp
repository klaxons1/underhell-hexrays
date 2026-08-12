void __cdecl sub_10198E90(int a1, int a2)
{
  int v2; // edi
  double v3; // st7
  int *v4; // esi
  double v5; // st5
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // esi
  double v11; // st6
  double v12; // st7
  char v13; // al
  int v14; // eax
  double v15; // st7
  double v16; // st6
  int *v17; // esi
  int *v18; // edi
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  float *v22; // eax
  float *v23; // esi
  double v24; // st6
  double v25; // st7
  double v26; // st7
  char v27; // al
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int *v31; // esi
  int *v32; // edi
  int v33; // eax
  char *v34; // eax
  int v35; // eax
  float *v36; // eax
  float *v37; // esi
  double v38; // st6
  double v39; // st6
  double v40; // st7
  char v41; // al
  int v42; // eax
  int v43; // eax
  double v44; // st7
  double v45; // st6
  int *v46; // esi
  int *v47; // edi
  int v48; // eax
  char *v49; // eax
  int v50; // eax
  float *v51; // eax
  float *v52; // esi
  double v53; // st5
  double v54; // st6
  double v55; // st7
  char v56; // al
  int v57; // eax
  int v58; // eax
  int *v59; // esi
  int v60; // eax
  float *v61; // eax
  float *v62; // esi
  double v63; // st7
  double v64; // st7
  int v65; // eax
  int v66; // esi
  double v67; // st7
  _BYTE v68[12]; // [esp+B8h] [ebp-60h] BYREF
  float v69; // [esp+C4h] [ebp-54h]
  float v70; // [esp+D4h] [ebp-44h]
  float v71; // [esp+E4h] [ebp-34h]
  float v72; // [esp+E8h] [ebp-30h]
  float v73; // [esp+ECh] [ebp-2Ch]
  float v74; // [esp+F0h] [ebp-28h]
  float v75; // [esp+F4h] [ebp-24h] BYREF
  float v76; // [esp+F8h] [ebp-20h]
  float v77; // [esp+FCh] [ebp-1Ch]
  int v78; // [esp+100h] [ebp-18h]
  int v79; // [esp+104h] [ebp-14h]
  int v80; // [esp+108h] [ebp-10h]
  float v81; // [esp+10Ch] [ebp-Ch]
  float v82; // [esp+110h] [ebp-8h]
  int *v83; // [esp+114h] [ebp-4h] BYREF
  int v84; // [esp+124h] [ebp+Ch]
  int v85; // [esp+124h] [ebp+Ch]
  int v86; // [esp+124h] [ebp+Ch]
  int v87; // [esp+124h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Strider", 0, "Particle/Effect_Rendering", 0, 4);
  if ( sub_10175F70(a1, a2, v68) )
  {
    sub_100F15C0(&v83, (int)"MuzzleFlash_Strider", a1, a2, 0);
    v82 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            3.0,
            4.0);
    v2 = 11;
    v81 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            400.0,
            600.0);
    v3 = 0.0;
    v80 = 1;
    v84 = 11;
    while ( 1 )
    {
      v4 = v83;
      v5 = ((double)v80 + (double)v80) * v82;
      v75 = v5;
      v76 = v3 * v5;
      v77 = v76;
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
      v7 = sub_10076640("effects/combinemuzzle%d", v6);
      v8 = sub_100F29B0((int)v4, v2, (int)v4, v7);
      v9 = sub_100F2B60((int)v4, (int)v4, 60, v8, &v75);
      v10 = v9;
      if ( !v9 )
        break;
      v9[11] = 0.0;
      v9[10] = 0.1;
      v11 = 0.0 * v81;
      v9[6] = v81;
      v9[7] = v11;
      v9[8] = v11;
      *((_BYTE *)v9 + 48) = -1;
      *((_BYTE *)v9 + 49) = -1;
      *((_BYTE *)v9 + 50) = -1;
      *((_BYTE *)v9 + 51) = -1;
      *((_BYTE *)v9 + 52) = 0;
      v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              6.0,
              8.0);
      v79 = (int)(v12 * (double)v84 * 0.11111111 * v82);
      v13 = v79;
      *((_BYTE *)v10 + 53) = v79;
      *((_BYTE *)v10 + 54) = v13;
      v14 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      ++v80;
      v84 = --v2;
      v10[9] = (float)v14;
      v3 = 0.0;
      v10[14] = 0.0;
      if ( v2 <= 0 )
      {
        v81 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                400.0,
                600.0);
        v80 = 1;
        v15 = 0.0;
        v79 = 7;
        while ( 1 )
        {
          v16 = (double)v80 * v82;
          v17 = v83;
          v18 = v83;
          v75 = v15 * v16;
          v76 = v16;
          v77 = v16 * -1.0;
          v19 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
          v20 = sub_10076640("effects/combinemuzzle%d", v19);
          v21 = sub_100F29B0((int)v17, (int)v18, (int)v17, v20);
          v22 = sub_100F2B60((int)v18, (int)v17, 60, v21, &v75);
          v23 = v22;
          if ( !v22 )
            goto LABEL_17;
          v22[11] = 0.0;
          v22[10] = 0.2;
          v24 = v81 * 0.25;
          v25 = v81 * -1.0 * 0.25;
          v22[6] = 0.0 * v81 * 0.25;
          v22[7] = v24;
          v22[8] = v25;
          *((_BYTE *)v22 + 48) = -1;
          *((_BYTE *)v22 + 49) = -1;
          *((_BYTE *)v22 + 50) = -1;
          *((_BYTE *)v22 + 51) = -1;
          *((_BYTE *)v22 + 52) = 0;
          v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  2.0,
                  4.0);
          v78 = (int)(v26 * (double)v79 * 0.25 * v82);
          v27 = v78;
          *((_BYTE *)v23 + 53) = v78;
          *((_BYTE *)v23 + 54) = v27;
          v28 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
          ++v80;
          v85 = v28;
          v29 = --v79;
          v23[9] = (float)v85;
          v15 = 0.0;
          v23[14] = 0.0;
          if ( v29 <= 0 )
          {
            v81 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    400.0,
                    600.0);
            v79 = 1;
            v80 = 7;
            while ( 1 )
            {
              v30 = (double)v79 * v82;
              v31 = v83;
              v32 = v83;
              v75 = -0.0 * v30;
              v76 = v30 * -1.0;
              v77 = v76;
              v33 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
              v34 = sub_10076640("effects/combinemuzzle%d", v33);
              v35 = sub_100F29B0((int)v31, (int)v32, (int)v31, v34);
              v36 = sub_100F2B60((int)v32, (int)v31, 60, v35, &v75);
              v37 = v36;
              if ( !v36 )
                goto LABEL_17;
              v36[11] = 0.0;
              v36[10] = 0.2;
              v38 = -v81;
              v36[6] = 0.0 * v38 * 0.25;
              v39 = v38 * 0.25;
              v36[7] = v39;
              v36[8] = v39;
              *((_BYTE *)v36 + 48) = -1;
              *((_BYTE *)v36 + 49) = -1;
              *((_BYTE *)v36 + 50) = -1;
              *((_BYTE *)v36 + 51) = -1;
              *((_BYTE *)v36 + 52) = 0;
              v40 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      2.0,
                      4.0);
              v78 = (int)(v40 * (double)v80 * 0.25 * v82);
              v41 = v78;
              *((_BYTE *)v37 + 53) = v78;
              *((_BYTE *)v37 + 54) = v41;
              v42 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
              ++v79;
              v86 = v42;
              v43 = --v80;
              v37[9] = (float)v86;
              v37[14] = 0.0;
              if ( v43 <= 0 )
              {
                v81 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        400.0,
                        600.0);
                v79 = 1;
                v44 = 0.0;
                v80 = 7;
                while ( 1 )
                {
                  v45 = (double)v79 * v82;
                  v46 = v83;
                  v47 = v83;
                  v75 = v44 * v45;
                  v76 = v75;
                  v77 = v45;
                  v48 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 2);
                  v49 = sub_10076640("effects/combinemuzzle%d", v48);
                  v50 = sub_100F29B0((int)v46, (int)v47, (int)v46, v49);
                  v51 = sub_100F2B60((int)v47, (int)v46, 60, v50, &v75);
                  v52 = v51;
                  if ( !v51 )
                    goto LABEL_17;
                  v51[11] = 0.0;
                  v51[10] = 0.2;
                  v53 = 0.0 * v81 * 0.25;
                  v54 = v81 * 0.25;
                  v51[6] = v53;
                  v51[7] = v53;
                  v51[8] = v54;
                  *((_BYTE *)v51 + 48) = -1;
                  *((_BYTE *)v51 + 49) = -1;
                  *((_BYTE *)v51 + 50) = -1;
                  *((_BYTE *)v51 + 51) = -1;
                  *((_BYTE *)v51 + 52) = 0;
                  v55 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          dword_10413198,
                          2.0,
                          4.0);
                  v78 = (int)(v55 * (double)v80 * 0.25 * v82);
                  v56 = v78;
                  *((_BYTE *)v52 + 53) = v78;
                  *((_BYTE *)v52 + 54) = v56;
                  v57 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                          dword_10413198,
                          0,
                          360);
                  ++v79;
                  v87 = v57;
                  v58 = --v80;
                  v52[9] = (float)v87;
                  v44 = 0.0;
                  v52[14] = 0.0;
                  if ( v58 <= 0 )
                  {
                    v59 = v83;
                    v60 = sub_100F29B0((int)v83, (int)v47, (int)v83, "effects/strider_muzzle");
                    v61 = sub_100F2B60((int)v59, (int)v59, 60, v60, &flt_10459240);
                    v62 = v61;
                    if ( v61 )
                    {
                      v61[11] = 0.0;
                      v61[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                  dword_10413198,
                                  0.30000001,
                                  0.40000001);
                      v62[6] = 0.0;
                      v62[7] = 0.0;
                      v62[8] = 0.0;
                      *((_BYTE *)v62 + 48) = -1;
                      *((_BYTE *)v62 + 49) = -1;
                      *((_BYTE *)v62 + 50) = -1;
                      *((_BYTE *)v62 + 51) = -1;
                      *((_BYTE *)v62 + 52) = 0;
                      v63 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              12.0,
                              16.0);
                      v64 = v63 * v82;
                      *((_BYTE *)v62 + 54) = 0;
                      v78 = (int)v64;
                      *((_BYTE *)v62 + 53) = (int)v64;
                      v62[9] = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                        dword_10413198,
                                        0,
                                        360);
                      v62[14] = 0.0;
                      v72 = v69;
                      v73 = v70;
                      v74 = v71;
                      v65 = sub_1007A9F0(off_103DCD78, a1);
                      if ( v65 >= 0 )
                      {
                        v66 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 20))(
                                dword_10413164,
                                v65 + 0x40000000);
                        *(float *)(v66 + 4) = v72;
                        *(float *)(v66 + 8) = v73;
                        *(float *)(v66 + 12) = v74;
                        *(_WORD *)(v66 + 20) = -32704;
                        *(_BYTE *)(v66 + 22) = -1;
                        *(_BYTE *)(v66 + 23) = 5;
                        v67 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                        dword_10413198,
                                        100,
                                        150);
                        *(float *)(v66 + 16) = v67;
                        *(float *)(v66 + 28) = v67 * 20.0;
                        *(float *)(v66 + 24) = *((float *)off_103DC81C + 3) + 0.1;
                      }
                    }
                    goto LABEL_17;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_17:
    if ( v83 )
      sub_100F2FF0((int)v83);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
