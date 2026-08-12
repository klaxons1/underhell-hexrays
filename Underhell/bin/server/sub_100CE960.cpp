int __thiscall sub_100CE960(int *this, int a2, int a3, int a4)
{
  int v4; // edx
  _DWORD *v5; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edx
  int result; // eax

  v4 = this[443] - 1;
  if ( v4 < 0 )
  {
LABEL_9:
    v7 = this[443];
    v8 = this[441];
    v9 = this + 440;
    if ( v7 + 1 > v8 )
      sub_100C86E0(this + 440, v7 - v8 + 1);
    ++v9[3];
    v10 = *v9;
    v11 = v9[3] - v7 - 1;
    v9[4] = *v9;
    if ( v11 > 0 )
      memcpy((void *)(16 * v7 + v10 + 16), (const void *)(16 * v7 + v10), 16 * v11);
    v12 = 16 * v7;
    v13 = (_DWORD *)(v12 + *v9);
    if ( v13 )
      *v13 = -1;
    *(_DWORD *)(v12 + *v9 + 4) = 0;
    v14 = *v9;
    if ( a2 )
      *(_DWORD *)(v14 + v12) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(v14 + v12) = -1;
    *(_DWORD *)(v12 + *v9 + 8) = a3;
    result = a4;
    *(_DWORD *)(v12 + *v9 + 12) = a4 != 0x80000000 ? a4 : 0;
  }
  else
  {
    v5 = (_DWORD *)(this[440] + 16 * v4);
    while ( 1 )
    {
      v6 = *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 ? 0 : off_1061BE18[4 * (*v5 & 0xFFF) + 1];
      if ( v6 == a2 )
        break;
      v5 -= 4;
      if ( --v4 < 0 )
        goto LABEL_9;
    }
    v15 = 2 * v4;
    *(_DWORD *)(this[440] + 8 * v15 + 8) = a3;
    result = a4;
    if ( a4 != 0x80000000 )
      *(_DWORD *)(this[440] + 8 * v15 + 12) = a4;
  }
  return result;
}
