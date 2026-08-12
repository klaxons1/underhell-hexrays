int __thiscall sub_101B0510(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  double v5; // st7
  int v6; // eax
  double v7; // st7
  int v8; // ebx
  int v9; // eax
  double v10; // st7
  int v11; // eax
  double v12; // st7
  double v13; // st6
  int v14; // eax
  double v15; // st6
  char v16; // al
  unsigned __int8 v17; // dl
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  char v21; // dl
  int v22; // ecx
  int v23; // edx
  char v24; // al
  int v25; // eax
  int v26; // esi
  int v27; // edi
  int v28; // ebx
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  double v36; // st7
  float *v37; // eax
  double v38; // st6
  unsigned __int8 v39; // al
  unsigned __int8 v40; // cl
  unsigned __int8 v41; // dl
  char v42; // si
  int v43; // esi
  int v44; // edi
  int v45; // ebx
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  float *v52; // eax
  int v53; // eax
  int v54; // esi
  _DWORD v56[44]; // [esp+Ch] [ebp-224h] BYREF
  char v57; // [esp+BCh] [ebp-174h]
  int v58; // [esp+C0h] [ebp-170h]
  int v59; // [esp+C4h] [ebp-16Ch]
  char v60; // [esp+C8h] [ebp-168h]
  int v61[3]; // [esp+CCh] [ebp-164h] BYREF
  char v62; // [esp+D8h] [ebp-158h]
  int v63; // [esp+DCh] [ebp-154h]
  int v64; // [esp+E0h] [ebp-150h]
  int v65; // [esp+E4h] [ebp-14Ch]
  int v66; // [esp+E8h] [ebp-148h]
  int v67; // [esp+ECh] [ebp-144h]
  char v68; // [esp+FCh] [ebp-134h]
  _DWORD v69[41]; // [esp+100h] [ebp-130h] BYREF
  int v70; // [esp+1A4h] [ebp-8Ch]
  int v71; // [esp+1ACh] [ebp-84h]
  int v72; // [esp+1B0h] [ebp-80h]
  float *v73; // [esp+1B8h] [ebp-78h]
  float *v74; // [esp+1C0h] [ebp-70h]
  int *v75; // [esp+1E0h] [ebp-50h]
  int v76; // [esp+1F4h] [ebp-3Ch]
  int v77; // [esp+1F8h] [ebp-38h]
  int v78; // [esp+1FCh] [ebp-34h]
  int v79; // [esp+200h] [ebp-30h]
  int v80; // [esp+204h] [ebp-2Ch]
  int v81; // [esp+208h] [ebp-28h]
  int v82; // [esp+20Ch] [ebp-24h]
  int v83; // [esp+210h] [ebp-20h]
  int v84; // [esp+214h] [ebp-1Ch]
  int v85; // [esp+218h] [ebp-18h]
  int v86; // [esp+21Ch] [ebp-14h]
  int v87; // [esp+220h] [ebp-10h]
  float v88; // [esp+224h] [ebp-Ch]
  float v89; // [esp+228h] [ebp-8h]
  int v90; // [esp+22Ch] [ebp-4h]
  char v91; // [esp+238h] [ebp+8h]
  char v92; // [esp+238h] [ebp+8h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v76 = v3;
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  v4 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 224))(
         v3,
         1,
         0,
         0,
         *(_DWORD *)(this + 316));
  v77 = v4;
  sub_10016C20((int)v56);
  v58 = v4;
  v60 = 1;
  v59 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v58 + 68))(v58, 4, 6, v56);
  v66 = v56[39];
  v63 = v4 + 4;
  v65 = 0;
  v64 = 6;
  v68 = 0;
  v61[0] = v56[41];
  v62 = v57;
  v67 = 0;
  sub_10016990((int)v69, v4, 4, v56);
  v67 = 0;
  sub_10016A00(v69);
  v5 = *(float *)(this + 252);
  v90 = (int)((*(float *)(this + 276) - *(float *)(this + 284)) * 0.5);
  v6 = (int)v5;
  v7 = *(float *)(this + 268) + *(float *)(this + 252);
  v8 = v6;
  v89 = *(float *)&v6;
  v9 = (int)v7;
  v10 = *(float *)(this + 260);
  v87 = v9;
  v11 = (int)v10;
  v12 = (double)v90;
  v13 = *(float *)(this + 260);
  v83 = v11;
  v14 = (int)(v13 + v12);
  v15 = *(float *)(this + 276) + *(float *)(this + 260);
  v84 = v14;
  v85 = (int)(v15 - v12);
  v86 = (int)v15;
  v16 = 0;
  v17 = *(_BYTE *)(this + 307);
  v18 = 0.0;
  v79 = 0;
  v82 = 0;
  v80 = 1;
  v81 = 1;
  if ( v17 > *(_BYTE *)(this + 297) || *(_BYTE *)(this + 302) > *(_BYTE *)(this + 292) )
  {
    v90 = sub_102374C0(this + 44);
    v8 = (int)((double)v90 * 0.0);
    v89 = *(float *)&v8;
    v90 = sub_102374C0(this + 44);
    v87 = (int)((double)v90 * 0.5);
    v83 = 0;
    v84 = 0;
    v85 = sub_102374F0(this + 44);
    v18 = 0.0;
    v86 = sub_102374F0(this + 44);
    v16 = 1;
    v79 = 1;
    v80 = 0;
    v81 = 0;
    v82 = 1;
  }
  if ( a2 == 1 )
  {
    if ( v16 )
    {
      v19 = *(unsigned __int8 *)(this + 305);
      v20 = *(unsigned __int8 *)(this + 306);
      LODWORD(v88) = *(unsigned __int8 *)(this + 304);
      v21 = *(_BYTE *)(this + 307);
      v78 = v19;
      v90 = v20;
      v91 = v21;
    }
    else
    {
      v22 = *(unsigned __int8 *)(this + 295);
      v23 = *(unsigned __int8 *)(this + 296);
      LODWORD(v88) = *(unsigned __int8 *)(this + 294);
      v24 = *(_BYTE *)(this + 297);
      v78 = v22;
      v90 = v23;
      v91 = v24;
    }
    LODWORD(v89) = sub_102374C0(this + 44) - v8;
    v25 = sub_102374C0(this + 44);
    v26 = LOBYTE(v88);
    v27 = (unsigned __int8)v78;
    v28 = (unsigned __int8)v90;
    v87 = v25 - v87;
    *v75 = (unsigned __int8)v90
         | (((unsigned __int8)v78 | ((LOBYTE(v88) | ((unsigned __int8)(v91 * v79) << 8)) << 8)) << 8);
    v29 = v74;
    *v74 = 0.0;
    v29[1] = 0.0;
    v30 = v73;
    v88 = (float)SLODWORD(v89);
    *v73 = v88;
    v30[1] = (float)v83;
    v30[2] = 0.0;
    sub_10016A80(v69);
    *v75 = v28 | ((v27 | ((v26 | ((unsigned __int8)(v91 * v82) << 8)) << 8)) << 8);
    v31 = v74;
    *v74 = 0.0;
    v31[1] = 1.0;
    v32 = v73;
    *v73 = v88;
    v32[1] = (float)v86;
    v32[2] = 0.0;
    sub_10016A80(v69);
    *v75 = v28 | ((v27 | ((v26 | ((unsigned __int8)(v91 * v81) << 8)) << 8)) << 8);
    v33 = v74;
    *v74 = 1.0;
    v33[1] = 1.0;
    v34 = v73;
    v89 = (float)v87;
    *v73 = v89;
    v34[1] = (float)v85;
    v34[2] = 0.0;
    sub_10016A80(v69);
    *v75 = v28 | ((v27 | ((v26 | ((unsigned __int8)(v91 * v80) << 8)) << 8)) << 8);
    v35 = v74;
    *v74 = 1.0;
    v36 = 0.0;
    v35[1] = 0.0;
    v37 = v73;
    *v73 = v89;
    v38 = (double)v84;
  }
  else
  {
    if ( v16 )
    {
      v39 = *(_BYTE *)(this + 299);
      v40 = *(_BYTE *)(this + 300);
      v41 = *(_BYTE *)(this + 301);
      v42 = *(_BYTE *)(this + 302);
    }
    else
    {
      v39 = *(_BYTE *)(this + 289);
      v40 = *(_BYTE *)(this + 290);
      v41 = *(_BYTE *)(this + 291);
      v42 = *(_BYTE *)(this + 292);
    }
    v92 = v42;
    v43 = v39;
    v44 = v40;
    v45 = v41;
    *v75 = v41 | ((v40 | ((v39 | ((unsigned __int8)(v92 * v79) << 8)) << 8)) << 8);
    v46 = v74;
    *v74 = v18;
    v46[1] = v18;
    v47 = v73;
    v88 = (float)SLODWORD(v89);
    *v73 = v88;
    v47[1] = (float)v83;
    v47[2] = v18;
    sub_10016A80(v69);
    *v75 = v45 | ((v44 | ((v43 | ((unsigned __int8)(v92 * v80) << 8)) << 8)) << 8);
    v48 = v74;
    *v74 = 1.0;
    v48[1] = 0.0;
    v49 = v73;
    v89 = (float)v87;
    *v73 = v89;
    v49[1] = (float)v84;
    v49[2] = 0.0;
    sub_10016A80(v69);
    *v75 = v45 | ((v44 | ((v43 | ((unsigned __int8)(v92 * v81) << 8)) << 8)) << 8);
    v50 = v74;
    *v74 = 1.0;
    v50[1] = 1.0;
    v51 = v73;
    *v73 = v89;
    v51[1] = (float)v85;
    v51[2] = 0.0;
    sub_10016A80(v69);
    v36 = 0.0;
    *v75 = v45 | ((v44 | ((v43 | ((unsigned __int8)(v92 * v82) << 8)) << 8)) << 8);
    v52 = v74;
    *v74 = 0.0;
    v52[1] = 1.0;
    v37 = v73;
    *v73 = v88;
    v38 = (double)v86;
  }
  v37[1] = v38;
  v37[2] = v36;
  sub_10016A80(v69);
  if ( v60 )
  {
    switch ( v59 )
    {
      case 4:
        v53 = 2 * v72 - 2;
        break;
      case 5:
        v53 = 2 * v72;
        break;
      case 6:
        v53 = 3 * v72 - 6;
        break;
      case 7:
        v53 = 6 * v72 / 4;
        break;
      case 8:
        v53 = 0;
        break;
      default:
        v53 = v72;
        break;
    }
    sub_10016B00(v61, v59, v53);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v58 + 80))(v58, v72, v65, v56);
  v63 = 0;
  v64 = 0;
  v71 = 0;
  v70 = 0;
  v69[19] = -1;
  v58 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v77 + 48))(v77, -1, 0);
  if ( v70 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v70 + 8))(v70) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v70 + 16))(v70);
  if ( v63 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v63 + 8))(v63) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v63 + 16))(v63);
  v54 = v76;
  (*(void (__thiscall **)(int))(*(_DWORD *)v76 + 12))(v76);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v54 + 4))(v54);
}
