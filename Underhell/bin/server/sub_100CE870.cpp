int __thiscall sub_100CE870(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // edx
  int v7; // eax
  int *v8; // esi
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  int result; // eax

  v4 = this[443] - 1;
  if ( v4 < 0 )
  {
LABEL_5:
    v7 = this[441];
    v8 = this + 440;
    v9 = this[443];
    if ( v9 + 1 > v7 )
      sub_100C86E0(this + 440, v9 - v7 + 1);
    ++v8[3];
    v10 = *v8;
    v11 = v8[3] - v9 - 1;
    v8[4] = *v8;
    if ( v11 > 0 )
      memcpy((void *)(16 * v9 + v10 + 16), (const void *)(16 * v9 + v10), 16 * v11);
    v12 = 16 * v9;
    v13 = (_DWORD *)(v12 + *v8);
    if ( v13 )
      *v13 = -1;
    *(_DWORD *)(v12 + *v8 + 4) = a2;
    *(_DWORD *)(v12 + *v8) = -1;
    *(_DWORD *)(v12 + *v8 + 8) = a3;
    result = a4;
    *(_DWORD *)(v12 + *v8 + 12) = a4 != 0x80000000 ? a4 : 0;
  }
  else
  {
    v5 = this[440];
    v6 = (_DWORD *)(v5 + 16 * v4 + 4);
    while ( *v6 != a2 )
    {
      v6 -= 4;
      if ( --v4 < 0 )
        goto LABEL_5;
    }
    result = 2 * v4;
    *(_DWORD *)(v5 + 8 * result + 8) = a3;
    if ( a4 != 0x80000000 )
      *(_DWORD *)(this[440] + 8 * result + 12) = a4;
  }
  return result;
}
