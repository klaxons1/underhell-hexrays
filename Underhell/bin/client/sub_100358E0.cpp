int __thiscall sub_100358E0(int this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // esi
  int v8; // ecx
  int *v9; // ecx
  int *v10; // edx
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // esi
  int v17; // ebx
  int v18; // [esp+Ch] [ebp-4h]

  result = a3;
  v5 = *(_DWORD *)(a3 + 20);
  v18 = this;
  if ( v5 < 8 )
  {
    v12 = *(_DWORD **)(a3 + 28);
    v13 = *(_DWORD *)(a3 + 16);
    v14 = 8 - v5;
    v15 = *(_DWORD **)(a3 + 24);
    if ( v15 == v12 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v15 > v12 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
LABEL_15:
        if ( *(_BYTE *)(a3 + 4) )
        {
          v7 = 0;
        }
        else
        {
          v16 = *(_DWORD *)(a3 + 16);
          v17 = (v16 & dword_1039BF80[v14]) << *(_DWORD *)(a3 + 20);
          *(_DWORD *)(a3 + 20) = 32 - v14;
          *(_DWORD *)(a3 + 16) = v16 >> v14;
          v7 = v17 | v13;
        }
        this = v18;
        goto LABEL_19;
      }
      *(_DWORD *)(a3 + 16) = *v15;
    }
    *(_DWORD *)(a3 + 24) = v15 + 1;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(a3 + 16);
  v7 = (unsigned __int8)v6;
  v8 = v5 - 8;
  *(_DWORD *)(a3 + 20) = v8;
  if ( v8 )
  {
    *(_DWORD *)(a3 + 16) = v6 >> 8;
  }
  else
  {
    v9 = *(int **)(a3 + 24);
    v10 = *(int **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v9 == v10 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v9 + 1;
    }
    else if ( v9 <= v10 )
    {
      v11 = *v9;
      *(_DWORD *)(a3 + 24) = v9 + 1;
      *(_DWORD *)(a3 + 16) = v11;
    }
    else
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 16) = 0;
    }
  }
LABEL_19:
  if ( v7 == 1 )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(
               dword_10413178,
               *(_DWORD *)(this + 84));
    if ( result == 3 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(this - 4) + 128))(this - 4);
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413160 + 36))(*(unsigned __int16 *)(this + 292));
    }
  }
  return result;
}
