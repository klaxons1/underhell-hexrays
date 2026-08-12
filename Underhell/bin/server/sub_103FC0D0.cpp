// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_103FC0D0@<al>(int a1@<ecx>, int a2@<ebp>, int a3, float a4)
{
  unsigned int v4; // eax
  int v5; // edi
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  double v9; // st7
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  float *v14; // edx
  float v15; // eax
  void (__thiscall *v16)(int, float *); // edx
  long double v17; // st7
  double v18; // st7
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  int v22; // edi
  double v23; // st7
  bool v24; // c0
  bool v25; // c3
  double v26; // st7
  int *v27; // eax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // eax
  float *v31; // eax
  int v33; // [esp+38h] [ebp-1F4h] BYREF
  float v34; // [esp+64h] [ebp-1C8h]
  float v35[20]; // [esp+90h] [ebp-19Ch] BYREF
  _BYTE v36[48]; // [esp+E0h] [ebp-14Ch] BYREF
  _BYTE v37[48]; // [esp+110h] [ebp-11Ch] BYREF
  int v38; // [esp+140h] [ebp-ECh] BYREF
  int v39; // [esp+14Ch] [ebp-E0h] BYREF
  _DWORD v40[4]; // [esp+158h] [ebp-D4h] BYREF
  float v41[3]; // [esp+168h] [ebp-C4h] BYREF
  float v42[3]; // [esp+174h] [ebp-B8h] BYREF
  float v43[3]; // [esp+180h] [ebp-ACh] BYREF
  float v44[3]; // [esp+18Ch] [ebp-A0h] BYREF
  float v45[3]; // [esp+198h] [ebp-94h] BYREF
  float v46; // [esp+1A4h] [ebp-88h]
  float v47; // [esp+1A8h] [ebp-84h]
  float v48; // [esp+1ACh] [ebp-80h]
  float v49[3]; // [esp+1B0h] [ebp-7Ch] BYREF
  int v50; // [esp+1BCh] [ebp-70h] BYREF
  float v51; // [esp+1C0h] [ebp-6Ch]
  float v52; // [esp+1C4h] [ebp-68h]
  float v53; // [esp+1C8h] [ebp-64h] BYREF
  float v54; // [esp+1CCh] [ebp-60h]
  float v55; // [esp+1D0h] [ebp-5Ch]
  float v56; // [esp+1D4h] [ebp-58h] BYREF
  float v57; // [esp+1D8h] [ebp-54h]
  float v58; // [esp+1DCh] [ebp-50h]
  float v59[3]; // [esp+1E0h] [ebp-4Ch] BYREF
  int v60; // [esp+1ECh] [ebp-40h]
  float v61; // [esp+1F0h] [ebp-3Ch]
  _DWORD *v62; // [esp+1F4h] [ebp-38h]
  float v63; // [esp+1F8h] [ebp-34h] BYREF
  float v64; // [esp+1FCh] [ebp-30h]
  float v65; // [esp+200h] [ebp-2Ch]
  float v66; // [esp+204h] [ebp-28h]
  int v67; // [esp+208h] [ebp-24h] BYREF
  float v68; // [esp+20Ch] [ebp-20h]
  float v69; // [esp+210h] [ebp-1Ch]
  int v70; // [esp+214h] [ebp-18h] BYREF
  float v71; // [esp+218h] [ebp-14h]
  float v72; // [esp+21Ch] [ebp-10h]
  int v73; // [esp+220h] [ebp-Ch]
  void *v74; // [esp+224h] [ebp-8h]
  void *retaddr; // [esp+22Ch] [ebp+0h]

  v73 = a2;
  v74 = retaddr;
  v4 = *(_DWORD *)(a1 + 8272);
  v60 = a1;
  if ( v4 == -1 )
    return 0;
  if ( off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    return 0;
  v62 = (_DWORD *)off_1061BE18[4 * (v4 & 0xFFF) + 1];
  if ( !v62 )
    return 0;
  if ( sub_103FABB0(a1) > a4 )
    return 0;
  if ( (_DWORD *)sub_101C5260((_DWORD *)a3) == v62 )
    return 0;
  v5 = v62[106];
  if ( !v5 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5) )
    return 0;
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 508))(a3);
  v59[0] = *v6;
  v59[1] = v6[1];
  v59[2] = v6[2];
  sub_104222B0(v59, &v63, &v39, &v38);
  if ( *(_BYTE *)(dword_106B3CDC + 12) )
  {
    v66 = COERCE_FLOAT((*(int (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968))(a3, &v53));
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*v62 + 576))(v62);
    *(float *)&v70 = *v7 - *(float *)LODWORD(v66);
    v71 = v7[1] - *(float *)(LODWORD(v66) + 4);
    v72 = v7[2] - *(float *)(LODWORD(v66) + 8);
    off_10689714();
    if ( v64 * v71 + *(float *)&v70 * v63 + v72 * v65 <= 0.34999999 )
      return 0;
  }
  v8 = v59[0];
  sub_10424C60(v59[0], 0.0);
  if ( *(_BYTE *)(v60 + 8324) )
  {
    if ( v8 <= 75.0 )
    {
      if ( v8 < -90.0 )
        v8 = -90.0;
    }
    else
    {
      v8 = 75.0;
    }
  }
  else if ( v8 <= 75.0 )
  {
    if ( v8 < -75.0 )
      v8 = -75.0;
  }
  else
  {
    v8 = 75.0;
  }
  v59[0] = v8;
  *(float *)&v70 = -v63;
  v71 = -v64;
  v9 = -v65;
  v72 = v9;
  v66 = *(float *)dword_106BAFF0;
  v10 = sub_1001F410(v62);
  v11 = (*(int (__thiscall **)(int, float *, _DWORD *, int *))(*(_DWORD *)v5 + 292))(v5, &flt_106F1CA8, v10, &v70);
  (*(void (__thiscall **)(int, float *, int))(LODWORD(v66) + 88))(dword_106BAFF0, v44, v11);
  v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a3 + 320) + 8))(a3 + 320);
  v13 = *v12;
  v14 = *((float **)v12 + 1);
  v15 = *((float *)v12 + 2);
  v70 = v13;
  v71 = *(float *)&v14;
  v72 = v15;
  sub_10018D40((float *)&v70);
  v16 = *(void (__thiscall **)(int, float *))(*(_DWORD *)a3 + 968);
  v71 = COERCE_FLOAT(&v56);
  v17 = v9 + fabs(v44[0] * v63 + v44[1] * v64 + v44[2] * v65);
  v61 = v17;
  v66 = v17 + v17 + 24.0 + *(float *)(v60 + 8292);
  v16(a3, &v56);
  *(float *)&v67 = v63 * v66 + v56;
  v68 = v64 * v66 + v57;
  sub_10265720(v40, a3, (int)v62, 0);
  sub_1001F180(v35, &v56, (float *)&v67);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, int *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v35,
    16395,
    v40,
    &v33);
  if ( v34 >= 0.5 )
  {
    if ( v34 > 1.0 )
      goto LABEL_24;
    v18 = v66 - v61;
  }
  else
  {
    v18 = 0.5 * v61;
  }
  *(float *)&v67 = v63 * v18 + v56;
  v68 = v64 * v18 + v57;
  v69 = v18 * v65 + v58;
