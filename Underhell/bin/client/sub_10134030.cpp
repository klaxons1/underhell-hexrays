void __usercall sub_10134030(int a1@<ecx>, int a2@<esi>)
{
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  float *v12; // eax
  float *v13; // eax
  double v14; // st6
  float *v15; // eax
  float *v16; // eax
  double v17; // st6
  int v18; // eax
  int v19; // esi
  _DWORD v20[44]; // [esp+8h] [ebp-1F4h] BYREF
  char v21; // [esp+B8h] [ebp-144h]
  int v22; // [esp+BCh] [ebp-140h]
  int v23; // [esp+C0h] [ebp-13Ch]
  char v24; // [esp+C4h] [ebp-138h]
  int v25[3]; // [esp+C8h] [ebp-134h] BYREF
  char v26; // [esp+D4h] [ebp-128h]
  int v27; // [esp+D8h] [ebp-124h]
  int v28; // [esp+DCh] [ebp-120h]
  int v29; // [esp+E0h] [ebp-11Ch]
  int v30; // [esp+E4h] [ebp-118h]
  int v31; // [esp+E8h] [ebp-114h]
  char v32; // [esp+F8h] [ebp-104h]
  _DWORD v33[41]; // [esp+FCh] [ebp-100h] BYREF
  int v34; // [esp+1A0h] [ebp-5Ch]
  int v35; // [esp+1A8h] [ebp-54h]
  int v36; // [esp+1ACh] [ebp-50h]
  float *v37; // [esp+1B4h] [ebp-48h]
  float *v38; // [esp+1BCh] [ebp-40h]
  int *v39; // [esp+1DCh] [ebp-20h]
  int v40; // [esp+1F0h] [ebp-Ch]
  int v41; // [esp+1F4h] [ebp-8h]
  int v42; // [esp+1F8h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 57744);
  v41 = a1;
  v42 = v3;
  if ( v3 > 0 )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    v40 = v4;
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 224))(
           v4,
           1,
           0,
           0,
           *(_DWORD *)(a1 + 57752));
    sub_10016C20((int)v20);
    v22 = v5;
    v24 = 1;
    v23 = 1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 1);
    (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v22 + 68))(v22, 2 * v3, 2 * v3, v20);
    v25[0] = v20[41];
    v30 = v20[39];
    v27 = v5 + 4;
    v26 = v21;
    v29 = 0;
    v28 = 2 * v3;
    v32 = 0;
    v31 = 0;
    sub_10016990((int)v33, v5, 2 * v3, v20);
    v31 = 0;
    sub_10016A00(v33);
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(v41 + 57732);
      v8 = *(unsigned __int8 *)(v7 + v6 + 19);
      v9 = *(unsigned __int8 *)(v7 + v6 + 16);
      v10 = *(unsigned __int8 *)(v7 + v6 + 17);
      v11 = v6 + v7;
      *v39 = *(unsigned __int8 *)(v11 + 18) | ((v10 | ((v9 | (v8 << 8)) << 8)) << 8);
      v12 = v38;
      *v38 = 0.0;
      v12[1] = 0.0;
      v13 = v37;
      v14 = (double)*(int *)(v11 + 4);
      *v37 = (float)*(int *)v11;
      v13[1] = v14;
      v13[2] = 0.0;
      sub_10016A80(v33);
      *v39 = *(unsigned __int8 *)(v11 + 22)
           | ((*(unsigned __int8 *)(v11 + 21)
             | ((*(unsigned __int8 *)(v11 + 20) | (*(unsigned __int8 *)(v11 + 23) << 8)) << 8)) << 8);
      v15 = v38;
      *v38 = 0.0;
      v15[1] = 0.0;
      v16 = v37;
      v17 = (double)*(int *)(v11 + 12);
      *v37 = (float)*(int *)(v11 + 8);
      v16[1] = v17;
      v16[2] = 0.0;
      sub_10016A80(v33);
      v6 += 24;
      --v42;
    }
    while ( v42 );
    if ( v24 )
    {
      switch ( v23 )
      {
        case 4:
          v18 = 2 * v36 - 2;
          break;
        case 5:
          v18 = 2 * v36;
          break;
        case 6:
          v18 = 3 * v36 - 6;
          break;
        case 7:
          v18 = 6 * v36 / 4;
          break;
        case 8:
          v18 = 0;
          break;
        default:
          v18 = v36;
          break;
      }
      sub_10016B00(v25, v23, v18);
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v22 + 80))(v22, v36, v29);
    v27 = 0;
    v28 = 0;
    v35 = 0;
    v34 = 0;
    v33[19] = -1;
    v22 = 0;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 48))(v5, -1, 0);
    if ( v34 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 16))(v34);
    if ( v27 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 16))(v27);
    }
    v19 = v40;
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 12))(v40);
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19);
  }
}
