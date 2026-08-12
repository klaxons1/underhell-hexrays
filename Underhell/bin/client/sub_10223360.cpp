int __stdcall sub_10223360(_DWORD *a1, int *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  int result; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  double v17; // st7
  float *v18; // eax
  double v19; // st6
  int v20; // eax
  int v21; // [esp+40h] [ebp-200h] BYREF
  int v22; // [esp+44h] [ebp-1FCh]
  int v23; // [esp+48h] [ebp-1F8h]
  int v24; // [esp+4Ch] [ebp-1F4h]
  int v25; // [esp+50h] [ebp-1F0h]
  unsigned int v26; // [esp+54h] [ebp-1ECh]
  _DWORD v27[44]; // [esp+58h] [ebp-1E8h] BYREF
  int v28; // [esp+108h] [ebp-138h]
  int v29; // [esp+10Ch] [ebp-134h]
  int v30; // [esp+110h] [ebp-130h]
  char v31; // [esp+114h] [ebp-12Ch]
  int v32[3]; // [esp+118h] [ebp-128h] BYREF
  char v33; // [esp+124h] [ebp-11Ch]
  int v34; // [esp+128h] [ebp-118h]
  int v35; // [esp+12Ch] [ebp-114h]
  int v36; // [esp+130h] [ebp-110h]
  int v37; // [esp+134h] [ebp-10Ch]
  int v38; // [esp+138h] [ebp-108h]
  char v39; // [esp+148h] [ebp-F8h]
  _DWORD v40[41]; // [esp+14Ch] [ebp-F4h] BYREF
  int v41; // [esp+1F0h] [ebp-50h]
  char v42; // [esp+1F4h] [ebp-4Ch]
  int v43; // [esp+1F8h] [ebp-48h]
  int v44; // [esp+1FCh] [ebp-44h]
  float *v45; // [esp+204h] [ebp-3Ch]
  _DWORD *v46; // [esp+22Ch] [ebp-14h]
  int v47; // [esp+230h] [ebp-10h]
  int v48; // [esp+234h] [ebp-Ch]
  int v49; // [esp+238h] [ebp-8h]

  v3 = a1;
  v4 = sub_101F7960(a2[16]);
  v5 = sub_10227A90(a1, 1, &v21, a3);
  v6 = *a1;
  v23 = v5;
  v7 = a2[1517];
  v26 = (unsigned int)a2[1581] >> 2;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v6 + 36))(a1, v4, 0);
  sub_10016C20((int)v27);
  result = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 516))(v3, v4);
  v9 = result;
  v24 = result;
  if ( v21 )
  {
    while ( 1 )
    {
      v10 = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*v3 + 224))(v3, 1, 0, 0, 0);
      v25 = v10;
      if ( v9 >= v21 )
      {
        v22 = v21;
        v9 = v21;
      }
      else
      {
        v22 = v9;
      }
      v29 = v10;
      v31 = 1;
      v30 = 0;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 40))(v10, 0);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v29 + 68))(v29, v9, v9, v27);
      v37 = v27[39];
      v34 = v10 + 4;
      v35 = v9;
      v41 = v10;
      v36 = 0;
      v39 = 0;
      v32[0] = v27[41];
      v33 = v28;
      qmemcpy(v40, v27, sizeof(v40));
      v11 = v22;
      v43 = v22;
      v40[20] = v27[20] != 0 ? 2 : 0;
      v44 = 0;
      v42 = 0;
      if ( v48 == -1 )
      {
        v47 = 0;
        v48 = v27[40];
        v49 = v27[39];
      }
      v38 = 0;
      sub_10016A00(v40);
      v21 -= v11;
      if ( v11 > 0 )
      {
        do
        {
          v12 = *(_DWORD *)(v23 - 12);
          v23 -= 16;
          v13 = v26 * (v12 / 4);
          v14 = v12 & 3;
          v15 = v14 + 4 * v13 + 8;
          v16 = v14 + 4 * v13;
          v17 = *(float *)(v7 + 4 * v15);
          v18 = v45 + 1;
          v19 = *(float *)(v7 + 4 * v16 + 16);
          *v45 = *(float *)(v7 + 4 * v16);
          *v18 = v19;
          v18[1] = v17;
          *v46 = -1;
          sub_10016A80(v40);
          --v11;
        }
        while ( v11 );
      }
      if ( v31 )
      {
        switch ( v30 )
        {
          case 4:
            v20 = 2 * v44 - 2;
            break;
          case 5:
            v20 = 2 * v44;
            break;
          case 6:
            v20 = 3 * v44 - 6;
            break;
          case 7:
            v20 = 6 * v44 / 4;
            break;
          case 8:
            v20 = 0;
            break;
          default:
            v20 = v44;
            break;
        }
        sub_10016B00(v32, v30, v20);
      }
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v29 + 80))(v29, v44, v36, v27);
      v34 = 0;
      v35 = 0;
      v43 = 0;
      v41 = 0;
      v40[19] = -1;
      v29 = 0;
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v25 + 48))(v25, -1, 0);
      if ( !v21 )
        break;
      v9 = v24;
      v3 = a1;
    }
  }
  if ( v41 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 8))(v41);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 16))(v41);
  }
  if ( v34 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 16))(v34);
  }
  return result;
}
