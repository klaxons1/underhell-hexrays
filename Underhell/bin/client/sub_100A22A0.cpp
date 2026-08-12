void __usercall sub_100A22A0(int a1@<ecx>, float a2@<edi>, float a3@<esi>)
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // esi
  double v21; // st7
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st6
  long double v26; // st3
  long double v27; // st3
  double v28; // st7
  double v29; // st5
  double v30; // st4
  int v31; // eax
  int v34; // [esp+B8h] [ebp-48h] BYREF
  float v35; // [esp+BCh] [ebp-44h]
  float v36; // [esp+C0h] [ebp-40h]
  float v37[3]; // [esp+C4h] [ebp-3Ch] BYREF
  float v38; // [esp+D0h] [ebp-30h] BYREF
  float v39; // [esp+D4h] [ebp-2Ch]
  float v40; // [esp+D8h] [ebp-28h]
  float v41; // [esp+DCh] [ebp-24h]
  float v42; // [esp+E0h] [ebp-20h]
  float v43; // [esp+E4h] [ebp-1Ch]
  int v44; // [esp+E8h] [ebp-18h]
  int v45; // [esp+ECh] [ebp-14h]
  int v46; // [esp+F0h] [ebp-10h] BYREF
  int v47; // [esp+F4h] [ebp-Ch]
  int v48; // [esp+F8h] [ebp-8h]
  int v49; // [esp+FCh] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 32) & 8) == 0 )
  {
    if ( sub_100DDA40(384) )
    {
      v4 = sub_1017A770("CreateDebris 1");
      v5 = v4;
      v47 = v4;
      if ( v4 )
      {
        sub_100F2950(v4);
        if ( !*(_DWORD *)(a1 + 48) )
          *(_DWORD *)(a1 + 48) = sub_100F29B0("effects/fire_cloud2");
        sub_100F3060(a1 + 4);
        *(float *)(v5 + 364) = 200.0;
        *(_DWORD *)(v5 + 376) |= 1u;
        *(float *)(v5 + 380) = 8.0;
        v37[0] = *(float *)(a1 + 4) + 128.0;
        v37[1] = *(float *)(a1 + 8) + 128.0;
        v37[2] = *(float *)(a1 + 12) + 128.0;
        *(float *)&v34 = *(float *)(a1 + 4) - 128.0;
        v35 = *(float *)(a1 + 8) - 128.0;
        v36 = *(float *)(a1 + 12) - 128.0;
        sub_100EC3F0(&v34, v37, 1);
        v45 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 8, 16);
        v48 = 0;
        if ( v45 > 0 )
        {
          do
          {
            v6 = sub_100F2B60(56, *(_DWORD *)(a1 + 48), a1 + 4);
            v7 = v6;
            if ( !v6 )
              break;
            *(float *)(v6 + 44) = 0.0;
            *(float *)(v6 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                    dword_10413198,
                                    0.1,
                                    0.15000001);
            v49 = sub_10115FB0();
            v41 = (double)v49 * 0.000030518509 + (double)v49 * 0.000030518509 - 1.0;
            v49 = sub_10115FB0();
            v42 = (double)v49 * 0.000030518509 + (double)v49 * 0.000030518509 - 1.0;
            v49 = sub_10115FB0();
            v41 = v41 + *(float *)(a1 + 16);
            v42 = *(float *)(a1 + 20) + v42;
            v43 = (double)v49 * 0.000030518509 + (double)v49 * 0.000030518509 - 1.0 + *(float *)(a1 + 24);
            off_103EDFEC();
            *(float *)(v7 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                    dword_10413198,
                                    2.0,
                                    16.0);
            *(float *)(v7 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                    dword_10413198,
                                    0.050000001,
                                    0.1);
            v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   1500.0,
                   2500.0);
            v9 = v41 * v8;
            v10 = v42 * v8;
            v11 = v8 * v43;
            *(float *)(v7 + 24) = v9;
            *(float *)(v7 + 28) = v10;
            v12 = v48;
            *(float *)(v7 + 32) = v11;
            *(_DWORD *)(v7 + 36) = -1;
            v48 = v12 + 1;
          }
          while ( v12 + 1 < v45 );
          v5 = v47;
        }
        *(float *)&v34 = 128.0;
        v35 = 128.0;
        v36 = 128.0;
        sub_100A42D0((int)&v46, "CreateDebris 2", a1 + 4, (int)&v34);
        if ( v46 )
        {
          (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v46 + 260) + 16))(
            v46 + 260,
            a1 + 4,
            a1 + 16,
            0.89999998,
            512.0,
            1024.0,
            800.0,
            0.5);
          v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
          v48 = 0;
          if ( v44 > 0 )
          {
            while ( 1 )
            {
              v13 = *(float *)(a1 + 20) * 16.0 + *(float *)(a1 + 8);
              v14 = 16.0 * *(float *)(a1 + 24) + *(float *)(a1 + 12);
              v38 = *(float *)(a1 + 16) * 16.0 + *(float *)(a1 + 4);
              v39 = v13;
              v40 = v14;
              v15 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -8.0);
              v38 = v15 + v38;
              v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -8.0,
                      8.0);
              v39 = v16 + v39;
              v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -8.0,
                      8.0);
              v40 = v17 + v40;
              v18 = (*(int (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)dword_10413198 + 8))(
                      dword_10413198,
                      0,
                      1,
                      &v38);
              v19 = sub_100F2B60(56, dword_1043DF00[v18], 8.0);
              v20 = v19;
              if ( !v19 )
              {
LABEL_33:
                v5 = v47;
                goto LABEL_34;
              }
              *(float *)(v19 + 48) = 0.0;
              *(float *)(v19 + 44) = 3.0;
              v41 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                           + 4))(
                      dword_10413198,
                      -1.0,
                      1.0,
                      LODWORD(a2),
                      LODWORD(a3))
                  + *(float *)(a1 + 16);
              v42 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -1.0,
                      1.0)
                  + *(float *)(a1 + 20);
              v43 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -1.0,
                      1.0)
                  + *(float *)(a1 + 24);
              *(_BYTE *)(v20 + 55) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                       dword_10413198,
                                       1,
                                       3);
              off_103EDFEC();
              v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      64.0,
                      256.0);
              v45 = 4 - *(unsigned __int8 *)(v20 + 55);
              v22 = v21 * (double)v45;
              v23 = v41;
              v24 = v43;
              if ( v41 == flt_10459240 && v42 == *(float *)&qword_10459244 && v24 == *((float *)&qword_10459244 + 1) )
                break;
              if ( *(float *)(a1 + 16) == flt_10459240 )
              {
                v25 = v42;
                if ( *(float *)(a1 + 20) == *(float *)&qword_10459244
                  && *(float *)(a1 + 24) == *((float *)&qword_10459244 + 1) )
                {
                  goto LABEL_23;
                }
              }
              else
              {
                v25 = v42;
              }
              v26 = fabs(v23 * *(float *)(a1 + 16) + *(float *)(a1 + 20) * v25 + *(float *)(a1 + 24) * v24) * 0.80000001;
