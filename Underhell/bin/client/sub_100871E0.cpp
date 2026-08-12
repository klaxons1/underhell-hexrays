void __userpurge sub_100871E0(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  int v15; // eax
  _DWORD *v16[44]; // [esp+8h] [ebp-1E8h] BYREF
  char v17; // [esp+B8h] [ebp-138h]
  int v18; // [esp+BCh] [ebp-134h]
  int v19; // [esp+C0h] [ebp-130h]
  char v20; // [esp+C4h] [ebp-12Ch]
  _DWORD *v21; // [esp+C8h] [ebp-128h] BYREF
  char v22; // [esp+D4h] [ebp-11Ch]
  int v23; // [esp+D8h] [ebp-118h]
  int v24; // [esp+DCh] [ebp-114h]
  int v25; // [esp+E0h] [ebp-110h]
  _DWORD *v26; // [esp+E4h] [ebp-10Ch]
  int v27; // [esp+E8h] [ebp-108h]
  char v28; // [esp+F8h] [ebp-F8h]
  _DWORD v29[44]; // [esp+FCh] [ebp-F4h] BYREF
  int v30; // [esp+1ACh] [ebp-44h]
  float *v31; // [esp+1B4h] [ebp-3Ch]
  float *v32; // [esp+1BCh] [ebp-34h]
  _DWORD *v33; // [esp+1DCh] [ebp-14h]
  float v34; // [esp+1F8h] [ebp+8h]
  float v35; // [esp+1F8h] [ebp+8h]

  if ( *(_BYTE *)(a1 + 208) )
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 36))(v5, *(_DWORD *)(a1 + 24), 0);
    v6 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0);
    sub_10016C20((int)v16);
    v18 = v6;
    v20 = 1;
    v19 = 7;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 40))(v6, 2);
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v18 + 68))(v18, 4, 6, v16);
    v26 = v16[39];
    v23 = v6 + 4;
    v22 = v17;
    v25 = 0;
    v24 = 6;
    v28 = 0;
    v21 = v16[41];
    v27 = 0;
    sub_10016990((int)v29, v6, 4, v16);
    v27 = 0;
    sub_10016A00(v29);
    v7 = v31;
    *v31 = 0.0;
    v7[1] = 0.0;
    v7[2] = 0.0;
    v8 = v32;
    *v32 = 0.0;
    v8[1] = 0.0;
    *v33 = 0;
    sub_10016A80(v29);
    v9 = v31;
    v34 = (float)a3;
    *v31 = v34;
    v9[1] = 0.0;
    v9[2] = 0.0;
    v10 = v32;
    *v32 = 1.0;
    v10[1] = 0.0;
    *v33 = 0;
    sub_10016A80(v29);
    v11 = v31;
    *v31 = v34;
    v35 = (float)a4;
    v11[1] = v35;
    v11[2] = 0.0;
    v12 = v32;
    *v32 = 1.0;
    v12[1] = 1.0;
    *v33 = 0;
    sub_10016A80(v29);
    v13 = v31;
    *v31 = 0.0;
    v13[1] = v35;
    v13[2] = 0.0;
    v14 = v32;
    *v32 = 0.0;
    v14[1] = 1.0;
    *v33 = 0;
    sub_10016A80(v29);
    if ( v20 )
    {
      switch ( v19 )
      {
        case 4:
          v15 = 2 * v30 - 2;
          break;
        case 5:
          v15 = 2 * v30;
          break;
        case 6:
          v15 = 3 * v30 - 6;
          break;
        case 7:
          v15 = 6 * v30 / 4;
          break;
        case 8:
          v15 = 0;
          break;
        default:
          v15 = v30;
          break;
      }
      sub_10016B00(&v21, v19, v15);
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v18 + 80))(v18, v30, v25);
    v23 = 0;
    v24 = 0;
    v29[43] = 0;
    v29[41] = 0;
    v29[19] = -1;
    v18 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 48))(v6, -1, 0);
    sub_10016BC0(v16);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
}
