int __usercall sub_1013CFE0@<eax>(int a1@<edi>, int a2, float a3, float a4, float a5, float a6)
{
  int result; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  int v19; // eax
  _DWORD *v20[44]; // [esp+8h] [ebp-1ECh] BYREF
  char v21; // [esp+B8h] [ebp-13Ch]
  int v22; // [esp+BCh] [ebp-138h]
  int v23; // [esp+C0h] [ebp-134h]
  char v24; // [esp+C4h] [ebp-130h]
  _DWORD *v25; // [esp+C8h] [ebp-12Ch] BYREF
  char v26; // [esp+D4h] [ebp-120h]
  int v27; // [esp+D8h] [ebp-11Ch]
  int v28; // [esp+DCh] [ebp-118h]
  int v29; // [esp+E0h] [ebp-114h]
  _DWORD *v30; // [esp+E4h] [ebp-110h]
  int v31; // [esp+E8h] [ebp-10Ch]
  char v32; // [esp+F8h] [ebp-FCh]
  _DWORD v33[44]; // [esp+FCh] [ebp-F8h] BYREF
  int v34; // [esp+1ACh] [ebp-48h]
  float *v35; // [esp+1B4h] [ebp-40h]
  float *v36; // [esp+1BCh] [ebp-38h]
  float v37; // [esp+1F0h] [ebp-4h]

  result = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             a2,
             "Other textures",
             1,
             0);
  v7 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
      v9 = v8;
      if ( v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 36))(v9, v7, 0);
      v10 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 224))(v9, 1, 0, 0, 0);
      sub_10016C20((int)v20);
      v22 = v10;
      v24 = 1;
      v23 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 40))(v10, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v22 + 68))(v22, 4, 6, v20);
      v30 = v20[39];
      v27 = v10 + 4;
      v29 = 0;
      v28 = 6;
      v32 = 0;
      v25 = v20[41];
      v26 = v21;
      v31 = 0;
      sub_10016990((int)v33, v10, 4, v20);
      v31 = 0;
      sub_10016A00(v33);
      v11 = v35;
      *v35 = a3;
      v11[1] = a4;
      v11[2] = 0.0;
      v12 = v36;
      *v36 = 0.001953125;
      v12[1] = 0.001953125;
      sub_10016A80(v33);
      v13 = v35;
      v37 = a3 + a5;
      *v35 = v37;
      v13[1] = a4;
      v13[2] = 0.0;
      v14 = v36;
      *v36 = 1.0019531;
      v14[1] = 0.001953125;
      sub_10016A80(v33);
      v15 = v35;
      *v35 = v37;
      v37 = a4 + a6;
      v15[1] = v37;
      v15[2] = 0.0;
      v16 = v36;
      *v36 = 1.0019531;
      v16[1] = 1.0019531;
      sub_10016A80(v33);
      v17 = v35;
      *v35 = a3;
      v17[1] = v37;
      v17[2] = 0.0;
      v18 = v36;
      *v36 = 0.001953125;
      v18[1] = 1.0019531;
      sub_10016A80(v33);
      if ( v24 )
      {
        switch ( v23 )
        {
          case 4:
            v19 = 2 * v34 - 2;
            break;
          case 5:
            v19 = 2 * v34;
            break;
          case 6:
            v19 = 3 * v34 - 6;
            break;
          case 7:
            v19 = 6 * v34 / 4;
            break;
          case 8:
            v19 = 0;
            break;
          default:
            v19 = v34;
            break;
        }
        sub_10016B00(&v25, v23, v19);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v22 + 80))(v22, v34, v29);
      v27 = 0;
      v28 = 0;
      v33[43] = 0;
      v33[41] = 0;
      v33[19] = -1;
      v22 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 48))(v10, -1, 0);
      sub_10016BC0(v20);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    }
  }
  return result;
}