LABEL_24:
              v27 = v22 * (v26 * v26 * 0.5 * 16.0);
              *(float *)(v20 + 24) = v23 * v27;
              *(float *)(v20 + 28) = v25 * v27;
              *(float *)(v20 + 32) = v27 * v24;
              a3 = 360.0;
              a2 = 0.0;
              *(float *)(v20 + 36) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
              *(float *)(v20 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                            + 4))(
                                       dword_10413198,
                                       0.0,
                                       360.0);
              v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.5,
                      1.5)
                  * 0.25;
              if ( v28 <= 1.0 )
                v29 = v28;
              else
                v29 = 1.0;
              v45 = (int)(v29 * 255.0);
              *(_BYTE *)(v20 + 52) = v45;
              if ( v28 <= 1.0 )
                v30 = v28;
              else
                v30 = 1.0;
              v45 = (int)(v30 * 255.0);
              *(_BYTE *)(v20 + 53) = v45;
              if ( v28 > 1.0 )
                v28 = 1.0;
              v31 = ++v48;
              v45 = (int)(v28 * 255.0);
              *(_BYTE *)(v20 + 54) = v45;
              if ( v31 >= v44 )
                goto LABEL_33;
            }
            v25 = v42;
LABEL_23:
            v26 = 1.0;
            goto LABEL_24;
          }
LABEL_34:
          if ( v46 )
            sub_100F2FF0(v46);
        }
        sub_100F2FF0(v5);
      }
    }
  }
}
