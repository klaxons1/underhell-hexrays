int __usercall sub_10071AE0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // esi
  int v4; // edi
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
  _DWORD v17[44]; // [esp+8h] [ebp-1E8h] BYREF
  char v18; // [esp+B8h] [ebp-138h]
  int v19; // [esp+BCh] [ebp-134h]
  int v20; // [esp+C0h] [ebp-130h]
  char v21; // [esp+C4h] [ebp-12Ch]
  _DWORD v22[3]; // [esp+C8h] [ebp-128h] BYREF
  char v23; // [esp+D4h] [ebp-11Ch]
  int v24; // [esp+D8h] [ebp-118h]
  int v25; // [esp+DCh] [ebp-114h]
  int v26; // [esp+E0h] [ebp-110h]
  int v27; // [esp+E4h] [ebp-10Ch]
  int v28; // [esp+E8h] [ebp-108h]
  char v29; // [esp+F8h] [ebp-F8h]
  _DWORD v30[41]; // [esp+FCh] [ebp-F4h] BYREF
  int v31; // [esp+1A0h] [ebp-50h]
  int v32; // [esp+1A8h] [ebp-48h]
  int v33; // [esp+1ACh] [ebp-44h]
  float *v34; // [esp+1B4h] [ebp-3Ch]
  float *v35; // [esp+1BCh] [ebp-34h]
  _DWORD *v36; // [esp+1DCh] [ebp-14h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 80))(v3, 10, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 84))(v3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 96))(v3, a1 + 1268);
  sub_10016C20((int)v17);
  v4 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 224))(
         v3,
         1,
         0,
         0,
         *(_DWORD *)(a1 + 1264));
  v19 = v4;
  v21 = 1;
  v20 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v19 + 68))(v19, 4, 6, v17);
  v22[0] = v17[41];
  v27 = v17[39];
  v24 = v4 + 4;
  v23 = v18;
  v26 = 0;
  v25 = 6;
  v29 = 0;
  v28 = 0;
  sub_10016990((int)v30, v4, 4, v17);
  v28 = 0;
  sub_10016A00(v30);
  v5 = v34;
  *v34 = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  v6 = v35;
  *v35 = 0.0;
  v6[1] = 0.0;
  *v36 = -1;
  sub_10016A80(v30);
  v7 = v34;
  *v34 = *(float *)(a1 + 1200);
  v7[1] = 0.0;
  v7[2] = 0.0;
  v8 = v35;
  *v35 = 1.0;
  v8[1] = 0.0;
  *v36 = -1;
  sub_10016A80(v30);
  v9 = v34;
  v10 = -*(float *)(a1 + 1204);
  *v34 = *(float *)(a1 + 1200);
  v9[1] = v10;
  v9[2] = 0.0;
  v11 = v35;
  *v35 = 1.0;
  v11[1] = 1.0;
  *v36 = -1;
  sub_10016A80(v30);
  v12 = v34;
  v13 = -*(float *)(a1 + 1204);
  *v34 = 0.0;
  v12[1] = v13;
  v12[2] = 0.0;
  v14 = v35;
  *v35 = 0.0;
  v14[1] = 1.0;
  *v36 = -1;
  sub_10016A80(v30);
  if ( v21 )
  {
    switch ( v20 )
    {
      case 4:
        v15 = 2 * v33 - 2;
        break;
      case 5:
        v15 = 2 * v33;
        break;
      case 6:
        v15 = 3 * v33 - 6;
        break;
      case 7:
        v15 = 6 * v33 / 4;
        break;
      case 8:
        v15 = 0;
        break;
      default:
        v15 = v33;
        break;
    }
    sub_10016B00(v22, v20, v15);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 80))(v19, v33, v26);
  v24 = 0;
  v25 = 0;
  v32 = 0;
  v31 = 0;
  v30[19] = -1;
  v19 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 48))(v4, -1, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 88))(v3);
  if ( v31 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 16))(v31);
  if ( v24 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 16))(v24);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
