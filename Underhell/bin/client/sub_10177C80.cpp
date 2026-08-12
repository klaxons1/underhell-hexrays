// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10177C80@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        float *a8)
{
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int (__thiscall *v11)(_DWORD *); // edx
  float *v12; // eax
  int (__thiscall *v13)(_DWORD *); // edx
  float *v14; // eax
  void (__thiscall *v15)(int, float *, int); // edx
  double v16; // st7
  int v17; // edi
  int v18; // eax
  int v19; // edi
  float *v20; // eax
  int v21; // edx
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st6
  double v26; // st5
  double v27; // st7
  int result; // eax
  double v29; // st7
  float v30[22]; // [esp+54h] [ebp-17Ch] BYREF
  float v31[3]; // [esp+ACh] [ebp-124h] BYREF
  float v32; // [esp+B8h] [ebp-118h] BYREF
  __int64 v33; // [esp+BCh] [ebp-114h]
  float v34; // [esp+D8h] [ebp-F8h]
  float v35[3]; // [esp+108h] [ebp-C8h] BYREF
  int v36; // [esp+114h] [ebp-BCh] BYREF
  _DWORD *v37; // [esp+118h] [ebp-B8h]
  int v38; // [esp+11Ch] [ebp-B4h]
  _DWORD *v39; // [esp+120h] [ebp-B0h]
  int v40; // [esp+124h] [ebp-ACh]
  float v41; // [esp+128h] [ebp-A8h]
  __int64 v42; // [esp+12Ch] [ebp-A4h]
  float v43; // [esp+134h] [ebp-9Ch]
  __int64 v44; // [esp+138h] [ebp-98h]
  int v45; // [esp+140h] [ebp-90h]
  const char *v46; // [esp+144h] [ebp-8Ch]
  int v47; // [esp+148h] [ebp-88h]
  int v48; // [esp+14Ch] [ebp-84h]
  float v49; // [esp+150h] [ebp-80h]
  float v50; // [esp+154h] [ebp-7Ch]
  float v51; // [esp+158h] [ebp-78h]
  float v52; // [esp+15Ch] [ebp-74h]
  float v53; // [esp+160h] [ebp-70h]
  float v54; // [esp+164h] [ebp-6Ch]
  float v55; // [esp+168h] [ebp-68h]
  float v56; // [esp+16Ch] [ebp-64h]
  int v57; // [esp+170h] [ebp-60h]
  float v58; // [esp+174h] [ebp-5Ch]
  float v59; // [esp+178h] [ebp-58h]
  float v60; // [esp+17Ch] [ebp-54h]
  float v61; // [esp+180h] [ebp-50h]
  char v62; // [esp+184h] [ebp-4Ch]
  int v63; // [esp+188h] [ebp-48h]
  int v64; // [esp+18Ch] [ebp-44h]
  float v65; // [esp+1A8h] [ebp-28h]
  float v66; // [esp+1ACh] [ebp-24h]
  float v67; // [esp+1B0h] [ebp-20h]
  float v68; // [esp+1B4h] [ebp-1Ch] BYREF
  float v69; // [esp+1B8h] [ebp-18h]
  float v70; // [esp+1BCh] [ebp-14h]
  float *v71; // [esp+1C0h] [ebp-10h]
  int v72; // [esp+1C4h] [ebp-Ch]
  void *v73; // [esp+1C8h] [ebp-8h]
  void *retaddr; // [esp+1D0h] [ebp+0h]

  v72 = a1;
  v73 = retaddr;
  v41 = flt_10459240;
  v42 = qword_10459244;
  v44 = qword_10459244;
  v63 = -1;
  v48 = 0;
  v43 = flt_10459240;
  v45 = -1;
  v47 = -1;
  v62 = 1;
  v64 = 0;
  v49 = 8.0;
  v36 = 9;
  v46 = "sprites/lgtning.vmt";
  v50 = 0.0099999998;
  v51 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          3.0,
          6.0,
          a2,
          a3);
  v52 = 0.0;
  v53 = 0.0;
  v71 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
  v57 = 0;
  v54 = (float)(int)v71;
  v40 = a6;
  v55 = 255.0;
  v38 = a5;
  v56 = 32.0;
  v63 = 32;
  v62 = 1;
  v58 = 30.0;
  v64 = 1024;
  v8 = *a8;
  v37 = a4;
  v39 = a4;
  v71 = (float *)&v36;
  v59 = v8 * 255.0;
  v60 = a8[1] * 255.0;
  v61 = 255.0 * a8[2];
  (*((void (__thiscall **)(void ***, int *))*off_103E773C[0] + 10))(off_103E773C[0], &v36);
  v9 = sub_10115FB0();
  v68 = (double)v9 * 0.000030518509 + (double)v9 * 0.000030518509 - 1.0;
  v10 = sub_10115FB0();
  v69 = (double)v10 * 0.000030518509 + (double)v10 * 0.000030518509 - 1.0;
  v71 = (float *)sub_10115FB0();
  v65 = v68;
  v66 = v69;
  v67 = (double)(int)v71 * 0.000030518509 + (double)(int)v71 * 0.000030518509 - 1.0;
  off_103EDFEC();
  v11 = *(int (__thiscall **)(_DWORD *))(*a4 + 268);
  v68 = v65 * 100.0;
  v69 = v66 * 100.0;
  v70 = 100.0 * v67;
  v12 = (float *)v11(a4);
  v35[0] = *v12 + v68;
  v35[1] = v12[1] + v69;
  v13 = *(int (__thiscall **)(_DWORD *))(*a4 + 268);
  v35[2] = v12[2] + v70;
  v14 = (float *)v13(a4);
  sub_1000E430(v30, v14, v35);
  sub_1012D400(&v68, (int)a4, 0);
  v15 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_104131A0 + 16);
  v71 = v31;
  v70 = COERCE_FLOAT(&v68);
  v15(dword_104131A0, v30, 16395);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v31, &v32, 255, 0, 0, 1, 5.0);
  if ( v34 < 1.0 )
  {
    v41 = flt_10459240;
    v36 = 9;
    *(float *)&v42 = *(float *)&qword_10459244;
    v46 = "sprites/lgtning.vmt";
    *((float *)&v42 + 1) = *((float *)&qword_10459244 + 1);
    v43 = v32;
    v44 = v33;
    v49 = 8.0;
    v50 = 0.050000001;
    v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            2.0,
            6.0);
    v52 = 0.0;
    v53 = 0.0;
    v71 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
    v57 = 0;
    v54 = (float)(int)v71;
    v39 = 0;
    v55 = 255.0;
    v38 = a5;
    v63 = 32;
    v56 = 32.0;
    v62 = 1;
    v37 = a4;
    v58 = 30.0;
    v16 = *a8;
    v71 = (float *)&v36;
    v59 = v16 * 255.0;
    v60 = a8[1] * 255.0;
    v61 = 255.0 * a8[2];
    (*((void (__thiscall **)(void ***, int *))*off_103E773C[0] + 10))(off_103E773C[0], &v36);
  }
  v17 = *(_DWORD *)dword_10413164;
  v18 = (*(int (__thiscall **)(_DWORD *))(a4[2] + 36))(a4 + 2);
  v19 = (*(int (__thiscall **)(int, int))(v17 + 20))(dword_10413164, v18 + 0x10000000);
  v20 = sub_10042010(v35, -32.0, 32.0);
  v21 = *a4;
  v71 = v20;
  v22 = (float *)(*(int (__thiscall **)(_DWORD *))(v21 + 268))(a4);
  v23 = *v22 + *v71;
  LODWORD(v70) = 128;
  v24 = v71[1];
  LODWORD(v69) = 32;
  v25 = v24 + v22[1];
  v26 = v23;
  v27 = v71[2] + v22[2];
  *(float *)(v19 + 4) = v26;
  *(float *)(v19 + 8) = v25;
  *(float *)(v19 + 12) = v27;
  *(_DWORD *)(v19 + 20) = 83880939;
  result = (*(int (__thiscall **)(int, float, float))(*(_DWORD *)dword_10413198 + 8))(
             dword_10413198,
             COERCE_FLOAT(LODWORD(v69)),
             COERCE_FLOAT(LODWORD(v70)));
  v71 = (float *)result;
  v29 = (double)result;
  *(float *)(v19 + 16) = v29;
  *(float *)(v19 + 28) = v29 * 10.0;
  *(float *)(v19 + 24) = *((float *)off_103DC81C + 3) + 0.1;
  return result;
}