LABEL_24:
  sub_10111910((_BYTE *)(a3 + 320), (float *)(a3 + 328), (float *)(a3 + 340), v42, v41);
  v19 = sub_100EA2C0(a3 + 320);
  v20 = v19[1];
  v70 = *(int *)v19;
  v21 = v19[2];
  v50 = v70;
  v51 = v20;
  v69 = COERCE_FLOAT(&v50);
  v52 = v41[2] + v21;
  v68 = COERCE_FLOAT(&v70);
  *(float *)&v67 = COERCE_FLOAT(&v67);
  v71 = v20;
  v72 = v21 + v42[2];
  ((void (__cdecl *)())sub_10424590)();
  v22 = v60;
  if ( !*(_BYTE *)(v60 + 8324) )
  {
    *(float *)&v70 = *(float *)&v67 - v46;
    v71 = v68 - v47;
    v72 = v69 - v48;
    v23 = off_10689714();
    v24 = v61 < v23;
    v25 = v61 == v23;
    v26 = v61;
    if ( !v24 && !v25 )
    {
      *(float *)&v67 = *(float *)&v70 * v26 + v46;
      v68 = v71 * v26 + v47;
      v69 = v26 * v72 + v48;
    }
  }
  if ( *(_DWORD *)(dword_106EFD04 + 48) )
  {
    *(float *)&v50 = 2.0;
    v51 = 2.0;
    v52 = 2.0;
    v72 = -2.0;
    sub_1011BB20((int)&v67, (int)&v70, (int)&v50, 0, 255, 0, 1, 0.0);
    v27 = (int *)sub_103FA150((_DWORD *)v22);
    v45[0] = v61;
    v45[1] = v61;
    v45[2] = v61;
    v53 = -v61;
    v54 = v53;
    v55 = v53;
    v71 = 0.0;
    v70 = 1;
    v69 = 0.0;
    v68 = 0.0;
    v67 = 255;
    v66 = COERCE_FLOAT(v45);
    v28 = *v27;
    v65 = COERCE_FLOAT(&v53);
    v29 = (*(int (__thiscall **)(int *))(v28 + 576))(v27);
    sub_1011BB20(v29, SLODWORD(v65), SLODWORD(v66), v67, SLODWORD(v68), SLODWORD(v69), v70, v71);
  }
  sub_103FA220((_BYTE *)v22, (int)v49, v22 + 8296, (_DWORD *)a3);
  v71 = COERCE_FLOAT(v49);
  v30 = sub_100BCD00((_DWORD *)a3);
  sub_101FB380((int)v62, a3, (int)v30, (float *)LODWORD(v71));
  if ( *(_BYTE *)(v22 + 8288) )
  {
    sub_103FA070(a3, (int)v37);
    v31 = (float *)sub_10424EE0(&v53, v22 + 8276, v37);
    v49[0] = *v31;
    v49[1] = v31[1];
    v49[2] = v31[2];
  }
  v71 = COERCE_FLOAT(v36);
  sub_104227F0(v49);
  sub_10421C00(v22 + 8308, v36, v43);
  v53 = *(float *)&v67 - v43[0];
  v54 = v68 - v43[1];
  v55 = v69 - v43[2];
  sub_103FAB20(v22, &v53, v49);
  return 1;
}
