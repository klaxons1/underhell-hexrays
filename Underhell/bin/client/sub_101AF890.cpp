int __thiscall sub_101AF890(int this, int a2)
{
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // eax
  int *v9; // ecx
  int *v10; // edx
  int v11; // edx
  int v12; // edi
  int v13; // edx
  unsigned int *v14; // ecx
  unsigned int v15; // esi
  int v16; // eax
  int v17; // eax
  int result; // eax
  int v19; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 20);
  v4 = 0;
  v19 = this;
  if ( v3 >= 8 )
  {
    v5 = *(_DWORD *)(a2 + 16);
    v6 = (unsigned __int8)v5;
    v7 = v3 - 8;
    *(_DWORD *)(a2 + 20) = v7;
    if ( v7 )
    {
      *(_DWORD *)(a2 + 16) = v5 >> 8;
      v8 = (unsigned __int8)v5;
    }
    else
    {
      v9 = *(int **)(a2 + 24);
      v10 = *(int **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v9 == v10 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v9 + 1;
        v8 = v6;
      }
      else
      {
        if ( v9 <= v10 )
        {
          v11 = *v9;
          *(_DWORD *)(a2 + 24) = v9 + 1;
          *(_DWORD *)(a2 + 16) = v11;
        }
        else
        {
          *(_BYTE *)(a2 + 4) = 1;
          *(_DWORD *)(a2 + 16) = 0;
        }
        v8 = v6;
      }
    }
    goto LABEL_20;
  }
  v6 = *(_DWORD *)(a2 + 28);
  v12 = *(_DWORD *)(a2 + 16);
  v13 = 8 - v3;
  v14 = *(unsigned int **)(a2 + 24);
  if ( v14 == (unsigned int *)v6 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
LABEL_15:
    *(_DWORD *)(a2 + 24) = v14 + 1;
    goto LABEL_16;
  }
  if ( (unsigned int)v14 <= v6 )
  {
    v6 = *v14;
    *(_DWORD *)(a2 + 16) = *v14;
    goto LABEL_15;
  }
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 16) = 0;
LABEL_16:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v8 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 16);
    v4 = (v15 & dword_1039BF80[v13]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v13;
    v6 = v15 >> v13;
    *(_DWORD *)(a2 + 16) = v6;
    v8 = v4 | v12;
  }
  this = v19;
LABEL_20:
  *(_DWORD *)(this + 304) = v8;
  v16 = v8 - 1;
  if ( !v16 )
    return sub_101AF510((float *)this, 5.0);
  v17 = v16 - 1;
  if ( !v17 )
    return sub_101AF6E0(this, (_BYTE *)v4, v6);
  result = v17 - 1;
  if ( !result )
    return sub_101AF560(this, (_BYTE *)v4);
  return result;
}
