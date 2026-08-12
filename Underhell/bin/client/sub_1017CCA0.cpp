void __usercall sub_1017CCA0(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int v3; // edi
  int v4; // esi
  double v5; // st7
  double v6; // st6
  bool v7; // c0
  bool v8; // c3
  double v9; // st6
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  int v18; // eax
  _DWORD *v19[44]; // [esp+40h] [ebp-214h] BYREF
  char v20; // [esp+F0h] [ebp-164h]
  int v21; // [esp+F4h] [ebp-160h]
  int v22; // [esp+F8h] [ebp-15Ch]
  char v23; // [esp+FCh] [ebp-158h]
  _DWORD *v24; // [esp+100h] [ebp-154h] BYREF
  char v25; // [esp+10Ch] [ebp-148h]
  int v26; // [esp+110h] [ebp-144h]
  int v27; // [esp+114h] [ebp-140h]
  int v28; // [esp+118h] [ebp-13Ch]
  _DWORD *v29; // [esp+11Ch] [ebp-138h]
  int v30; // [esp+120h] [ebp-134h]
  char v31; // [esp+130h] [ebp-124h]
  _DWORD v32[44]; // [esp+134h] [ebp-120h] BYREF
  int v33; // [esp+1E4h] [ebp-70h]
  float *v34; // [esp+1ECh] [ebp-68h]
  float *v35; // [esp+1F4h] [ebp-60h]
  int *v36; // [esp+214h] [ebp-40h]
  float v37; // [esp+228h] [ebp-2Ch]
  float v38; // [esp+22Ch] [ebp-28h]
  float v39; // [esp+230h] [ebp-24h]
  float v40; // [esp+234h] [ebp-20h]
  float v41; // [esp+238h] [ebp-1Ch]
  float v42; // [esp+23Ch] [ebp-18h]
  float v43; // [esp+240h] [ebp-14h]
  float v44; // [esp+244h] [ebp-10h]
  float v45; // [esp+248h] [ebp-Ch]
  float v46; // [esp+24Ch] [ebp-8h]
  float v47; // [esp+250h] [ebp-4h]

  if ( 0.0 != flt_104452F0 && dword_104452F4 && dword_1047C96C )
  {
    flt_104452F8 = 0.30000001;
    flt_104452FC = 0.30000001;
    flt_10445300 = 0.30000001;
    v3 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3, a1);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 80))(v3, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 128))(
      v3,
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      COERCE_UNSIGNED_INT64(1.0),
      HIDWORD(COERCE_UNSIGNED_INT64(1.0)),
      COERCE_UNSIGNED_INT64(1.0),
      HIDWORD(COERCE_UNSIGNED_INT64(1.0)),
      COERCE_UNSIGNED_INT64(-99999.0),
      HIDWORD(COERCE_UNSIGNED_INT64(-99999.0)),
      COERCE_UNSIGNED_INT64(99999.0),
      HIDWORD(COERCE_UNSIGNED_INT64(99999.0)));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 80))(v3, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 80))(v3, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3);
    v4 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v3 + 224))(v3, 0, 0, 0, dword_104452F4);
    sub_10016C20((int)v19);
    v5 = 0.0;
    v40 = flt_104452F8;
    v6 = flt_104452F8;
    v41 = flt_104452FC;
    v42 = flt_10445300;
    if ( flt_104452F8 <= 0.0 )
    {
      v40 = 0.0;
      v9 = 1.0;
    }
    else
    {
      v7 = v6 > 1.0;
      v8 = 1.0 == v6;
      v9 = 1.0;
      if ( v7 || v8 )
        v40 = 1.0;
    }
    if ( v41 <= 0.0 )
    {
      v41 = 0.0;
    }
    else if ( v41 >= v9 )
    {
      v41 = v9;
    }
    if ( v42 <= 0.0 )
    {
      v42 = 0.0;
    }
    else if ( v42 >= v9 )
    {
      v42 = v9;
    }
    if ( flt_104452F0 > 0.0 )
    {
      v5 = flt_104452F0;
      if ( v9 <= flt_104452F0 )
        v5 = v9;
    }
    v21 = v4;
    v45 = v5;
    v23 = 1;
    v22 = 7;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 2);
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v21 + 68))(v21, 4, 6, v19);
    v29 = v19[39];
    v26 = v4 + 4;
    v25 = v20;
    v28 = 0;
    v27 = 6;
    v31 = 0;
    v24 = v19[41];
    v30 = 0;
    sub_10016990((int)v32, v4, 4, v19);
    v30 = 0;
    sub_10016A00(v32);
    v10 = v34;
    *v34 = 0.0;
    v10[1] = 0.0;
    v10[2] = flt_103EA578;
    v39 = v42 * 255.0 + 8388608.0;
    v43 = v39;
    v37 = v41 * 255.0 + 8388608.0;
    v44 = v37;
    v38 = v40 * 255.0 + 8388608.0;
    v46 = v38;
    v45 = 255.0 * v45 + 8388608.0;
    v47 = v45;
    *v36 = LOBYTE(v43) | ((LOBYTE(v44) | ((LOBYTE(v46) | (LOBYTE(v47) << 8)) << 8)) << 8);
    v11 = v35;
    *v35 = 0.0;
    v11[1] = 0.0;
    sub_10016A80(v32);
    v12 = v34;
    *v34 = 0.0;
    v12[1] = 1.0;
    v12[2] = flt_103EA578;
    v47 = v39;
    v46 = v37;
    v44 = v38;
    v43 = v45;
    *v36 = LOBYTE(v47) | ((LOBYTE(v46) | ((LOBYTE(v44) | (LOBYTE(v43) << 8)) << 8)) << 8);
    v13 = v35;
    *v35 = 0.0;
    v13[1] = 0.0;
    sub_10016A80(v32);
    v14 = v34;
    *v34 = 1.0;
    v14[1] = 1.0;
    v14[2] = flt_103EA578;
    v47 = v39;
    v46 = v37;
    v44 = v38;
    v43 = v45;
    *v36 = LOBYTE(v47) | ((LOBYTE(v46) | ((LOBYTE(v44) | (LOBYTE(v43) << 8)) << 8)) << 8);
    v15 = v35;
    *v35 = 0.0;
    v15[1] = 0.0;
    sub_10016A80(v32);
    v16 = v34;
    *v34 = 1.0;
    v16[1] = 0.0;
    v16[2] = flt_103EA578;
    v47 = v39;
    v46 = v37;
    v44 = v38;
    v43 = v45;
    *v36 = LOBYTE(v47) | ((LOBYTE(v46) | ((LOBYTE(v44) | (LOBYTE(v43) << 8)) << 8)) << 8);
    v17 = v35;
    *v35 = 0.0;
    v17[1] = 0.0;
    sub_10016A80(v32);
    if ( v23 )
    {
      switch ( v22 )
      {
        case 4:
          v18 = 2 * v33 - 2;
          break;
        case 5:
          v18 = 2 * v33;
          break;
        case 6:
          v18 = 3 * v33 - 6;
          break;
        case 7:
          v18 = 6 * v33 / 4;
          break;
        case 8:
          v18 = 0;
          break;
        default:
          v18 = v33;
          break;
      }
      sub_10016B00(&v24, v22, v18);
    }
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v21 + 80))(v21, v33, v28, v19);
    v26 = 0;
    v27 = 0;
    v32[43] = 0;
    v32[41] = 0;
    v32[19] = -1;
    v21 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 48))(v4, -1, 0);
    sub_10016BC0(v19);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
}
