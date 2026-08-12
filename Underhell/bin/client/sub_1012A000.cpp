int __thiscall sub_1012A000(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  unsigned int v5; // edx
  int v6; // esi
  int v7; // ecx
  int *v8; // ecx
  int *v9; // edx
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // ecx
  unsigned int v15; // esi
  int v16; // ebx
  _DWORD *v17; // [esp+Ch] [ebp-4h]

  result = a2;
  v4 = *(_DWORD *)(a2 + 20);
  v17 = this;
  if ( v4 < 8 )
  {
    v11 = *(_DWORD **)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 8 - v4;
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
      v17[63] = v16 | v12;
    }
    return result;
  }
  v5 = *(_DWORD *)(a2 + 16);
  v6 = (unsigned __int8)v5;
  v7 = v4 - 8;
  *(_DWORD *)(a2 + 20) = v7;
  if ( v7 )
  {
    *(_DWORD *)(a2 + 16) = v5 >> 8;
    this[63] = (unsigned __int8)v5;
  }
  else
  {
    v8 = *(int **)(a2 + 24);
    v9 = *(int **)(a2 + 28);
    *(_DWORD *)(a2 + 20) = 32;
    if ( v8 == v9 )
    {
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 20) = 1;
      *(_DWORD *)(a2 + 24) = v8 + 1;
      this[63] = v6;
    }
    else
    {
      if ( v8 <= v9 )
      {
        v10 = *v8;
        *(_DWORD *)(a2 + 24) = v8 + 1;
        *(_DWORD *)(a2 + 16) = v10;
      }
      else
      {
        *(_DWORD *)(a2 + 16) = 0;
        *(_BYTE *)(a2 + 4) = 1;
      }
      this[63] = v6;
    }
  }
  return result;
}
