_DWORD *__thiscall sub_101AE0D0(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  __int16 v5; // si
  int v6; // ecx
  _DWORD *result; // eax
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

  v3 = *(_DWORD *)(a2 + 20);
  v17 = this;
  if ( v3 < 16 )
  {
    v11 = *(_DWORD **)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 16);
    v13 = 16 - v3;
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
      this[108] = 0;
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 16);
      v16 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 20) = 32 - v13;
      *(_DWORD *)(a2 + 16) = v15 >> v13;
      result = v17;
      v17[108] = (__int16)(v16 | v12);
    }
    return result;
  }
  v4 = *(_DWORD *)(a2 + 16);
  v5 = v4;
  v6 = v3 - 16;
  *(_DWORD *)(a2 + 20) = v6;
  if ( v6 )
  {
    *(_DWORD *)(a2 + 16) = HIWORD(v4);
    result = (_DWORD *)(__int16)v4;
    this[108] = (__int16)v4;
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
      result = (_DWORD *)v5;
      this[108] = v5;
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
      result = (_DWORD *)v5;
      this[108] = v5;
    }
  }
  return result;
}
