int __stdcall sub_10084100(int a1, float *a2, float *a3)
{
  int v4; // eax
  int (__thiscall *v5)(int); // edx
  float *v6; // eax
  double v7; // st7
  double v8; // st1
  double v9; // st3
  double v10; // st2
  double v11; // st1
  double v12; // st5
  double v13; // rtt
  double v14; // st1
  double v15; // st2
  double v16; // rt2
  double v17; // st2
  double v18; // st3
  double v19; // st5
  double v20; // st6
  double v21; // st5
  double v22; // rtt
  double v23; // st5
  double v24; // st5
  double v25; // st3
  double v26; // st1
  double v27; // st6
  double v28; // st1
  double v29; // st7
  double v30; // st7
  int v31; // eax
  int v32; // eax
  int v33; // esi
  int v34; // eax
  float v36; // [esp+164h] [ebp-60h] BYREF
  float v37; // [esp+168h] [ebp-5Ch]
  float v38; // [esp+16Ch] [ebp-58h]
  float v39; // [esp+170h] [ebp-54h] BYREF
  float v40; // [esp+174h] [ebp-50h]
  float v41; // [esp+178h] [ebp-4Ch]
  float v42; // [esp+17Ch] [ebp-48h] BYREF
  float v43; // [esp+180h] [ebp-44h]
  float v44; // [esp+184h] [ebp-40h]
  float v45; // [esp+188h] [ebp-3Ch] BYREF
  float v46; // [esp+18Ch] [ebp-38h]
  float v47; // [esp+190h] [ebp-34h]
  float v48; // [esp+194h] [ebp-30h] BYREF
  float v49; // [esp+198h] [ebp-2Ch]
  float v50; // [esp+19Ch] [ebp-28h]
  float v51; // [esp+1A0h] [ebp-24h]
  float v52; // [esp+1A4h] [ebp-20h]
  float v53; // [esp+1A8h] [ebp-1Ch]
  float v54; // [esp+1ACh] [ebp-18h] BYREF
  float v55; // [esp+1B0h] [ebp-14h]
  float v56; // [esp+1B4h] [ebp-10h]
  float v57; // [esp+1B8h] [ebp-Ch] BYREF
  float v58; // [esp+1BCh] [ebp-8h]
  float v59; // [esp+1C0h] [ebp-4h]
  float v60; // [esp+1CCh] [ebp+8h]
  float v61; // [esp+1D4h] [ebp+10h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  sub_101EE040(v4, &v36, &v39, &v42);
  v39 = v39 * -1.0;
  v40 = v40 * -1.0;
  v41 = -1.0 * v41;
  v51 = *a3 - *a2;
  v52 = a3[1] - a2[1];
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 4);
  v53 = a3[2] - a2[2];
  v6 = (float *)v5(a1);
  v7 = *a2;
  v45 = *v6;
  v46 = v6[1];
  v47 = v6[2];
  v8 = a2[1];
  v9 = v37 * v7 + v46 + v40 * v8;
  v10 = v7 * v38 + v47 + v8 * v41;
  v11 = v36 * v7 + v45 + v39 * v8 + v42 * a2[2];
  v12 = a2[2];
  v54 = v11;
  v13 = v11;
  v14 = v9 + v43 * v12;
  v55 = v14;
  v15 = v10 + v12 * v44;
  v56 = v15;
  v16 = v15;
  v17 = v13 + v36 * v51;
  v57 = v17;
  v18 = v14 + v37 * v51;
  v58 = v18;
  v19 = v16 + v51 * v38;
  v59 = v19;
  v48 = v17 + v42 * v53;
  v49 = v18 + v43 * v53;
  v50 = v19 + v53 * v44;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    &v48,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v20 = v39 * v52 + v54;
  v57 = v20;
  v21 = v40 * v52 + v55;
  v58 = v21;
  v22 = v21;
  v23 = v52 * v41 + v56;
  v59 = v23;
  v48 = v20 + v42 * v53;
  v49 = v22 + v43 * v53;
  v50 = v23 + v53 * v44;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  (*(void (__stdcall **)(float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    &v48,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v57 = v42 * v53 + v54;
  v58 = v43 * v53 + v55;
  v59 = v53 * v44 + v56;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v54 = v57;
  v55 = v58;
  v56 = v59;
  v57 = v57 + v36 * v51;
  v58 = v58 + v37 * v51;
  v59 = v51 * v38 + v59;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v57 = v39 * v52 + v54;
  v58 = v40 * v52 + v55;
  v59 = v52 * v41 + v56;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v24 = v36 * v51 + v57;
  v54 = v24;
  v25 = v37 * v51 + v58;
  v55 = v25;
  v26 = v38 * v51 + v59;
  v56 = v26;
  v27 = v26;
  v28 = -v51;
  v60 = v28;
  v57 = v24 + v36 * v28;
  v58 = v37 * v28 + v25;
  v59 = v28 * v38 + v27;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v29 = -v52;
  v61 = v29;
  v57 = v39 * v29 + v54;
  v58 = v40 * v29 + v55;
  v59 = v29 * v41 + v56;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v30 = -v53;
  v57 = v42 * v30 + v54;
  v58 = v43 * v30 + v55;
  v59 = v30 * v44 + v56;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v54 = v57;
  v55 = v58;
  v56 = v59;
  v57 = v57 + v36 * v60;
  v58 = v58 + v60 * v37;
  v59 = v59 + v60 * v38;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v57 = v39 * v61 + v54;
  v58 = v40 * v61 + v55;
  v59 = v61 * v41 + v56;
  (*(void (__thiscall **)(int, float *, float *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
    dword_1041316C,
    &v54,
    &v57,
    255,
    0,
    0,
    1,
    0.0099999998);
  v31 = (**(int (__thiscall ***)(int))a1)(a1);
  v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 28))(v31);
  if ( !v32 )
    return (*(int (**)(int, float *, _DWORD, const char *, ...))(*(_DWORD *)dword_1041316C + 20))(
             dword_1041316C,
             &v45,
             0.0,
             "%X",
             a1);
  v33 = *(_DWORD *)dword_1041316C;
  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)(v32 + 8) + 36))(v32 + 8);
  return (*(int (**)(int, float *, _DWORD, const char *, ...))(v33 + 20))(dword_1041316C, &v45, 0.0, "%d", v34);
}
