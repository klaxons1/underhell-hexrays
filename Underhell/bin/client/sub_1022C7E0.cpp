double __thiscall sub_1022C7E0(int this)
{
  unsigned int v2; // ecx
  int v3; // edi
  bool v4; // zf
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // esi
  int v10; // eax
  int *v11; // ecx
  int *v12; // edx
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // ecx
  unsigned int v18; // esi
  int v19; // ebx
  double result; // st7
  int v21; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 16);
  v3 = v2 & 1;
  v4 = (*(_DWORD *)(this + 20))-- == 1;
  v21 = v3;
  if ( v4 )
  {
    v5 = *(_DWORD **)(this + 24);
    v6 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v5 == v6 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v5 + 1;
    }
    else if ( v5 <= v6 )
    {
      *(_DWORD *)(this + 16) = *v5;
      *(_DWORD *)(this + 24) = v5 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v2 >> 1;
  }
  v7 = *(_DWORD *)(this + 20);
  if ( v7 >= 11 )
  {
    v8 = *(_DWORD *)(this + 16);
    v9 = v8 & 0x7FF;
    *(_DWORD *)(this + 20) = v7 - 11;
    if ( v7 == 11 )
    {
      v11 = *(int **)(this + 24);
      v12 = *(int **)(this + 28);
      *(_DWORD *)(this + 20) = 32;
      if ( v11 == v12 )
      {
        *(_DWORD *)(this + 20) = 1;
        *(_DWORD *)(this + 16) = 0;
        *(_DWORD *)(this + 24) = v11 + 1;
        v10 = v9;
      }
      else
      {
        if ( v11 <= v12 )
        {
          v13 = *v11;
          *(_DWORD *)(this + 24) = v11 + 1;
          *(_DWORD *)(this + 16) = v13;
        }
        else
        {
          *(_BYTE *)(this + 4) = 1;
          *(_DWORD *)(this + 16) = 0;
        }
        v10 = v9;
      }
    }
    else
    {
      *(_DWORD *)(this + 16) = v8 >> 11;
      v10 = v8 & 0x7FF;
    }
    goto LABEL_27;
  }
  v14 = *(_DWORD **)(this + 28);
  v15 = *(_DWORD *)(this + 16);
  v16 = 11 - v7;
  v17 = *(_DWORD **)(this + 24);
  if ( v17 == v14 )
  {
    *(_DWORD *)(this + 20) = 1;
    *(_DWORD *)(this + 16) = 0;
    *(_BYTE *)(this + 4) = 1;
LABEL_22:
    *(_DWORD *)(this + 24) = v17 + 1;
    goto LABEL_23;
  }
  if ( v17 <= v14 )
  {
    *(_DWORD *)(this + 16) = *v17;
    goto LABEL_22;
  }
  *(_BYTE *)(this + 4) = 1;
  *(_DWORD *)(this + 16) = 0;
LABEL_23:
  if ( *(_BYTE *)(this + 4) )
  {
    v10 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(this + 16);
    v19 = (v18 & dword_1039BF80[v16]) << *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = 32 - v16;
    *(_DWORD *)(this + 16) = v18 >> v16;
    v10 = v19 | v15;
  }
  v3 = v21;
LABEL_27:
  result = (double)(unsigned int)v10 * 0.0004885197850512946;
  if ( v3 )
    return -result;
  return result;
}
