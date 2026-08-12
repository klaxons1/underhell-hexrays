char __thiscall sub_100A3970(
        _DWORD *this,
        int *a2,
        int a3,
        int a4,
        unsigned __int8 (__thiscall ***a5)(_DWORD, int, _DWORD))
{
  int v5; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  unsigned __int8 (__thiscall ***v15)(_DWORD, int, _DWORD); // edx
  int v16; // eax
  int v17; // edi
  char v18; // bl
  int v19; // [esp+8h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp+Ch]
  int v22; // [esp+1Ch] [ebp+Ch]

  v5 = *(_DWORD *)(a3 + 32);
  if ( !v5 )
    return 0;
  v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v5 - 1);
  v9 = this[2];
  v10 = *(__int16 *)(*(_DWORD *)(a3 + 20) + 2 * v8);
  v11 = 60 * v10;
  v12 = 60 * v10 + v9 + 12;
  if ( !*(_BYTE *)(60 * v10 + v9 + 53) )
    return 0;
  v13 = *(_DWORD *)(60 * v10 + v9 + 24);
  v19 = v13;
  if ( !v13 )
    return 0;
  if ( (*(_BYTE *)(v12 + 44) & 8) != 0 )
  {
    v14 = *(unsigned __int8 *)(v12 + 42);
    v21 = v14;
    while ( 1 )
    {
      *(_BYTE *)(v12 + 42) = v14 + 1;
      if ( v14 >= v13 )
      {
        if ( (*(_BYTE *)(v12 + 44) & 0x10) != 0 )
        {
          *(_BYTE *)(v12 + 41) = 0;
          return 0;
        }
        v14 = 0;
        *(_BYTE *)(v12 + 42) = 0;
      }
      v15 = a5;
      if ( !a5 )
        goto LABEL_18;
      if ( (**a5)(a5, *(_BYTE *)(*(_DWORD *)v12 + 8 * v14 + 7) & 0x3F, *(_DWORD *)(*(_DWORD *)v12 + 8 * v14)) )
        goto LABEL_17;
      v14 = *(unsigned __int8 *)(v12 + 42);
      if ( v14 == v21 )
        return 0;
      v13 = v19;
    }
  }
  v14 = sub_100A1860(v12, a5);
  if ( v14 < 0 )
    return 0;
LABEL_17:
  v15 = a5;
LABEL_18:
  v16 = *(_DWORD *)v12 + 8 * v14;
  v22 = v16;
  if ( (_BYTE)a4 )
  {
    sub_1009A510((int)this, 0, "%s\n", *(const char **)(v11 + this[2] + 8));
    v17 = (int)this;
    sub_1009A510((int)this, 0, "{\n");
    sub_1009AE40(v17, v17, (_DWORD *)v12, v14, 0);
    v16 = v22;
    v15 = a5;
  }
  else
  {
    v17 = (int)this;
  }
  v18 = 1;
  if ( (*(_BYTE *)(v16 + 7) & 0x3F) == 4 )
  {
    v18 = sub_100A37C0(v17, a2, 1, *(_DWORD *)v16, a4, v15);
  }
  else
  {
    a2[1] = v16;
    *a2 = v12;
  }
  if ( (_BYTE)a4 )
    sub_1009A510(v17, 0, "}\n");
  return v18;
}
