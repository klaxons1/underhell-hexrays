BOOL __thiscall sub_1022C220(int this, int a2, int a3, char a4, _DWORD *a5)
{
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  char v10; // si
  char v11; // cl
  int *v12; // ecx
  int *v13; // edx
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // ecx
  unsigned int v19; // esi
  int v20; // ebx
  int v22; // [esp+Ch] [ebp-8h]
  char v23; // [esp+13h] [ebp-1h]

  v23 = 0;
  v6 = 0;
LABEL_2:
  v22 = v6;
  while ( 1 )
  {
    v7 = *(_DWORD *)(this + 20);
    if ( v7 < 8 )
      break;
    v8 = *(_DWORD *)(this + 16);
    v9 = v7 - 8;
    v10 = v8;
    *(_DWORD *)(this + 20) = v9;
    if ( v9 )
    {
      *(_DWORD *)(this + 16) = v8 >> 8;
      v11 = v8;
    }
    else
    {
      v12 = *(int **)(this + 24);
      v13 = *(int **)(this + 28);
      *(_DWORD *)(this + 20) = 32;
      if ( v12 == v13 )
      {
        *(_DWORD *)(this + 24) = v12 + 1;
        *(_DWORD *)(this + 20) = 1;
        *(_DWORD *)(this + 16) = 0;
        v11 = v10;
      }
      else
      {
        if ( v12 <= v13 )
        {
          v14 = *v12;
          *(_DWORD *)(this + 24) = v12 + 1;
          *(_DWORD *)(this + 16) = v14;
        }
        else
        {
          *(_BYTE *)(this + 4) = 1;
          *(_DWORD *)(this + 16) = 0;
        }
        v11 = v10;
      }
    }
LABEL_20:
    if ( !v11 || a4 && v11 == 10 )
      goto LABEL_27;
    if ( v6 < a3 - 1 )
    {
      *(_BYTE *)(v6 + a2) = v11;
      ++v6;
      goto LABEL_2;
    }
    v23 = 1;
  }
  v15 = *(_DWORD **)(this + 28);
  v16 = *(_DWORD *)(this + 16);
  v17 = 8 - v7;
  v18 = *(_DWORD **)(this + 24);
  if ( v18 == v15 )
  {
    *(_DWORD *)(this + 20) = 1;
    *(_DWORD *)(this + 16) = 0;
    *(_BYTE *)(this + 4) = 1;
  }
  else
  {
    if ( v18 > v15 )
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
      goto LABEL_18;
    }
    *(_DWORD *)(this + 16) = *v18;
  }
  *(_DWORD *)(this + 24) = v18 + 1;
LABEL_18:
  if ( !*(_BYTE *)(this + 4) )
  {
    v19 = *(_DWORD *)(this + 16);
    v20 = (v19 & dword_1039BF80[v17]) << *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = 32 - v17;
    v11 = v20 | v16;
    v6 = v22;
    *(_DWORD *)(this + 16) = v19 >> v17;
    goto LABEL_20;
  }
  v6 = v22;
LABEL_27:
  *(_BYTE *)(v6 + a2) = 0;
  if ( a5 )
    *a5 = v6;
  return !*(_BYTE *)(this + 4) && !v23;
}
