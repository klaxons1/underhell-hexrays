// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1008B350@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        unsigned __int16 a6,
        float *a7,
        float *a8)
{
  bool v8; // zf
  int v9; // eax
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  int v13; // edx
  float *v14; // ecx
  double v15; // st5
  double v16; // st4
  double v17; // st1
  double v18; // st3
  double v19; // st2
  double v20; // st4
  double v21; // st1
  _DWORD *v22; // esi
  float *v23; // eax
  int v24; // ecx
  float *v25; // esi
  double v26; // st4
  double v27; // st7
  float *v28; // esi
  int v29; // edx
  float v30; // eax
  int (__thiscall *v31)(int, int, void *); // eax
  unsigned __int16 v32; // ax
  float v33; // eax
  __int16 v34; // ax
  int v35; // eax
  void (__thiscall *v36)(int); // edx
  double v37; // st7
  int v38; // eax
  int v39; // esi
  int v40; // eax
  int (__thiscall *v41)(int); // edx
  float v42; // esi
  _DWORD *v43; // edi
  int result; // eax
  void **v45; // [esp+34h] [ebp-95Ch] BYREF
  _BYTE *v46; // [esp+38h] [ebp-958h]
  int v47; // [esp+3Ch] [ebp-954h]
  int v48; // [esp+40h] [ebp-950h]
  int v49; // [esp+44h] [ebp-94Ch]
  _BYTE v50[2048]; // [esp+48h] [ebp-948h] BYREF
  float v51; // [esp+848h] [ebp-148h]
  _BYTE *v52; // [esp+84Ch] [ebp-144h]
  _BYTE v53[64]; // [esp+854h] [ebp-13Ch] BYREF
  float v54[4]; // [esp+894h] [ebp-FCh] BYREF
  float v55[8]; // [esp+8A4h] [ebp-ECh] BYREF
  float v56; // [esp+8C4h] [ebp-CCh]
  float v57; // [esp+8C8h] [ebp-C8h]
  float v58; // [esp+8CCh] [ebp-C4h]
  __int16 v59; // [esp+8D4h] [ebp-BCh]
  float v60[3]; // [esp+8F0h] [ebp-A0h] BYREF
  int v61; // [esp+8FCh] [ebp-94h]
  float v62; // [esp+900h] [ebp-90h]
  float v63; // [esp+904h] [ebp-8Ch]
  int v64; // [esp+908h] [ebp-88h]
  float v65; // [esp+90Ch] [ebp-84h]
  float v66; // [esp+910h] [ebp-80h]
  float v67; // [esp+914h] [ebp-7Ch]
  float v68; // [esp+918h] [ebp-78h]
  float v69; // [esp+91Ch] [ebp-74h] BYREF
  float v70; // [esp+920h] [ebp-70h]
  float v71; // [esp+924h] [ebp-6Ch]
  float v72; // [esp+928h] [ebp-68h] BYREF
  float v73; // [esp+92Ch] [ebp-64h]
  float v74; // [esp+930h] [ebp-60h]
  float v75; // [esp+934h] [ebp-5Ch] BYREF
  float v76; // [esp+938h] [ebp-58h]
  float v77; // [esp+93Ch] [ebp-54h]
  _DWORD *v78; // [esp+940h] [ebp-50h]
  float v79; // [esp+944h] [ebp-4Ch] BYREF
  float v80; // [esp+948h] [ebp-48h]
  float v81; // [esp+94Ch] [ebp-44h] BYREF
  float v82; // [esp+950h] [ebp-40h] BYREF
  float v83; // [esp+954h] [ebp-3Ch]
  float v84; // [esp+958h] [ebp-38h]
  float v85; // [esp+95Ch] [ebp-34h] BYREF
  float v86; // [esp+960h] [ebp-30h]
  float v87; // [esp+964h] [ebp-2Ch]
  float v88; // [esp+968h] [ebp-28h] BYREF
  float v89; // [esp+96Ch] [ebp-24h]
  float v90; // [esp+970h] [ebp-20h]
  float v91; // [esp+974h] [ebp-1Ch] BYREF
  float v92; // [esp+978h] [ebp-18h]
  float v93; // [esp+97Ch] [ebp-14h] BYREF
  float v94; // [esp+980h] [ebp-10h]
  int v95; // [esp+984h] [ebp-Ch]
  void *v96; // [esp+988h] [ebp-8h]
  void *retaddr; // [esp+990h] [ebp+0h]

  v95 = a2;
  v96 = retaddr;
  v8 = *(_DWORD *)(dword_1043A7BC + 48) == 0;
  v78 = a1;
  if ( !v8 )
    sub_10084100(a5, a7, a8);
  v9 = (*(int (__thiscall **)(int, float *, float *, float *, int, int))(*(_DWORD *)a5 + 8))(
         a5,
         &v79,
         &v82,
         &v85,
         a3,
         a4);
  sub_101EE040(v9, LODWORD(v92), LODWORD(v93), LODWORD(v94));
  v82 = v82 * -1.0;
  v83 = v83 * -1.0;
  v84 = -1.0 * v84;
  v10 = sub_10087890((int)v78, a6);
  v88 = *v10;
  v11 = v88;
  v89 = v10[1];
  v90 = v10[2];
  v12 = v89;
  v13 = 0;
  v14 = &v81;
  v15 = v90;
  v60[0] = v81 * v90 + v80 * v89 + v79 * v88;
  v60[1] = v82 * v88 + v83 * v89 + v84 * v90;
  v60[2] = v85 * v88 + v86 * v89 + v87 * v90;
  v72 = *a8 - *a7;
  v73 = a8[1] - a7[1];
  v74 = a8[2] - a7[2];
  v94 = 0.0;
  do
  {
    v16 = *(v14 - 1) * v12 + *(v14 - 2) * v11 + v15 * *v14;
    v17 = *(&v72 + v13);
    v18 = (*(v14 - 2) - v16 * v11) * v17;
    v19 = (*(v14 - 1) - v12 * v16) * v17;
    v20 = (*v14 - v16 * v15) * v17;
    v21 = v18 * v18 + v19 * v19 + v20 * v20;
    if ( v94 < v21 )
    {
      v94 = v21;
      v66 = v18;
      v67 = v19;
      v68 = v20;
    }
    ++v13;
    v14 += 3;
  }
  while ( v13 != 3 );
  off_103EDFEC();
  v69 = v67 * v90 - v68 * v89;
  v70 = v68 * v88 - v90 * v66;
  v71 = v89 * v66 - v88 * v67;
  v22 = v78;
  v65 = sub_10083FF0(a5, a7, a8, v60, 1.0, &v72);
  v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 4))(a5);
  v75 = *v23;
  v76 = v23[1];
  v77 = v23[2];
  v24 = v22[9];
  v75 = v79 * v72 + v75 + v82 * v73 + v85 * v74;
  v25 = (float *)(v24 + 168 * a6 + 12);
  v93 = *(float *)&v25;
  v76 = v80 * v72 + v76 + v83 * v73 + v86 * v74;
  LODWORD(v94) = 168 * a6;
  v77 = v72 * v81 + v77 + v73 * v84 + v74 * v87;
  *v25 = v69;
  v25[4] = v70;
  v25[8] = v71;
  v25[1] = v66;
  v25[5] = v67;
  v25[9] = v68;
  v25[2] = v88;
  v25[6] = v89;
  v25[10] = v90;
  sub_101F1F30(LODWORD(v93), LODWORD(v94));
  sub_101F2270(v25, &v75, &v69);
  v26 = v71;
  v27 = v70 * -1.0;
  v25[3] = v69 * -1.0;
  v25[7] = v27;
  v25[11] = -1.0 * v26;
  v25[14] = 0.0;
  v25[13] = 0.0;
  v25[12] = 0.0;
  v25[15] = 1.0;
  v28 = (float *)v78;
  v93 = 1.0 / v92;
  v92 = 1.0 / v91;
  sub_101F24C0((int)v55, v92, v93, 1.0);
  v55[7] = 0.5;
  v55[3] = 0.5;
  sub_101F1FF0(v55, LODWORD(v93), v53);
  v29 = *((_DWORD *)v28 + 9);
  v30 = v94;
  *(float *)(v29 + LODWORD(v94) + 76) = v91;
  *(float *)(v29 + LODWORD(v30) + 80) = v92;
  v31 = *(int (__thiscall **)(int, int, void *))(*(_DWORD *)a5 + 28);
  v93 = v28[53];
  v32 = v31(a5, v95, v96);
  if ( v32 == 0xFFFF )
  {
    v33 = 0.0;
  }
  else
  {
    v34 = *(_WORD *)(168 * v32 + *((_DWORD *)v28 + 9) + 8);
    if ( (v34 & 4) != 0 )
      v35 = *((_BYTE *)v28 + 208) != 0;
    else
      v35 = (v34 & 0x10) != 0 ? 3 : 0;
    LODWORD(v33) = v35 + 1;
  }
  v36 = *(void (__thiscall **)(int))(*(_DWORD *)a5 + 96);
  v94 = v33;
  v93 = COERCE_FLOAT(&v93);
  v36(a5);
  v37 = v93 + v65;
  v46 = v50;
  v63 = v37;
  v52 = v50;
  v54[0] = v75;
  v49 = 0;
  v54[1] = v76;
  v51 = 0.0;
  v45 = &CShadowLeafEnum::`vftable';
  v54[2] = v77;
  v47 = 512;
  v48 = -1;
  v59 = 256;
  v55[0] = v88 * v37;
  v55[1] = v89 * v37;
  v55[2] = v37 * v90;
  v55[4] = 0.0;
  v55[5] = 0.0;
  v55[6] = 0.0;
  v56 = sqrt(v92 * v92 + v91 * v91) * 0.5;
  v57 = v56;
  v58 = v56;
  v38 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 168))(dword_1041315C);
  (*(void (__thiscall **)(int, float *, void ***, _DWORD))(*(_DWORD *)v38 + 16))(v38, v54, &v45, 0);
  v39 = LODWORD(v94) + *((_DWORD *)v28 + 9);
  v62 = v51;
  v40 = *(_DWORD *)dword_1041318C;
  v41 = *(int (__thiscall **)(int))(*(_DWORD *)a5 + 4);
  v61 = v39;
  v64 = v40;
  v93 = COERCE_FLOAT(v41(a5));
  v92 = 240.0;
  v91 = v65;
  v42 = v62;
  v90 = v63;
  v89 = v93;
  v88 = v62;
  (*(void (__thiscall **)(int, _DWORD, float *, float *, _BYTE *, float *))(v64 + 12))(
    dword_1041318C,
    *(unsigned __int16 *)(v61 + 4),
    &v75,
    &v88,
    v53,
    &v91);
  v43 = v78;
  sub_10084F80(v78, a5, a6, &v79, a7, a8, v60);
  (*(void (__stdcall **)(_DWORD, float, float))(*(_DWORD *)off_103DCDDC + 84))(
    *(unsigned __int16 *)(v43[9] + LODWORD(v94) + 6),
    COERCE_FLOAT(LODWORD(v42)),
    COERCE_FLOAT(LODWORD(v93)));
  result = (int)v46;
  v51 = 0.0;
  if ( v48 >= 0 )
  {
    if ( v46 )
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, v46);
      result = 0;
      v46 = 0;
    }
    v47 = 0;
  }
  v52 = (_BYTE *)result;
  if ( v48 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
