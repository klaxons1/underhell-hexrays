// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10197800(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float *v5; // eax
  int (__thiscall *v6)(_DWORD *); // edx
  float *v7; // eax
  double v8; // st7
  float *v9; // eax
  int *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  double (__thiscall *v16)(int); // eax
  double (__thiscall *v17)(int, _DWORD); // edx
  long double v18; // st7
  float *v19; // eax
  float *v20; // eax
  double v21; // st7
  int v22; // esi
  double v23; // st6
  double v24; // st5
  int v25; // eax
  float *v26; // eax
  float *v27; // esi
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st7
  char v32; // al
  double v33; // st7
  double v34; // st7
  float v35; // [esp+80h] [ebp-130h]
  float v37[23]; // [esp+94h] [ebp-11Ch] BYREF
  float v38[3]; // [esp+F0h] [ebp-C0h] BYREF
  float v39[3]; // [esp+FCh] [ebp-B4h] BYREF
  float v40; // [esp+108h] [ebp-A8h] BYREF
  float v41; // [esp+10Ch] [ebp-A4h]
  float v42; // [esp+110h] [ebp-A0h]
  float v43[5]; // [esp+114h] [ebp-9Ch] BYREF
  float v44; // [esp+128h] [ebp-88h]
  char v45; // [esp+12Ch] [ebp-84h]
  char v46; // [esp+132h] [ebp-7Eh]
  char v47; // [esp+133h] [ebp-7Dh]
  char v48; // [esp+13Eh] [ebp-72h]
  float *v49; // [esp+154h] [ebp-5Ch]
  float *v50; // [esp+158h] [ebp-58h]
  float v51; // [esp+15Ch] [ebp-54h] BYREF
  float v52; // [esp+160h] [ebp-50h]
  float v53; // [esp+164h] [ebp-4Ch]
  int *v54; // [esp+168h] [ebp-48h]
  float v55; // [esp+16Ch] [ebp-44h]
  float v56; // [esp+170h] [ebp-40h] BYREF
  float v57; // [esp+174h] [ebp-3Ch] BYREF
  float v58; // [esp+178h] [ebp-38h]
  float v59; // [esp+17Ch] [ebp-34h]
  float v60; // [esp+180h] [ebp-30h] BYREF
  float v61; // [esp+184h] [ebp-2Ch]
  float v62; // [esp+188h] [ebp-28h]
  float v63; // [esp+18Ch] [ebp-24h] BYREF
  float v64; // [esp+190h] [ebp-20h]
  int v65; // [esp+194h] [ebp-1Ch]
  int v66; // [esp+198h] [ebp-18h]
  float *v67; // [esp+19Ch] [ebp-14h]
  int v68; // [esp+1A0h] [ebp-10h]
  int v69; // [esp+1A4h] [ebp-Ch]
  void *v70; // [esp+1A8h] [ebp-8h]
  void *retaddr; // [esp+1B0h] [ebp+0h]

  v69 = a2;
  v70 = retaddr;
  v35 = *((float *)off_103DC81C + 3) + 0.1;
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*(a1 - 3) + 408))(a1 - 3, LODWORD(v35), a3, a4);
  v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*(a1 - 3) + 36))(a1 - 3);
  v51 = *v5;
  v52 = v5[1];
  v6 = *(int (__thiscall **)(_DWORD *))(*(a1 - 3) + 36);
  v53 = v5[2] - 1024.0;
  v7 = (float *)v6(a1 - 3);
  sub_1000E430(v37, v7, &v51);
  sub_1012D400(v38, 0, 0);
  (*(void (__thiscall **)(int, float *, int, float *, float *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v37,
    16443,
    v38,
    v39);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v39, &v40, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v44 && !v47 && !v46 && (v48 & 4) == 0 )
  {
    v63 = v44 * 1024.0;
    v55 = sub_100260E0(v63, 512.0, 1024.0, 1.0, 0.0);
    if ( (v45 & 0x20) != 0 )
    {
      v63 = 0.80000001;
      v64 = 0.80000001;
      v8 = 0.75;
    }
    else if ( (v45 & 0x10) != 0 )
    {
      v63 = 0.60000002;
      v64 = 0.5;
      v8 = 0.15000001;
    }
    else
    {
      v63 = 0.34999999;
      v64 = 0.30000001;
      v8 = 0.25;
    }
    *(float *)&v65 = v8;
    sub_10197690((float **)a1 - 3);
    v66 = a1[298];
    if ( *(float *)&v66 != 0.0 )
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*(a1 - 3) + 36))(a1 - 3, v68);
      sub_100F3060(v66, v9);
      if ( (v45 & 0x30) != 0 )
      {
        v10 = a1 + 296;
        if ( !a1[296] )
        {
          v11 = sub_100F29B0(a1[298], (int)a1, (int)v10, "effects/splash1");
          v12 = a1[298];
          *(float *)&v68 = COERCE_FLOAT("effects/splash2");
          *v10 = v11;
          a1[297] = sub_100F29B0(v12, (int)a1, (int)v10, (const char *)v68);
        }
        v54 = a1 + 296;
      }
      else
      {
        v54 = dword_1043DF20;
      }
      if ( (v45 & 0x30) != 0 )
      {
        *(float *)&v66 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                           dword_10413198,
                           7.5,
                           8.5);
        if ( v44 < 1.0 )
        {
          v68 = 3;
          v67 = (float *)"effects/splashwake3";
          v66 = v13;
          v51 = v43[0] * 0.5 + v40;
          v52 = v43[1] * 0.5 + v41;
          v53 = 0.5 * v43[2] + v42;
          v14 = *(_DWORD *)dword_10413198;
          *(float *)&v66 = 0.2;
          *(float *)&v65 = COERCE_FLOAT(&v63);
          v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v14 + 4))(dword_10413198, -2.0, 2.0);
          v16 = *(double (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 4);
          *(float *)&v66 = v15;
          *(float *)&v65 = 360.0;
          v64 = 0.0;
          v63 = v16(dword_10413198);
          v60 = 0.75 * v55;
          v58 = 128.0 * *(float *)&v66;
          v57 = *(float *)&v66 * 64.0;
          sub_1008DCF0(
            &v51,
            v43,
            v57,
            v58,
            0.80000001,
            v60,
            0.0,
            0.75,
            v63,
            v64,
            (float *)v65,
            *(float *)&v66,
            (int)v67,
            v68);
        }
      }
      v17 = *(double (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      *(float *)&v68 = 6.2831855;
      v59 = v17(dword_10413198, 0.0);
      v49 = &v56;
      v50 = &v57;
      v66 = 32;
      do
      {
        v18 = sin(v59);
        v19 = v50;
        *v49 = cos(v59);
        *v19 = v18;
        v59 = v59 + 0.19634955;
        v60 = v56 * 128.0;
        v61 = v57 * 128.0;
        v62 = 128.0 * v58;
        v20 = sub_10042010(v38, -4.0, 4.0);
        v21 = *v20 + v40;
        v22 = a1[298];
        v23 = v20[1] + v41;
        v24 = v20[2] + v42;
        v67 = &v60;
        v66 = 1;
        *(float *)&v65 = 0.0;
        v60 = v21 + v60;
        v61 = v23 + v61;
        v62 = v24 + v62;
        v25 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
        v26 = sub_100F2B60(v22, v22, 60, v54[v25], v67);
        v27 = v26;
        if ( v26 )
        {
          v26[11] = 0.0;
          v26[10] = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      0.25,
                      1.0,
                      v68);
          v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1000.0,
                  1500.0);
          v29 = v56 * v28;
          v30 = v57 * v28;
          v31 = v28 * v58;
          v27[6] = v29;
          v27[7] = v30;
          v27[8] = v31;
          if ( (v45 & 0x10) != 0 )
          {
            v63 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.40000001,
                    0.60000002);
            v64 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.30000001,
                    0.5);
            *(float *)&v65 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               0.1,
                               0.2);
          }
          v68 = 64;
          v67 = (float *)(int)(v63 * 255.0);
          *((_BYTE *)v27 + 48) = (_BYTE)v67;
          *((_BYTE *)v27 + 49) = (int)(v64 * 255.0);
          v67 = (float *)(int)(255.0 * *(float *)&v65);
          *((_BYTE *)v27 + 50) = (_BYTE)v67;
          v32 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, v67);
          *((_BYTE *)v27 + 53) = v32;
          *((_BYTE *)v27 + 54) = 4 * v32;
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  16.0,
                  32.0);
          v34 = v33 * v55;
          *((_BYTE *)v27 + 52) = 0;
          *(float *)&v66 = 0.0;
          v67 = (float *)(int)v34;
          *((_BYTE *)v27 + 51) = (int)v34;
          v67 = (float *)(*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_10413198 + 8))(
                           dword_10413198,
                           v66,
                           v67);
          v27[9] = (float)(int)v67;
          v27[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                      dword_10413198,
                      -16.0,
                      16.0);
        }
        --v66;
      }
      while ( *(float *)&v66 != 0.0 );
    }
  }
}
