void __usercall sub_101A4C60(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, float *a4@<esi>)
{
  int v4; // esi
  double v5; // st7
  int v6; // edi
  int (__thiscall *v7)(int); // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // edx
  int (__thiscall *v11)(int); // eax
  float *v12; // eax
  int v13; // ecx
  double v14; // st6
  double v15; // st7
  float *v16; // eax
  float *v17; // esi
  char v18; // al
  char v19; // al
  _DWORD *v20; // ecx
  int v21; // esi
  float *v22; // eax
  int v23; // esi
  int v24; // eax
  float *v25; // eax
  float *v26; // esi
  char v27; // al
  _DWORD *v28; // ecx
  long double v29; // st7
  long double v30; // st6
  long double v31; // st4
  long double v32; // st2
  float *v33; // eax
  int v34; // edx
  double v35; // st7
  int (__thiscall *v36)(int); // eax
  float *v37; // eax
  int v38; // esi
  int v39; // eax
  float *v40; // eax
  float *v41; // esi
  double v42; // st7
  double v43; // st4
  double v44; // st6
  double v45; // st7
  float *v46; // [esp+70h] [ebp-140h]
  float v49[22]; // [esp+84h] [ebp-12Ch] BYREF
  float v50[3]; // [esp+DCh] [ebp-D4h] BYREF
  float v51[20]; // [esp+E8h] [ebp-C8h] BYREF
  _DWORD v52[3]; // [esp+138h] [ebp-78h] BYREF
  float v53; // [esp+144h] [ebp-6Ch]
  float v54; // [esp+148h] [ebp-68h]
  float v55[3]; // [esp+150h] [ebp-60h] BYREF
  float v56; // [esp+15Ch] [ebp-54h]
  float v57; // [esp+160h] [ebp-50h]
  float v58; // [esp+164h] [ebp-4Ch]
  float v59; // [esp+168h] [ebp-48h]
  float v60; // [esp+16Ch] [ebp-44h]
  float v61; // [esp+170h] [ebp-40h]
  float v62; // [esp+174h] [ebp-3Ch]
  float v63; // [esp+178h] [ebp-38h]
  float v64; // [esp+17Ch] [ebp-34h] BYREF
  float v65; // [esp+180h] [ebp-30h]
  float v66; // [esp+184h] [ebp-2Ch]
  float v67; // [esp+188h] [ebp-28h]
  float v68; // [esp+18Ch] [ebp-24h]
  float v69; // [esp+190h] [ebp-20h]
  _DWORD *v70; // [esp+194h] [ebp-1Ch]
  int v71; // [esp+198h] [ebp-18h]
  int v72; // [esp+19Ch] [ebp-14h]
  int i; // [esp+1A0h] [ebp-10h]
  int v74; // [esp+1A4h] [ebp-Ch]
  void *v75; // [esp+1A8h] [ebp-8h]
  void *retaddr; // [esp+1B0h] [ebp+0h]

  v74 = a2;
  v75 = retaddr;
  v4 = (int)a1;
  v70 = a1;
  if ( sub_101A4BB0(a1) )
  {
    v5 = *((float *)off_103DC81C + 4);
    while ( v5 >= *(float *)(v4 + 96) )
    {
      v6 = v4 + 4;
      v63 = v5 - *(float *)(v4 + 96);
      *(float *)(v4 + 96) = *(float *)(v4 + 92);
      v7 = *(int (__thiscall **)(int))(*(_DWORD *)(v4 + 4) + 4);
      i = *(_DWORD *)(v4 + 88);
      v8 = (float *)v7(v4 + 4);
      sub_100F0D40((float *)i, v8);
      i = sub_10115FB0();
      v60 = (double)i * 0.000030518509 * 512.0 - 256.0;
      i = sub_10115FB0();
      v61 = (double)i * 0.000030518509 * 512.0 - 256.0;
      v9 = (float *)sub_10115FB0();
      v10 = *(_DWORD *)(v4 + 4);
      i = (int)v9;
      v11 = *(int (__thiscall **)(int))(v10 + 4);
      v62 = (double)i * 0.000030518509 * 512.0 - 256.0;
      v12 = (float *)v11(v4 + 4);
      v13 = *(_DWORD *)(v4 + 88);
      v14 = v12[1] + v61;
      v15 = v12[2] + v62;
      v64 = v60 + *v12;
      v65 = v14;
      v66 = v15;
      v16 = sub_100F2B60(v13, v4, 60, dword_1043DF00[0], &v64);
      v17 = v16;
      if ( !v16 )
        return;
      v16[6] = 0.0;
      v16[7] = 0.0;
      v16[8] = 8.0;
      v16[10] = 0.5;
      v16[11] = 0.0;
      i = sub_100EB330(0, 360);
      v17[9] = (float)i;
      v17[14] = 1.0;
      i = (int)((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 128.0,
                 200.0);
      v18 = i;
      *((_BYTE *)v17 + 48) = i;
      *((_BYTE *)v17 + 49) = v18;
      *((_BYTE *)v17 + 50) = v18;
      *((_BYTE *)v17 + 51) = v18;
      *((_BYTE *)v17 + 52) = v18;
      v19 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 1, 4);
      v20 = v70;
      *((_BYTE *)v17 + 53) = v19;
      *((_BYTE *)v17 + 54) = 0;
      v21 = v20[21];
      v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
      sub_100F3060(v21, v22);
      v23 = v70[21];
      v46 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
      v24 = sub_100F29B0(v23, v6, v23, "effects/strider_muzzle");
      v25 = sub_100F2B60(v23, v23, 60, v24, v46);
      v26 = v25;
      if ( !v25 )
        return;
      v25[6] = flt_10459240;
      *(_QWORD *)(v25 + 7) = qword_10459244;
      v25[10] = 0.2;
      v25[11] = 0.0;
      i = sub_100EB330(0, 360);
      v26[9] = (float)i;
      v26[14] = 4.0;
      i = (int)(double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 200);
      v27 = i;
      *((_BYTE *)v26 + 51) = 0;
      v28 = v70;
      *((_BYTE *)v26 + 48) = v27;
      *((_BYTE *)v26 + 49) = v27;
      *((_BYTE *)v26 + 50) = v27;
      *((_BYTE *)v26 + 52) = v27;
      *(_WORD *)((char *)v26 + 53) = 255;
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v28[21] + 48))(0.0);
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 5) != 1 )
        return;
      v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.0,
              359.0);
      for ( i = 0; i < 8; ++i )
      {
        v29 = ((double)i * 0.125 * 360.0 + v59) * 0.017453292;
        v30 = cos(v29);
        v32 = sin(v29);
        v31 = 0.0 * v32;
        v67 = v30 * 0.0 + v32;
        v68 = v30 + v31;
        v69 = v30 * 0.0 + v31;
        off_103EDFEC();
        v33 = (float *)(*(int (__thiscall **)(int, int, float *))(*(_DWORD *)v6 + 4))(v6, a3, a4);
        v34 = *(_DWORD *)v6;
        v55[0] = *v33;
        v55[1] = v33[1];
        v35 = v33[2];
        v36 = *(int (__thiscall **)(int))(v34 + 4);
        v55[2] = v35 - 1024.0;
        v37 = (float *)v36(v6);
        sub_1000E430(v49, v37, v55);
        sub_1012D400(v52, 0, 0);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
          dword_104131A0,
          v49,
          16395,
          v52,
          v50);
        if ( *(_DWORD *)(dword_10439134 + 48) )
          sub_10130AC0(v50, v51, 255, 0, 0, 1, 5.0);
        v56 = v67 * 512.0;
        v57 = v68 * 512.0;
        v58 = 512.0 * v69;
        v72 = sub_10115FB0();
        v53 = (double)v72 * 0.000030518509 * 8.0 - 4.0;
        v72 = sub_10115FB0();
        v54 = (double)v72 * 0.000030518509 * 8.0 - 4.0;
        v72 = sub_10115FB0();
        v38 = v70[21];
        a4 = &v64;
        a3 = 1;
        v64 = v51[0] + v53 + v56;
        v65 = v51[1] + v54 + v57;
        v66 = (double)v72 * 0.000030518509 * 8.0 - 4.0 + v51[2] + v58;
        v39 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        v40 = sub_100F2B60(v38, v38, 60, dword_1043DF20[v39], 0);
        v41 = v40;
        if ( v40 )
        {
          v40[11] = 0.0;
          v40[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.25,
                      0.5);
          v42 = -((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                   dword_10413198,
                   1000.0,
                   1500.0);
          v43 = v69;
          v44 = v68 * v42;
          v41[6] = v67 * v42;
          v41[7] = v44;
          v41[8] = v42 * v43;
          v41[8] = v41[8] + 128.0;
          *((_WORD *)v41 + 24) = 19545;
          *((_BYTE *)v41 + 50) = 63;
          *((_BYTE *)v41 + 53) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                                   dword_10413198,
                                   32,
                                   128);
          *((_BYTE *)v41 + 54) = -56;
          v45 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  16.0,
                  64.0);
          *((_BYTE *)v41 + 52) = 0;
          v71 = (int)v45;
          *((_BYTE *)v41 + 51) = (int)v45;
          v71 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
          v41[9] = (float)v71;
          v41[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -16.0,
                      16.0);
        }
      }
      v5 = v63;
      v4 = (int)v70;
    }
    *(float *)(v4 + 96) = *(float *)(v4 + 96) - v5;
  }
}
