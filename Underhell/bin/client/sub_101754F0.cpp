// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_101754F0@<eax>(float a1@<ecx>, float a2@<ebp>, int a3)
{
  int v3; // edi
  int v4; // eax
  int (__thiscall *v5)(int); // edx
  float *v6; // eax
  double v7; // st6
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  int v10; // esi
  int v11; // esi
  float *v12; // eax
  float *v13; // ecx
  float *v14; // eax
  int v15; // eax
  void (__thiscall *v16)(int, int, int); // edx
  int v17; // esi
  float v19[22]; // [esp+24h] [ebp-2ECh] BYREF
  int v20; // [esp+7Ch] [ebp-294h] BYREF
  int v21; // [esp+88h] [ebp-288h] BYREF
  _DWORD v22[44]; // [esp+94h] [ebp-27Ch] BYREF
  char v23; // [esp+144h] [ebp-1CCh]
  int v24; // [esp+148h] [ebp-1C8h]
  int v25; // [esp+14Ch] [ebp-1C4h]
  char v26; // [esp+150h] [ebp-1C0h]
  int v27[3]; // [esp+154h] [ebp-1BCh] BYREF
  char v28; // [esp+160h] [ebp-1B0h]
  int v29; // [esp+164h] [ebp-1ACh]
  int v30; // [esp+168h] [ebp-1A8h]
  int v31; // [esp+16Ch] [ebp-1A4h]
  int v32; // [esp+170h] [ebp-1A0h]
  int v33; // [esp+174h] [ebp-19Ch]
  char v34; // [esp+184h] [ebp-18Ch]
  _DWORD v35[41]; // [esp+188h] [ebp-188h] BYREF
  int v36; // [esp+22Ch] [ebp-E4h]
  int v37; // [esp+234h] [ebp-DCh]
  int v38; // [esp+238h] [ebp-D8h]
  float *v39; // [esp+240h] [ebp-D0h]
  _DWORD *v40; // [esp+268h] [ebp-A8h]
  float v41[3]; // [esp+27Ch] [ebp-94h] BYREF
  float v42[10]; // [esp+288h] [ebp-88h] BYREF
  char v43; // [esp+2B2h] [ebp-5Eh]
  float v44; // [esp+2B4h] [ebp-5Ch]
  _DWORD v45[3]; // [esp+2D8h] [ebp-38h] BYREF
  float v46[3]; // [esp+2E4h] [ebp-2Ch] BYREF
  int v47; // [esp+2F0h] [ebp-20h]
  float v48; // [esp+2F4h] [ebp-1Ch] BYREF
  float v49; // [esp+2F8h] [ebp-18h]
  float v50; // [esp+2FCh] [ebp-14h]
  float v51[4]; // [esp+300h] [ebp-10h] BYREF
  float retaddr; // [esp+310h] [ebp+0h]

  v51[1] = a2;
  v51[2] = retaddr;
  v3 = LODWORD(a1) - 4;
  v51[0] = a1;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(a1) - 4) + 40))(LODWORD(a1) - 4);
  sub_101EE040(v4, v46, &v21, &v20);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 36);
  v48 = v46[0] * 56755.84;
  v49 = v46[1] * 56755.84;
  v50 = 56755.84 * v46[2];
  v6 = (float *)v5(v3);
  v7 = v6[1] + v49;
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 36);
  v48 = v48 + *v6;
  v49 = v7;
  v9 = (float *)v8(v3);
  sub_1000E430(v19, v9, &v48);
  sub_1012D400(v45, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v19,
    16395,
    v45,
    v41);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0(v41, v42, 255, 0, 0, 1, 5.0);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v47 = v10;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 224))(
          v10,
          1,
          0,
          0,
          *(_DWORD *)(LODWORD(v51[0]) + 1188));
  sub_10016C20((int)v22);
  v26 = 1;
  v25 = 1;
  v24 = v11;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 40))(v11, 1);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v24 + 68))(v24, 2, 2, v22);
  v27[0] = v22[41];
  v32 = v22[39];
  v29 = v11 + 4;
  v28 = v23;
  v31 = 0;
  v30 = 2;
  v34 = 0;
  sub_10016990((int)v35, v11, 2, v22);
  v33 = 0;
  sub_10016A00(v35);
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3);
  v13 = v39;
  *v39 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  *v40 = -1;
  sub_10016A80(v35);
  v14 = v39;
  *v39 = v42[0];
  v14[1] = v42[1];
  v14[2] = v42[2];
  *v40 = -1;
  sub_10016A80(v35);
  if ( v26 )
  {
    switch ( v25 )
    {
      case 4:
        v15 = 2 * v38 - 2;
        break;
      case 5:
        v15 = 2 * v38;
        break;
      case 6:
        v15 = 3 * v38 - 6;
        break;
      case 7:
        v15 = 6 * v38 / 4;
        break;
      case 8:
        v15 = 0;
        break;
      default:
        v15 = v38;
        break;
    }
    sub_10016B00(v27, v25, v15);
  }
  v16 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 80);
  LODWORD(v51[0]) = v22;
  v16(v24, v38, v31);
  v29 = 0;
  v30 = 0;
  v37 = 0;
  v36 = 0;
  v24 = 0;
  v35[19] = -1;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 48))(v11, -1, 0);
  if ( 1.0 != v42[8] )
  {
    LOWORD(v51[0]) = -256;
    BYTE2(v51[0]) = 0;
    sub_10175260(v42, (unsigned __int8 *)v51);
  }
  if ( !v43 && 0.0 != v44 )
  {
    BYTE2(v51[0]) = 0;
    LOWORD(v51[0]) = 255;
    sub_10175260(v41, (unsigned __int8 *)v51);
  }
  if ( v36 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 16))(v36);
  if ( v29 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 8))(v29) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 16))(v29);
  v17 = v47;
  (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 12))(v47);
  (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
  return 1;
}
