int __usercall sub_10234D90@<eax>(int a1@<esi>, float *a2, int a3, float *a4, float *a5, int a6, int a7, char a8)
{
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  double v12; // st7
  double v13; // st6
  _DWORD *v14; // ebx
  int v15; // esi
  float *v16; // ecx
  int v17; // ebp
  float *v18; // eax
  double v19; // st6
  float *v20; // eax
  float *v21; // eax
  float *v22; // ecx
  double v23; // st7
  float *v24; // eax
  double v25; // st7
  float *v26; // eax
  float *v27; // ecx
  float *v28; // eax
  double v29; // st7
  float *v30; // eax
  double v31; // st7
  float *v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // esi
  float v37; // [esp+28h] [ebp-268h]
  float v38; // [esp+2Ch] [ebp-264h]
  float v39; // [esp+30h] [ebp-260h]
  int v40; // [esp+34h] [ebp-25Ch]
  int v41; // [esp+38h] [ebp-258h]
  int v42; // [esp+3Ch] [ebp-254h]
  int v43; // [esp+40h] [ebp-250h]
  int v44; // [esp+44h] [ebp-24Ch]
  _DWORD v45[44]; // [esp+48h] [ebp-248h] BYREF
  int v46; // [esp+F8h] [ebp-198h]
  int v47; // [esp+FCh] [ebp-194h]
  int v48; // [esp+100h] [ebp-190h]
  char v49; // [esp+104h] [ebp-18Ch]
  int v50[3]; // [esp+108h] [ebp-188h] BYREF
  char v51; // [esp+114h] [ebp-17Ch]
  int v52; // [esp+118h] [ebp-178h]
  int v53; // [esp+11Ch] [ebp-174h]
  int v54; // [esp+120h] [ebp-170h]
  int v55; // [esp+124h] [ebp-16Ch]
  int v56; // [esp+128h] [ebp-168h]
  char v57; // [esp+138h] [ebp-158h]
  _DWORD v58[41]; // [esp+13Ch] [ebp-154h] BYREF
  int v59; // [esp+1E0h] [ebp-B0h]
  int v60; // [esp+1E8h] [ebp-A8h]
  int v61; // [esp+1ECh] [ebp-A4h]
  float *v62; // [esp+1F4h] [ebp-9Ch]
  float *v63; // [esp+1F8h] [ebp-98h]
  float *v64; // [esp+1FCh] [ebp-94h]
  int *v65; // [esp+21Ch] [ebp-74h]
  float v66[24]; // [esp+230h] [ebp-60h] BYREF

  sub_102343B0(a1);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v9 = 0;
  v44 = v8;
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 36))(v8, a7, 0);
  sub_10234560(a2, a4, a5, (int)v66);
  v42 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 224))(v8, 1, 0, 0, 0);
  sub_10016C20((int)v45);
  v47 = v42;
  v49 = 1;
  v48 = 2;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v42 + 40))(v42, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v47 + 68))(v47, 36, 36, v45);
  v55 = v45[39];
  v52 = v42 + 4;
  v54 = 0;
  v53 = 36;
  v57 = 0;
  v50[0] = v45[41];
  v51 = v46;
  v56 = 0;
  sub_10016990((int)v58, v42, 36, v45);
  v56 = 0;
  sub_10016A00(v58);
  v10 = 0;
  v41 = 0;
  v11 = BYTE2(a6) | ((BYTE1(a6) | (((unsigned __int8)a6 | (HIBYTE(a6) << 8)) << 8)) << 8);
  v40 = 0;
  while ( 1 )
  {
    v12 = 0.0;
    v37 = 0.0;
    v38 = 0.0;
    v39 = 0.0;
    v13 = (v10 & 1) != 0 ? 1.0 : -1.0;
    *(&v37 + v10 / 2) = v13;
    v14 = a8 ? (_DWORD *)((char *)dword_103FC950 + v9) : (_DWORD *)((char *)&unk_103FC8F0 + v9);
    v15 = 1;
    while ( 1 )
    {
      v16 = v62;
      v17 = v14[v15 + 1];
      v43 = v14[v15];
      v18 = &v66[3 * *v14];
      *v62 = *v18++;
      *++v16 = *v18;
      v16[1] = v18[1];
      v19 = v37;
      *v65 = v11;
      v20 = v63;
      *v63 = v19;
      *++v20 = v38;
      v20[1] = v39;
      v21 = v64;
      *v64 = v12;
      v21[1] = v12;
      sub_10016A80(v58);
      v22 = v62;
      *v62 = v66[3 * v17];
      *++v22 = v66[3 * v17 + 1];
      v22[1] = v66[3 * v17 + 2];
      v23 = v37;
      *v65 = v11;
      v24 = v63;
      *v63 = v23;
      *++v24 = v38;
      v24[1] = v39;
      v25 = v15 == 1 ? 1.0 : 0.0;
      v26 = v64;
      *v64 = 1.0;
      v26[1] = v25;
      sub_10016A80(v58);
      v27 = v62;
      v28 = &v66[3 * v43];
      *v62 = *v28++;
      *++v27 = *v28;
      v27[1] = v28[1];
      v29 = v37;
      *v65 = v11;
      v30 = v63;
      *v63 = v29;
      *++v30 = v38;
      v30[1] = v39;
      v31 = v15 == 1 ? 0.0 : 1.0;
      v32 = v64;
      *v64 = v31;
      v32[1] = 1.0;
      sub_10016A80(v58);
      if ( ++v15 >= 3 )
        break;
      v12 = 0.0;
    }
    ++v41;
    v40 += 16;
    if ( v40 >= 96 )
      break;
    v9 = v40;
    v10 = v41;
  }
  if ( v49 )
  {
    v33 = v48;
    v34 = sub_10016D90(v48, v61);
    sub_10016B00(v50, v33, v34);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v47 + 80))(v47, v61, v54, v45);
  v52 = 0;
  v53 = 0;
  v60 = 0;
  v59 = 0;
  v58[19] = -1;
  v47 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v42 + 48))(v42, -1, 0);
  if ( v59 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v59 + 8))(v59) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 16))(v59);
  if ( v52 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v52 + 8))(v52) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v52 + 16))(v52);
  v35 = v44;
  (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 12))(v44);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 4))(v35);
}
