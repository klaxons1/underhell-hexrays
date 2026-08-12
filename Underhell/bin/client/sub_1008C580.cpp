int __thiscall sub_1008C580(_DWORD *this, int a2, unsigned __int16 a3, float *a4, float *a5)
{
  int v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float *v11; // edi
  float v12; // ecx
  double v13; // st1
  double v14; // st0
  long double v15; // st7
  float *v16; // eax
  float *v17; // edi
  long double v18; // st6
  long double v19; // st5
  long double v20; // st6
  float *v21; // eax
  int v22; // edi
  int v23; // ecx
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  float v27; // [esp+4h] [ebp-93Ch]
  float v28; // [esp+8h] [ebp-938h]
  void **v29; // [esp+1Ch] [ebp-924h] BYREF
  int v30[4]; // [esp+20h] [ebp-920h] BYREF
  _BYTE v31[2048]; // [esp+30h] [ebp-910h] BYREF
  int v32; // [esp+830h] [ebp-110h]
  _BYTE *v33; // [esp+834h] [ebp-10Ch]
  _BYTE v34[64]; // [esp+838h] [ebp-108h] BYREF
  int v35[16]; // [esp+878h] [ebp-C8h] BYREF
  int v36[3]; // [esp+8B8h] [ebp-88h] BYREF
  int v37; // [esp+8C4h] [ebp-7Ch]
  int v38; // [esp+8C8h] [ebp-78h]
  int v39; // [esp+8CCh] [ebp-74h] BYREF
  int v40; // [esp+8D0h] [ebp-70h]
  int v41; // [esp+8D4h] [ebp-6Ch]
  float v42; // [esp+8D8h] [ebp-68h] BYREF
  float v43; // [esp+8DCh] [ebp-64h]
  float v44; // [esp+8E0h] [ebp-60h]
  float v45; // [esp+8E4h] [ebp-5Ch] BYREF
  float v46; // [esp+8E8h] [ebp-58h]
  float v47; // [esp+8ECh] [ebp-54h]
  float v48; // [esp+8F0h] [ebp-50h] BYREF
  float v49; // [esp+8F4h] [ebp-4Ch]
  float v50; // [esp+8F8h] [ebp-48h]
  float v51; // [esp+8FCh] [ebp-44h] BYREF
  float v52; // [esp+900h] [ebp-40h]
  float v53; // [esp+904h] [ebp-3Ch]
  float v54; // [esp+908h] [ebp-38h] BYREF
  float v55; // [esp+90Ch] [ebp-34h]
  float v56; // [esp+910h] [ebp-30h]
  float v57; // [esp+914h] [ebp-2Ch] BYREF
  float v58; // [esp+918h] [ebp-28h]
  float v59; // [esp+91Ch] [ebp-24h]
  int v60; // [esp+920h] [ebp-20h] BYREF
  float v61; // [esp+924h] [ebp-1Ch]
  float v62; // [esp+928h] [ebp-18h]
  float v63; // [esp+92Ch] [ebp-14h] BYREF
  float v64; // [esp+930h] [ebp-10h]
  float v65; // [esp+934h] [ebp-Ch] BYREF
  float v66; // [esp+938h] [ebp-8h]
  float v67; // [esp+93Ch] [ebp-4h]
  int savedregs; // [esp+940h] [ebp+0h] BYREF
  float *v69; // [esp+948h] [ebp+8h]
  float v70; // [esp+948h] [ebp+8h]
  int v71; // [esp+94Ch] [ebp+Ch]
  int v72; // [esp+94Ch] [ebp+Ch]
  int v73; // [esp+950h] [ebp+10h]
  float v74; // [esp+954h] [ebp+14h]

  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  sub_101EE040(v7, &v42, &v45, &v48);
  v45 = v45 * -1.0;
  v46 = v46 * -1.0;
  v47 = -1.0 * v47;
  v8 = sub_10087890((int)this, a3);
  v51 = *v8;
  v52 = v8[1];
  v53 = v8[2];
  *(float *)v36 = v43 * v52 + v42 * v51 + v44 * v53;
  *(float *)&v36[1] = v46 * v52 + v45 * v51 + v47 * v53;
  *(float *)&v36[2] = v52 * v49 + v51 * v48 + v53 * v50;
  sub_10083A20((float *)v36, &v39);
  v9 = *(&v42 + 3 * v39);
  v10 = *(&v43 + 3 * v39);
  v11 = &v42 + 3 * v39;
  v59 = *(&v44 + 3 * v39);
  v57 = v9;
  v58 = v10;
  v12 = *(&v42 + 3 * v40);
  v66 = *(&v43 + 3 * v40);
  v65 = v12;
  v69 = &v42 + 3 * v40;
  v67 = v69[2];
  v13 = v59 * v53 + v57 * v51 + v10 * v52;
  *(float *)&v60 = v13 * v51;
  v61 = v52 * v13;
  v57 = v57 - *(float *)&v60;
  v58 = v10 - v61;
  v59 = v59 - v13 * v53;
  v14 = v66 * v52 + v12 * v51 + v67 * v53;
  v65 = v12 - v51 * v14;
  v66 = v66 - v52 * v14;
  v67 = v67 - v14 * v53;
  off_103EDFEC();
  off_103EDFEC();
  *(float *)&v60 = *a5 - *a4;
  v61 = a5[1] - a4[1];
  v62 = a5[2] - a4[2];
  v15 = *((float *)&v60 + v39) * fabs(v11[2] * v59 + *v11 * v57 + v11[1] * v58);
  v16 = &v42 + 3 * v41;
  v17 = (float *)(&v60 + v41);
  v18 = *((float *)&v60 + v40) * fabs(v69[2] * v67 + v69[1] * v66 + *v69 * v65)
      + fabs(v67 * v16[2] + v16[1] * v66 + v65 * *v16) * *v17;
  v19 = v15 + fabs(v57 * *v16 + v58 * v16[1] + v59 * v16[2]) * *v17 + 10.0;
  v63 = v19;
  v64 = v18 + 10.0;
  v20 = v18 + 10.0;
  if ( v19 <= 10.0 )
    v63 = 10.0;
  if ( v20 <= 10.0 )
    v64 = 10.0;
  v70 = sub_10083FF0(a2, a4, a5, (float *)v36, 2.0, (float *)&v60);
  v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  v54 = *v21;
  v55 = v21[1];
  v56 = v21[2];
  v54 = (double)(int)((v42 * *(float *)&v60 + v54 + v45 * v61 + v48 * v62) * 2.0) * 0.5;
  v55 = (double)(int)((v43 * *(float *)&v60 + v55 + v46 * v61 + v49 * v62) * 2.0) * 0.5;
  v22 = 168 * a3;
  v56 = 0.5 * (double)(int)(2.0 * (*(float *)&v60 * v44 + v56 + v61 * v47 + v62 * v50));
  sub_10083F70((float *)(v22 + this[9] + 12), &v54, &v51, &v57, &v65);
  v71 = v22 + this[9] + 12;
  v28 = 1.0 / v64;
  v27 = 1.0 / v63;
  sub_101F24C0((int)v35, v27, v28, 1.0);
  *(float *)&v35[7] = 0.5;
  *(float *)&v35[3] = 0.5;
  sub_101F1FF0(v35, v71, v34);
  v23 = this[9];
  *(float *)(v22 + v23 + 76) = v63;
  *(float *)(v22 + v23 + 80) = v64;
  v74 = sub_10087090((int)this, a2) + v70;
  v30[3] = 0;
  v32 = 0;
  v30[0] = (int)v31;
  v33 = v31;
  v29 = &CShadowLeafEnum::`vftable';
  v30[1] = 512;
  v30[2] = -1;
  sub_10085270(&v51, &v63, (int)&savedregs, (int)&v29, &v54, v74);
  v73 = v32;
  v37 = v22 + this[9];
  v24 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 4);
  v72 = v30[0];
  v38 = *(_DWORD *)dword_1041318C;
  v25 = v24(a2);
  (*(void (__thiscall **)(int, _DWORD, float *, float *, _BYTE *, float *, int, int, _DWORD, _DWORD, _DWORD, int))(v38 + 12))(
    dword_1041318C,
    *(unsigned __int16 *)(v37 + 4),
    &v54,
    &v51,
    v34,
    &v63,
    v73,
    v72,
    LODWORD(v74),
    LODWORD(v70),
    240.0,
    v25);
  (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)off_103DCDDC + 84))(
    *(unsigned __int16 *)(v22 + this[9] + 6),
    v73,
    v72);
  return sub_100899E0(v30);
}
