void __usercall sub_102A7340(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  double v16; // st7
  int v17; // ecx
  float v18[3]; // [esp+34h] [ebp-28h] BYREF
  float v19[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v20; // [esp+4Ch] [ebp-10h] BYREF
  float v21; // [esp+50h] [ebp-Ch]
  float v22; // [esp+54h] [ebp-8h]
  int v23; // [esp+58h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 336))(a1);
  sub_102A11F0((_DWORD *)a1, v3);
  sub_10039F40(*(int **)(a1 + 4), 16);
  v4 = *(_DWORD *)(a1 + 68);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
  sub_102675B0(v5, *(_DWORD *)(a1 + 4));
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v7 + 1488) + 12))(v7 + 1488, *(_DWORD *)(a1 + 4), a2);
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
  v10 = *(_DWORD *)(v9 + 1488);
  v23 = *(_DWORD *)(a1 + 4);
  sub_1029ED20((_DWORD **)a1);
  (*(void (__thiscall **)(int, int))(v10 + 20))(v9 + 1488, v23);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 4) + 140))(*(_DWORD *)(a1 + 4), 0, -1);
  sub_100E0970(*(_DWORD *)(a1 + 4), v11, 3, 0);
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 2604) + 92) = 0;
  v12 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(a1 + 4));
  v19[0] = *(float *)(v12 + 704);
  v19[1] = *(float *)(v12 + 708);
  v13 = *(_DWORD *)(a1 + 4);
  v19[2] = 0.0;
  sub_100E0EA0(v13, v19);
  v14 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 424);
  if ( v14 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 48))(v14, 1);
  v15 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 16) = 3;
  (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)v15 + 528))(v15, &v20, 0, v18);
  v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -400.0,
          -500.0);
  v17 = *(_DWORD *)(a1 + 4);
  v20 = v20 * v16 + v18[0] * 150.0;
  v21 = v21 * v16 + v18[1] * 150.0;
  v22 = v16 * v22 + 150.0 * v18[2];
  sub_100DD660(v17, &v20);
}
