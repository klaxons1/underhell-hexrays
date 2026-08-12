int sub_1013D930()
{
  int v0; // esi
  int v1; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  double v10; // st7
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  float *v14; // eax
  int v15; // eax
  int v16; // ebx
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  double v22; // st7
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  float *v26; // eax
  int v27; // eax
  _BYTE v29[180]; // [esp+Ch] [ebp-20Ch] BYREF
  int v30; // [esp+C0h] [ebp-158h]
  int v31; // [esp+C4h] [ebp-154h]
  char v32; // [esp+C8h] [ebp-150h]
  _DWORD v33[4]; // [esp+CCh] [ebp-14Ch] BYREF
  int v34; // [esp+DCh] [ebp-13Ch]
  int v35; // [esp+E0h] [ebp-138h]
  int v36; // [esp+E4h] [ebp-134h]
  _DWORD v37[19]; // [esp+100h] [ebp-118h] BYREF
  int v38; // [esp+14Ch] [ebp-CCh]
  int v39; // [esp+1A4h] [ebp-74h]
  int v40; // [esp+1ACh] [ebp-6Ch]
  int v41; // [esp+1B0h] [ebp-68h]
  float *v42; // [esp+1B8h] [ebp-60h]
  float *v43; // [esp+1C0h] [ebp-58h]
  int *v44; // [esp+1E0h] [ebp-38h]
  float v45; // [esp+1F4h] [ebp-24h]
  int v46; // [esp+1F8h] [ebp-20h] BYREF
  int v47; // [esp+1FCh] [ebp-1Ch] BYREF
  int v48; // [esp+200h] [ebp-18h]
  float v49; // [esp+204h] [ebp-14h]
  float v50; // [esp+208h] [ebp-10h]
  float v51; // [esp+20Ch] [ebp-Ch]
  float v52; // [esp+210h] [ebp-8h]
  float v53; // [esp+214h] [ebp-4h]

  v0 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "vgui/white",
         "Other textures",
         1,
         0);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047C96C + 120))(dword_1047C96C, &v47, &v46);
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v2 = v1;
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 36))(v2, v0, 0);
  v3 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 224))(v2, 1, 0, 0, 0);
  sub_10016C20((int)v29);
  v4 = (int)((double)v47 * 0.050000001);
  v49 = *(float *)&v4;
  v48 = (int)(0.050000001 * (double)v46);
  sub_10017110((int)v29, v3, 5, 4);
  v5 = v42;
  v45 = (float)SLODWORD(v49);
  *v42 = v45;
  v49 = (float)v48;
  v5[1] = v49;
  v5[2] = 0.0;
  v6 = v43;
  *v43 = 0.0;
  v6[1] = 0.0;
  v53 = 8388608.0;
  v51 = 8388608.0;
  v50 = 8388863.0;
  v52 = 8388863.0;
  *v44 = LOBYTE(v53) | ((LOBYTE(v51) | ((LOBYTE(v50) | (LOBYTE(v52) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v7 = v42;
  *v42 = (float)(v47 - v4);
  v7[1] = v49;
  v7[2] = 0.0;
  v8 = v43;
  *v43 = 0.0;
  v8[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388608.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v9 = v42;
  v10 = (double)(v46 - v48);
  *v42 = (float)(v47 - v4);
  v9[1] = v10;
  v9[2] = 0.0;
  v11 = v43;
  *v43 = 0.0;
  v11[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388608.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v12 = v42;
  v13 = (double)(v46 - v48);
  *v42 = v45;
  v12[1] = v13;
  v12[2] = 0.0;
  v14 = v43;
  *v43 = 0.0;
  v14[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388608.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  if ( v32 )
  {
    switch ( v31 )
    {
      case 4:
        v15 = 2 * v41 - 2;
        break;
      case 5:
        v15 = 2 * v41;
        break;
      case 6:
        v15 = 3 * v41 - 6;
        break;
      case 7:
        v15 = 6 * v41 / 4;
        break;
      case 8:
        v15 = 0;
        break;
      default:
        v15 = v41;
        break;
    }
    sub_10016B00(v33, v31, v15);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v30 + 80))(v30, v41, v36, v29);
  v34 = 0;
  v35 = 0;
  v40 = 0;
  v39 = 0;
  v30 = 0;
  v38 = -1;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, -1, 0);
  v16 = (int)((double)v47 * 0.075000003);
  v49 = *(float *)&v16;
  v48 = (int)(0.075000003 * (double)v46);
  sub_10017110((int)v29, v3, 5, 4);
  v17 = v42;
  v45 = (float)SLODWORD(v49);
  *v42 = v45;
  v49 = (float)v48;
  v17[1] = v49;
  v17[2] = 0.0;
  v18 = v43;
  *v43 = 0.0;
  v18[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388863.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v19 = v42;
  *v42 = (float)(v47 - v16);
  v19[1] = v49;
  v19[2] = 0.0;
  v20 = v43;
  *v43 = 0.0;
  v20[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388863.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v21 = v42;
  v22 = (double)(v46 - v48);
  *v42 = (float)(v47 - v16);
  v21[1] = v22;
  v21[2] = 0.0;
  v23 = v43;
  *v43 = 0.0;
  v23[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388863.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  v24 = v42;
  v25 = (double)(v46 - v48);
  *v42 = v45;
  v24[1] = v25;
  v24[2] = 0.0;
  v26 = v43;
  *v43 = 0.0;
  v26[1] = 0.0;
  v52 = 8388608.0;
  v50 = 8388863.0;
  v51 = 8388863.0;
  v53 = 8388863.0;
  *v44 = LOBYTE(v52) | ((LOBYTE(v50) | ((LOBYTE(v51) | (LOBYTE(v53) << 8)) << 8)) << 8);
  sub_10016A80(v37);
  if ( v32 )
  {
    switch ( v31 )
    {
      case 4:
        v27 = 2 * v41 - 2;
        break;
      case 5:
        v27 = 2 * v41;
        break;
      case 6:
        v27 = 3 * v41 - 6;
        break;
      case 7:
        v27 = 6 * v41 / 4;
        break;
      case 8:
        v27 = 0;
        break;
      default:
        v27 = v41;
        break;
    }
    sub_10016B00(v33, v31, v27);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v30 + 80))(v30, v41, v36, v29);
  v34 = 0;
  v35 = 0;
  v40 = 0;
  v39 = 0;
  v38 = -1;
  v30 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, -1, 0);
  if ( v39 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v39 + 8))(v39) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 16))(v39);
  if ( v34 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 16))(v34);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
