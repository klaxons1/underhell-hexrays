int __usercall sub_1013C920@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // edx
  double v14; // st7
  int (__thiscall *v15)(int); // eax
  float *v16; // eax
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  double v20; // st7
  float *v21; // eax
  int v22; // eax
  _DWORD *v23[44]; // [esp+4h] [ebp-1F0h] BYREF
  char v24; // [esp+B4h] [ebp-140h]
  int v25; // [esp+B8h] [ebp-13Ch]
  int v26; // [esp+BCh] [ebp-138h]
  char v27; // [esp+C0h] [ebp-134h]
  _DWORD *v28; // [esp+C4h] [ebp-130h] BYREF
  char v29; // [esp+D0h] [ebp-124h]
  int v30; // [esp+D4h] [ebp-120h]
  int v31; // [esp+D8h] [ebp-11Ch]
  int v32; // [esp+DCh] [ebp-118h]
  _DWORD *v33; // [esp+E0h] [ebp-114h]
  int v34; // [esp+E4h] [ebp-110h]
  char v35; // [esp+F4h] [ebp-100h]
  _DWORD v36[44]; // [esp+F8h] [ebp-FCh] BYREF
  int v37; // [esp+1A8h] [ebp-4Ch]
  float *v38; // [esp+1B0h] [ebp-44h]
  float *v39; // [esp+1B8h] [ebp-3Ch]
  _DWORD *v40; // [esp+1D8h] [ebp-1Ch]
  float v41; // [esp+1ECh] [ebp-8h]
  int v42; // [esp+1F0h] [ebp-4h]

  result = (*(int (__thiscall **)(int, int, const char *, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             a1,
             "Other textures",
             0,
             0);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3, a2);
      v6 = v5;
      if ( v5 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 36))(v6, v4, 0);
      v7 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 224))(v6, 1, 0, 0, 0);
      sub_10016C20((int)v23);
      v25 = v7;
      v27 = 1;
      v26 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 40))(v7, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v25 + 68))(v25, 4, 6, v23);
      v28 = v23[41];
      v33 = v23[39];
      v30 = v7 + 4;
      v29 = v24;
      v32 = 0;
      v31 = 6;
      v35 = 0;
      v34 = 0;
      sub_10016990((int)v36, v7, 4, v23);
      v34 = 0;
      sub_10016A00(v36);
      v8 = v38;
      *v38 = 100.0;
      v8[1] = 100.0;
      v8[2] = 0.0;
      v9 = v39;
      *v39 = 0.0;
      v9[1] = 0.0;
      *v40 = -1;
      sub_10016A80(v36);
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
      v10 = v38;
      *v38 = (double)v42 + 100.0;
      v10[1] = 100.0;
      v10[2] = 0.0;
      v11 = v39;
      *v39 = 1.0;
      v11[1] = 0.0;
      *v40 = -1;
      sub_10016A80(v36);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 16))(v4);
      v13 = *(_DWORD *)v4;
      v42 = v12;
      v14 = (double)v12;
      v15 = *(int (__thiscall **)(int))(v13 + 20);
      v41 = v14 + 100.0;
      v42 = v15(v4);
      v16 = v38;
      v17 = (double)v42 + 100.0;
      *v38 = v41;
      v16[1] = v17;
      v16[2] = 0.0;
      v18 = v39;
      *v39 = 1.0;
      v18[1] = 1.0;
      *v40 = -1;
      sub_10016A80(v36);
      v41 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4));
      v19 = v38;
      v20 = (double)SLODWORD(v41) + 100.0;
      *v38 = 100.0;
      v19[1] = v20;
      v19[2] = 0.0;
      v21 = v39;
      *v39 = 0.0;
      v21[1] = 1.0;
      *v40 = -1;
      sub_10016A80(v36);
      if ( v27 )
      {
        switch ( v26 )
        {
          case 4:
            v22 = 2 * v37 - 2;
            break;
          case 5:
            v22 = 2 * v37;
            break;
          case 6:
            v22 = 3 * v37 - 6;
            break;
          case 7:
            v22 = 6 * v37 / 4;
            break;
          case 8:
            v22 = 0;
            break;
          default:
            v22 = v37;
            break;
        }
        sub_10016B00(&v28, v26, v22);
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 80))(v25, v37);
      v30 = 0;
      v31 = 0;
      v36[43] = 0;
      v36[41] = 0;
      v25 = 0;
      v36[19] = -1;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 48))(v7, -1, 0);
      sub_10016BC0(v23);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    }
  }
  return result;
}
