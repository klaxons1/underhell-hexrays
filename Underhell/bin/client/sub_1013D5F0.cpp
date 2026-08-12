int __usercall sub_1013D5F0@<eax>(int a1@<edi>, _BYTE *a2, float a3)
{
  int v3; // esi
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  double v10; // st7
  int (__thiscall *v11)(_DWORD); // eax
  int v12; // esi
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  int v21; // eax
  _DWORD *v22[44]; // [esp+8h] [ebp-1F4h] BYREF
  char v23; // [esp+B8h] [ebp-144h]
  int v24; // [esp+BCh] [ebp-140h]
  int v25; // [esp+C0h] [ebp-13Ch]
  char v26; // [esp+C4h] [ebp-138h]
  _DWORD *v27; // [esp+C8h] [ebp-134h] BYREF
  char v28; // [esp+D4h] [ebp-128h]
  int v29; // [esp+D8h] [ebp-124h]
  int v30; // [esp+DCh] [ebp-120h]
  int v31; // [esp+E0h] [ebp-11Ch]
  _DWORD *v32; // [esp+E4h] [ebp-118h]
  int v33; // [esp+E8h] [ebp-114h]
  char v34; // [esp+F8h] [ebp-104h]
  _DWORD v35[44]; // [esp+FCh] [ebp-100h] BYREF
  int v36; // [esp+1ACh] [ebp-50h]
  float *v37; // [esp+1B4h] [ebp-48h]
  float *v38; // [esp+1BCh] [ebp-40h]
  char v39; // [esp+1F3h] [ebp-9h] BYREF
  float v40; // [esp+1F4h] [ebp-8h]
  float v41; // [esp+1F8h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "___debug",
         "Other textures",
         1,
         0);
  result = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v3 + 44))(v3, "$basetexture", &v39, 0);
  v41 = *(float *)&result;
  if ( v39 )
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( a2 && *a2 )
    {
      v6 = (*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(*(_DWORD *)dword_1047C96C + 304))(
             dword_1047C96C,
             a2,
             "Other textures",
             0);
      v7 = *(_DWORD *)LODWORD(v41);
      v40 = *(float *)&v6;
      (*(void (__thiscall **)(float, int))(v7 + 56))(COERCE_FLOAT(LODWORD(v41)), v6);
      v8 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v40) + 12))(COERCE_FLOAT(LODWORD(v40)));
      v9 = *(_DWORD *)LODWORD(v40);
      v41 = *(float *)&v8;
      v10 = (double)v8;
      v11 = *(int (__thiscall **)(_DWORD))(v9 + 16);
      v41 = v10 * a3;
      v40 = (double)v11(LODWORD(v40)) * a3;
    }
    else
    {
      v40 = a3 * 64.0;
      v41 = v40;
    }
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 36))(v5, v3, 0);
    v12 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 224))(v5, 1, 0, 0, 0);
    sub_10016C20((int)v22);
    v24 = v12;
    v26 = 1;
    v25 = 7;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 40))(v12, 2);
    (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v24 + 68))(v24, 4, 6, v22);
    v32 = v22[39];
    v29 = v12 + 4;
    v31 = 0;
    v30 = 6;
    v34 = 0;
    v27 = v22[41];
    v28 = v23;
    v33 = 0;
    sub_10016990((int)v35, v12, 4, v22);
    v33 = 0;
    sub_10016A00(v35);
    v13 = v37;
    *v37 = 32.0;
    v13[1] = 32.0;
    v13[2] = 0.0;
    v14 = v38;
    *v38 = 0.0;
    v14[1] = 0.0;
    sub_10016A80(v35);
    v15 = v37;
    v41 = v41 + 32.0;
    *v37 = v41;
    v15[1] = 32.0;
    v15[2] = 0.0;
    v16 = v38;
    *v38 = 1.0;
    v16[1] = 0.0;
    sub_10016A80(v35);
    v17 = v37;
    *v37 = v41;
    v41 = v40 + 32.0;
    v17[1] = v41;
    v17[2] = 0.0;
    v18 = v38;
    *v38 = 1.0;
    v18[1] = 1.0;
    sub_10016A80(v35);
    v19 = v37;
    *v37 = 32.0;
    v19[1] = v41;
    v19[2] = 0.0;
    v20 = v38;
    *v38 = 0.0;
    v20[1] = 1.0;
    sub_10016A80(v35);
    if ( v26 )
    {
      switch ( v25 )
      {
        case 4:
          v21 = 2 * v36 - 2;
          break;
        case 5:
          v21 = 2 * v36;
          break;
        case 6:
          v21 = 3 * v36 - 6;
          break;
        case 7:
          v21 = 6 * v36 / 4;
          break;
        case 8:
          v21 = 0;
          break;
        default:
          v21 = v36;
          break;
      }
      sub_10016B00(&v27, v25, v21);
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 80))(v24, v36, v31);
    v29 = 0;
    v30 = 0;
    v35[43] = 0;
    v35[41] = 0;
    v35[19] = -1;
    v24 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 48))(v12, -1, 0);
    sub_10016BC0(v22);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
  return result;
}
