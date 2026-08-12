double __thiscall sub_100F6E90(int *this, int a2)
{
  int v2; // edx
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int *v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // edi

  v2 = this[38] - 1;
  if ( v2 < 0 )
  {
LABEL_9:
    v5 = this[38];
    v6 = this[36];
    v7 = this + 35;
    if ( v5 + 1 > v6 )
      sub_10118050(v5 - v6 + 1);
    ++v7[3];
    v8 = *v7;
    v9 = v7[3] - v5 - 1;
    v7[4] = *v7;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 8 * v5 + 8), (const void *)(v8 + 8 * v5), 8 * v9);
    v10 = 8 * v5;
    v11 = (_DWORD *)(8 * v5 + *v7);
    if ( v11 )
      *v11 = -1;
    v12 = *v7;
    if ( a2 )
      *(_DWORD *)(v12 + v10) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(v12 + v10) = -1;
    *(float *)(v10 + *v7 + 4) = *((float *)off_103DC81C + 3);
    return 2.0;
  }
  else
  {
    v3 = (_DWORD *)(this[35] + 8 * v2);
    while ( 1 )
    {
      v4 = *v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*v3 & 0xFFF) + 2) != *v3 >> 12
         ? 0
         : *((_DWORD *)off_103DCD74 + 4 * (*v3 & 0xFFF) + 1);
      if ( v4 == a2 )
        return *((float *)off_103DC81C + 3) - *(float *)(this[35] + 8 * v2 + 4);
      v3 -= 2;
      if ( --v2 < 0 )
        goto LABEL_9;
    }
  }
}
