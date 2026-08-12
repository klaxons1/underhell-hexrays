void __stdcall sub_1016C2E0(int a1, int a2)
{
  int v2; // edi
  double v3; // st7
  double v4; // st6
  int *v5; // esi
  double v6; // st5
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  double v10; // st6
  double v11; // st7
  char v12; // al
  int v13; // eax
  int v14; // edi
  double v15; // st7
  int *v16; // esi
  double v17; // st6
  int v18; // eax
  float *v19; // eax
  float *v20; // esi
  double v21; // st6
  double v22; // st7
  double v23; // st7
  char v24; // al
  int v25; // eax
  int v26; // edi
  int *v27; // esi
  double v28; // st7
  int v29; // eax
  float *v30; // eax
  float *v31; // esi
  double v32; // st6
  double v33; // st6
  double v34; // st7
  char v35; // al
  int v36; // eax
  int v37; // edi
  double v38; // st7
  int *v39; // esi
  double v40; // st6
  int v41; // eax
  float *v42; // eax
  int v43; // esi
  double v44; // st5
  double v45; // st6
  double v46; // st7
  char v47; // al
  int v48; // eax
  float *v49; // eax
  float *v50; // esi
  double v51; // st7
  double v52; // st7
  bool v53; // zf
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // esi
  double v58; // st7
  int v59[12]; // [esp+B8h] [ebp-60h] BYREF
  float v60; // [esp+E8h] [ebp-30h]
  float v61; // [esp+ECh] [ebp-2Ch]
  float v62; // [esp+F0h] [ebp-28h]
  float v63; // [esp+F4h] [ebp-24h] BYREF
  float v64; // [esp+F8h] [ebp-20h]
  float v65; // [esp+FCh] [ebp-1Ch]
  int v66; // [esp+100h] [ebp-18h]
  int v67; // [esp+104h] [ebp-14h]
  float v68; // [esp+108h] [ebp-10h]
  float v69; // [esp+10Ch] [ebp-Ch]
  int *v70; // [esp+110h] [ebp-8h] BYREF
  int v71; // [esp+114h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Combine_NPC", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F15C0(&v70, (int)"MuzzleFlash_Combine_NPC", a1, a2, 0);
  v69 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          1.0,
          1.5);
  v2 = 1;
  v68 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          50.0,
          150.0);
  v3 = 0.0;
  v67 = 1;
  while ( 1 )
  {
    v4 = (double)v67;
    v5 = v70;
    *(float *)&v67 = v4;
    v6 = (v4 + v4) * v69;
    v63 = v6;
    v64 = v3 * v6;
    v65 = v64;
    v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
    v8 = sub_100F2B60((int)v5, (int)v5, 60, dword_1043DF40[v7], &v63);
    v9 = v8;
    if ( !v8 )
      break;
    v8[11] = 0.0;
    v8[10] = 0.1;
    v10 = 0.0 * v68;
    v8[6] = v68;
    v8[7] = v10;
    v8[8] = v10;
    *((_BYTE *)v8 + 48) = -1;
    *((_BYTE *)v8 + 49) = -1;
    *((_BYTE *)v8 + 50) = -1;
    *((_BYTE *)v8 + 51) = -1;
    *((_BYTE *)v8 + 52) = 0;
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            6.0,
            8.0);
    v67 = (int)(v11 * (7.5 - *(float *)&v67) * 0.16666667 * v69);
    v12 = v67;
    *((_BYTE *)v9 + 53) = v67;
    *((_BYTE *)v9 + 54) = v12;
    v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
    v67 = ++v2;
    v9[9] = (float)v13;
    v3 = 0.0;
    v9[14] = 0.0;
    if ( v2 >= 6 )
    {
      v14 = 5;
      v68 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              50.0,
              150.0);
      v15 = 0.0;
      v67 = 1;
      v71 = 5;
      while ( 1 )
      {
        v16 = v70;
        v17 = (double)v67 * v69;
        v63 = v15 * v17;
        v64 = v17;
        v65 = v17 * -1.0;
        v18 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
        v19 = sub_100F2B60((int)v16, (int)v16, 60, dword_1043DF40[v18], &v63);
        v20 = v19;
        if ( !v19 )
          goto LABEL_18;
        v19[11] = 0.0;
        v19[10] = 0.2;
        v21 = v68 * 0.25;
        v22 = v68 * -1.0 * 0.25;
        v19[6] = 0.0 * v68 * 0.25;
        v19[7] = v21;
        v19[8] = v22;
        *((_BYTE *)v19 + 48) = -1;
        *((_BYTE *)v19 + 49) = -1;
        *((_BYTE *)v19 + 50) = -1;
        *((_BYTE *)v19 + 51) = -1;
        *((_BYTE *)v19 + 52) = 0;
        v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                2.0,
                4.0);
        v66 = (int)(v23 * (double)v71 * 0.33333334 * v69);
        v24 = v66;
        *((_BYTE *)v20 + 53) = v66;
        *((_BYTE *)v20 + 54) = v24;
        v25 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
        ++v67;
        v66 = v25;
        v71 = --v14;
        v20[9] = (float)v25;
        v15 = 0.0;
        v20[14] = 0.0;
        if ( v14 <= 0 )
        {
          v26 = 5;
          v68 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  50.0,
                  150.0);
          v67 = 1;
          v71 = 5;
          while ( 1 )
          {
            v27 = v70;
            v28 = (double)v67 * v69;
            v63 = -0.0 * v28;
            v64 = v28 * -1.0;
            v65 = v64;
            v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
            v30 = sub_100F2B60((int)v27, (int)v27, 60, dword_1043DF40[v29], &v63);
            v31 = v30;
            if ( !v30 )
              goto LABEL_18;
            v30[11] = 0.0;
            v30[10] = 0.2;
            v32 = -v68;
            v30[6] = 0.0 * v32 * 0.25;
            v33 = v32 * 0.25;
            v30[7] = v33;
            v30[8] = v33;
            *((_BYTE *)v30 + 48) = -1;
            *((_BYTE *)v30 + 49) = -1;
            *((_BYTE *)v30 + 50) = -1;
            *((_BYTE *)v30 + 51) = -1;
            *((_BYTE *)v30 + 52) = 0;
            v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    2.0,
                    4.0);
            v66 = (int)(v34 * (double)v71 * 0.33333334 * v69);
            v35 = v66;
            *((_BYTE *)v31 + 53) = v66;
            *((_BYTE *)v31 + 54) = v35;
            v36 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
            ++v67;
            v66 = v36;
            v71 = --v26;
            v31[9] = (float)v36;
            v31[14] = 0.0;
            if ( v26 <= 0 )
            {
              v37 = 5;
              v68 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      50.0,
                      150.0);
              v38 = 0.0;
              v67 = 1;
              v71 = 5;
              while ( 1 )
              {
                v39 = v70;
                v40 = (double)v67 * v69;
                v63 = v38 * v40;
                v64 = v63;
                v65 = v40;
                v41 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
                v42 = sub_100F2B60((int)v39, (int)v39, 60, dword_1043DF40[v41], &v63);
                v43 = (int)v42;
                if ( !v42 )
                  goto LABEL_18;
                v42[11] = 0.0;
                v42[10] = 0.2;
                v44 = 0.0 * v68 * 0.25;
                v45 = v68 * 0.25;
                v42[6] = v44;
                v42[7] = v44;
                v42[8] = v45;
                *((_BYTE *)v42 + 48) = -1;
                *((_BYTE *)v42 + 49) = -1;
                *((_BYTE *)v42 + 50) = -1;
                *((_BYTE *)v42 + 51) = -1;
                *((_BYTE *)v42 + 52) = 0;
                v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                        dword_10413198,
                        2.0,
                        4.0);
                v66 = (int)(v46 * (double)v71 * 0.33333334 * v69);
                v47 = v66;
                *(_BYTE *)(v43 + 53) = v66;
                *(_BYTE *)(v43 + 54) = v47;
                v48 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
                ++v67;
                v66 = v48;
                v71 = --v37;
                *(float *)(v43 + 36) = (float)v48;
                v38 = 0.0;
                *(float *)(v43 + 56) = 0.0;
                if ( v37 <= 0 )
                {
                  v49 = sub_100F2B60((int)v70, v43, 60, dword_1043DF48, &flt_10459240);
                  v50 = v49;
                  if ( v49 )
                  {
                    v49[11] = 0.0;
                    v49[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                0.30000001,
                                0.40000001);
                    v50[6] = 0.0;
                    v50[7] = 0.0;
                    v50[8] = 0.0;
                    *((_BYTE *)v50 + 48) = -1;
                    *((_BYTE *)v50 + 49) = -1;
                    *((_BYTE *)v50 + 50) = -1;
                    *((_BYTE *)v50 + 51) = -1;
                    *((_BYTE *)v50 + 52) = 0;
                    v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            12.0,
                            16.0);
                    v52 = v51 * v69;
                    *((_BYTE *)v50 + 54) = 0;
                    v66 = (int)v52;
                    *((_BYTE *)v50 + 53) = (int)v52;
                    v66 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                            dword_10413198,
                            0,
                            360);
                    v50[9] = (float)v66;
                    v50[14] = 0.0;
                    if ( (unsigned __int8)sub_10175F70(a1, a2, v59) )
                    {
                      v53 = *(_DWORD *)(dword_104451A4 + 48) == 0;
                      v60 = *(float *)&v59[3];
                      v61 = *(float *)&v59[7];
                      v62 = *(float *)&v59[11];
                      if ( !v53 )
                      {
                        v54 = sub_1007A770(off_103DCD78, a1);
                        if ( v54 )
                        {
                          v55 = *(_DWORD *)dword_10413164;
                          v56 = (*(int (__thiscall **)(int))(*(_DWORD *)(v54 + 8) + 36))(v54 + 8);
                          v57 = (*(int (__thiscall **)(int, int))(v55 + 20))(dword_10413164, v56 + 0x40000000);
                          *(float *)(v57 + 4) = v60;
                          *(float *)(v57 + 8) = v61;
                          *(float *)(v57 + 12) = v62;
                          *(_WORD *)(v57 + 20) = -32704;
                          *(_BYTE *)(v57 + 22) = -1;
                          *(_BYTE *)(v57 + 23) = 5;
                          v58 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                          dword_10413198,
                                          32,
                                          128);
                          *(float *)(v57 + 16) = v58;
                          *(float *)(v57 + 28) = v58 * 20.0;
                          *(float *)(v57 + 24) = *((float *)off_103DC81C + 3) + 0.050000001;
                        }
                      }
                    }
                  }
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_18:
  if ( v70 )
    sub_100F2FF0((int)v70);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
