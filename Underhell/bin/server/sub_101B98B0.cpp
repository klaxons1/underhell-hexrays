int __thiscall sub_101B98B0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // edx
  int *v5; // ebx
  _DWORD *v6; // edi
  int v7; // esi
  unsigned int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // edi
  int result; // eax

  v3 = this;
  v4 = this[75] - 1;
  if ( v4 >= 0 )
  {
    v5 = this + 72;
    v6 = (_DWORD *)(this[72] + 20 * v4);
    do
    {
      if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
      if ( v7 == a2 )
      {
        v8 = v6[1];
        if ( v8 == -1 || off_1061BE18[4 * (v6[1] & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (v6[1] & 0xFFF) + 1];
        if ( v9 == a3 )
        {
          v10 = v4;
          goto LABEL_30;
        }
      }
      v6 -= 5;
      --v4;
    }
    while ( v4 >= 0 );
    v3 = this;
  }
  v11 = v3[75];
  v12 = v3[73];
  v5 = v3 + 72;
  if ( v11 + 1 > v12 )
    sub_101C4BF0(v11 - v12 + 1);
  ++v5[3];
  v13 = *v5;
  v14 = v5[3] - v11 - 1;
  v5[4] = *v5;
  if ( v14 > 0 )
    memcpy((void *)(v13 + 20 * v11 + 20), (const void *)(v13 + 20 * v11), 20 * v14);
  v15 = (_DWORD *)(20 * v11 + *v5);
  if ( v15 )
  {
    *v15 = -1;
    v15[1] = -1;
  }
  v16 = 20 * v11 + *v5;
  if ( a2 )
    *(_DWORD *)v16 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)v16 = -1;
  if ( a3 )
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(v16 + 4) = -1;
  *(float *)(v16 + 8) = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(v16 + 16) = 0;
  sub_101B5940(a2, a2, 1);
  sub_101B5940(a3, a2, 1);
  v10 = v11;
LABEL_30:
  result = *v5 + 20 * v10;
  *(float *)(result + 12) = *(float *)(dword_106B31C8 + 12);
  return result;
}
