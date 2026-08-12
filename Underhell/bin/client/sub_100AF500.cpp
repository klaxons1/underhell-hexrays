int __thiscall sub_100AF500(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int *v8; // ecx
  unsigned int *v9; // edx
  int result; // eax
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // ecx
  unsigned int v15; // esi
  int v16; // ebx
  _DWORD *v17; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 20);
  v17 = this;
  if ( v3 < 8 )
  {
    v11 = *(_DWORD **)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 8 - v3;
    v14 = *(_DWORD **)(a2 + 24);
    if ( v14 == v11 )
    {
      *(_DWORD *)(a2 + 20) = 1;
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
    }
    else
    {
      if ( v14 > v11 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a2 + 16) = *v14;
    }
    *(_DWORD *)(a2 + 24) = v14 + 1;
LABEL_16:
    if ( *(_BYTE *)(a2 + 4) )
    {
      result = 0;
      this[63] = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 16);
      v16 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v13;
      *(_DWORD *)(a2 + 16) = v15 >> v13;
      result = (int)v17;
      v17[63] = 4 * (v16 | v12);
    }
    return result;
  }
  v4 = *(_DWORD *)(a2 + 16);
  v5 = (unsigned __int8)v4;
  v6 = v3 - 8;
  *(_DWORD *)(a2 + 20) = v6;
  if ( v6 )
  {
    v7 = v4 >> 8;
  }
  else
  {
    v8 = *(unsigned int **)(a2 + 24);
    v9 = *(unsigned int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 24) = v8 + 1;
      result = 4 * v5;
      this[63] = 4 * v5;
      return result;
    }
    if ( v8 > v9 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      *(_BYTE *)(a2 + 4) = 1;
      result = 4 * v5;
      this[63] = 4 * v5;
      return result;
    }
    v7 = *v8;
    *(_DWORD *)(a2 + 24) = v8 + 1;
  }
  *(_DWORD *)(a2 + 16) = v7;
  result = 4 * v5;
  this[63] = 4 * v5;
  return result;
}
