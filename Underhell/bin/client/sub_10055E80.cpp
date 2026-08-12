void __usercall sub_10055E80(int a1@<ecx>, int a2@<ebp>)
{
  double v3; // st7
  int (__thiscall *v4)(int); // edx
  float *v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // eax
  int v11; // edi
  float *v12; // eax
  char v13; // al
  double v14; // st7
  char v15; // al
  double v16; // st7
  float v17; // eax
  double v18; // st7
  double v19; // st4
  double v20; // st5
  double v21; // st1
  double v22; // st7
  double v23; // st6
  float v24; // [esp+24h] [ebp-120h]
  float v25; // [esp+24h] [ebp-120h]
  _BYTE v26[12]; // [esp+30h] [ebp-114h] BYREF
  float v27[20]; // [esp+3Ch] [ebp-108h] BYREF
  int v28; // [esp+8Ch] [ebp-B8h] BYREF
  float v29[16]; // [esp+98h] [ebp-ACh] BYREF
  char v30; // [esp+D8h] [ebp-6Ch]
  bool v31; // [esp+D9h] [ebp-6Bh]
  float v32[3]; // [esp+F0h] [ebp-54h] BYREF
  float v33; // [esp+FCh] [ebp-48h]
  float v34; // [esp+100h] [ebp-44h]
  float v35; // [esp+104h] [ebp-40h]
  float v36; // [esp+108h] [ebp-3Ch]
  float v37; // [esp+10Ch] [ebp-38h]
  float v38; // [esp+110h] [ebp-34h]
  float v39; // [esp+114h] [ebp-30h] BYREF
  float v40; // [esp+118h] [ebp-2Ch]
  float v41; // [esp+11Ch] [ebp-28h]
  float *v42; // [esp+120h] [ebp-24h]
  int i; // [esp+124h] [ebp-20h]
  int v44; // [esp+128h] [ebp-1Ch]
  int v45; // [esp+12Ch] [ebp-18h]
  float v46; // [esp+130h] [ebp-14h]
  int v47; // [esp+134h] [ebp-10h]
  int v48; // [esp+138h] [ebp-Ch]
  void *v49; // [esp+13Ch] [ebp-8h]
  void *retaddr; // [esp+144h] [ebp+0h]

  v48 = a2;
  v49 = retaddr;
  v45 = 0;
  if ( *(int *)(a1 + 1740) > 0 )
  {
    v3 = 2.0;
    do
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 1744); ++i )
      {
        v44 = 0;
        if ( *(int *)(a1 + 1748) > 0 )
        {
          v37 = (float)v45;
          v38 = (float)i;
          do
          {
            v4 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 260);
            v33 = v37 * *(float *)(a1 + 1752) * v3 + *(float *)(a1 + 1752);
            v34 = v38 * *(float *)(a1 + 1752) * v3 + *(float *)(a1 + 1752);
            v35 = v3 * ((double)v44 * *(float *)(a1 + 1752)) + *(float *)(a1 + 1752);
            v5 = (float *)v4(a1);
            v6 = *(_DWORD *)(a1 + 1736);
            v7 = *v5 + v33;
            v8 = v5[1] + v34;
            v9 = v5[2];
            v10 = v44 * *(_DWORD *)(a1 + 1744);
            v39 = v7;
            v40 = v8;
            v41 = v9 + v35;
            v11 = v6 + 24 * (v45 + *(_DWORD *)(a1 + 1740) * (i + v10));
            if ( v11 )
            {
              if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, &v39, 0) & 1) != 0 )
              {
                *(_DWORD *)v11 = 0;
              }
              else
              {
                v12 = (float *)sub_100F06D0(44, *(_DWORD *)(a1 + 1732));
                v42 = v12;
                if ( v12 )
                {
                  v12[3] = v39;
                  v12[4] = v40;
                  v12[5] = v41;
                  *((_BYTE *)v42 + 36) = sub_10115FB0();
                  v47 = sub_10115FB0();
                  v42[6] = (double)v47 * 0.000030518509 + (double)v47 * 0.000030518509 - 1.0;
                  v36 = -*(float *)(a1 + 1704);
                  v46 = *(float *)(a1 + 1704);
                  v47 = sub_10115FB0();
                  v42[7] = v36 + (v46 - v36) * ((double)v47 * 0.000030518509);
                }
                (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(
                  dword_1041315C,
                  v32,
                  &v39,
                  1);
                v13 = sub_101F2960(v32[0]);
                v14 = v32[1];
                *(_BYTE *)(v11 + 20) = v13;
                v24 = v14;
                v15 = sub_101F2960(v24);
                v16 = v32[2];
                *(_BYTE *)(v11 + 21) = v15;
                v25 = v16;
                *(_BYTE *)(v11 + 22) = sub_101F2960(v25);
                v17 = COERCE_FLOAT(&unk_103DB1E0);
                *(float *)(v11 + 16) = 1.0;
                v18 = 0.0;
                v46 = COERCE_FLOAT(&unk_103DB1E0);
                v47 = 6;
                while ( 1 )
                {
                  v19 = *(float *)(LODWORD(v17) - 4) * 100.0 + v40;
                  v20 = 100.0 * *(float *)LODWORD(v17) + v41;
                  v21 = *(float *)(LODWORD(v17) - 8) * 100.0 + v39 - v39;
                  v29[4] = v21;
                  v29[5] = v19 - v40;
                  v29[6] = v20 - v41;
                  v31 = v18 != (v20 - v41) * (v20 - v41) + v21 * v21 + (v19 - v40) * (v19 - v40);
                  v29[14] = v18;
                  v29[13] = v18;
                  v29[12] = v18;
                  v30 = 1;
                  v29[10] = v18;
                  v29[9] = v18;
                  v29[8] = v18;
                  v29[0] = v39;
                  v29[1] = v40;
                  v29[2] = v41;
                  sub_1012D400(0, 0);
                  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
                    dword_104131A0,
                    v29,
                    16395,
                    &v28,
                    v26);
                  if ( *(_DWORD *)(dword_10439134 + 48) )
                    sub_10130AC0((int)v26, (int)v27, 255, 0, 0, 1, 5.0);
                  if ( v27[8] >= 1.0 )
                  {
                    v18 = 0.0;
                  }
                  else
                  {
                    v22 = v27[4] * v40 + v27[3] * v39 + v27[5] * v41 - v27[6];
                    if ( v22 >= 0.0 )
                    {
                      if ( *(float *)(a1 + 1724) <= v22 )
                      {
                        v18 = 0.0;
                      }
                      else
                      {
                        v23 = v22;
                        v18 = 0.0;
                        *(float *)(v11 + 16) = v23
                                             / *(float *)(a1 + 1724)
                                             * (v23
                                              / *(float *)(a1 + 1724)
                                              * (v23
                                               / *(float *)(a1 + 1724)))
                                             * *(float *)(v11 + 16);
                      }
                    }
                    else
                    {
                      v18 = 0.0;
                      *(float *)(v11 + 16) = 0.0;
                    }
                  }
                  LODWORD(v46) += 12;
                  if ( !--v47 )
                    break;
                  v17 = v46;
                }
                *(_DWORD *)v11 = v42;
                *(_DWORD *)(v11 + 4) = -1;
              }
            }
            v3 = 2.0;
            ++v44;
          }
          while ( v44 < *(_DWORD *)(a1 + 1748) );
        }
      }
      ++v45;
    }
    while ( v45 < *(_DWORD *)(a1 + 1740) );
  }
}
