float *__thiscall sub_100EA020(_DWORD *this, int a2, int a3, int a4, int a5, int a6, float a7, float a8, float a9)
{
  int *v9; // edi
  int v10; // ebx
  int v11; // esi

  v9 = (int *)(this[2] + 24 * a2);
  v10 = sub_100E9E50(v9, v9[3]);
  v11 = *v9 + 28 * v10;
  *(_DWORD *)v11 = a3;
  if ( a4 )
    *(_DWORD *)(v11 + 24) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    *(_DWORD *)(v11 + 24) = -1;
  *(_DWORD *)(v11 + 4) = a5;
  *(_DWORD *)(v11 + 8) = a6;
  *(float *)(v11 + 12) = a7;
  *(float *)(v11 + 16) = a8;
  *(float *)(v11 + 20) = a9;
  return sub_100E9B40(v9, 1, v10);
}
