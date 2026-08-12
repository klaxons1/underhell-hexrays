int __thiscall sub_102547D0(int this, int *a2)
{
  int v3; // ecx
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  int v12; // edi
  int v13; // ebp
  wint_t v14; // ax
  int v15; // eax
  bool v16; // zf
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]
  char v19; // [esp+1Ch] [ebp+4h]

  v3 = *(_DWORD *)(this + 344);
  v4 = *(_DWORD *)(this + 272);
  v18 = 0;
  v17 = 0;
  if ( v3 && !*(_BYTE *)(this + 296) )
    goto LABEL_9;
  v5 = *(_DWORD *)(this + 332);
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v5) + 1;
  v7 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) / v6;
  if ( v7 < 1 )
    v7 = 1;
  if ( v4 > v7 )
  {
    v8 = sub_10254130(this);
    v9 = *(_DWORD *)(this + 372);
    v17 = v9;
    if ( v8 >= v9 )
    {
      if ( v8 > v9 + v7 - 1 )
      {
        v17 = v8 - v7 + 1;
        if ( *(_DWORD *)(this + 344) )
        {
          sub_10251B40((_DWORD **)this, -1);
          v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 772))(*(_DWORD *)(this + 344));
          goto LABEL_10;
        }
      }
    }
    else
    {
      v17 = v8;
      if ( *(_DWORD *)(this + 344) )
      {
        sub_10251B40((_DWORD **)this, 1);
        v3 = *(_DWORD *)(this + 344);
LABEL_9:
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 772))(v3);
LABEL_10:
        v17 = v10;
      }
    }
    if ( v17 > 0 )
    {
      *a2 = v17;
      if ( v17 < *(_DWORD *)(this + 272) )
        v18 = *(_DWORD *)(*(_DWORD *)(this + 260) + 4 * v17 - 4);
    }
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(this + 341) )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(this + 376);
      v19 = 1;
      v13 = 3;
      if ( v12 < *(_DWORD *)(this + 232) )
      {
        v19 = 0;
        do
        {
          v14 = *(_WORD *)(*(_DWORD *)(this + 220) + 2 * v12);
          if ( *(_BYTE *)(this + 293) )
            v14 = 42;
          if ( *(_DWORD *)(this + 280) == v12 )
            break;
          ++v12;
          v13 += sub_10250EE0(v5, v14);
        }
        while ( v12 < *(_DWORD *)(this + 232) );
      }
      if ( v13 < sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this) )
        break;
      ++*(_DWORD *)(this + 376);
      if ( v19 )
        goto LABEL_14;
    }
    if ( v13 <= 0 )
    {
      v15 = *(_DWORD *)(this + 376);
      if ( v15 > 0 )
        *(_DWORD *)(this + 376) = v15 - 1;
    }
  }
LABEL_14:
  if ( !*(_BYTE *)(this + 380) )
    return 0;
  v16 = *(_BYTE *)(this + 341) == 0;
  *(_DWORD *)(this + 372) = v17;
  result = v18;
  if ( v16 )
    return *(_DWORD *)(this + 376);
  return result;
}
