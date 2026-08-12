int __thiscall sub_1027A660(int this, int *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // edi
  int i; // ebp
  int v11; // ebx
  int (__thiscall ***v12)(void *, int, int); // eax
  int result; // eax
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h] BYREF
  int v21; // [esp+2Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 224)
    && (v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 212) + 8) + 820))(*(_DWORD *)(*(_DWORD *)(this + 212) + 8))) != 0 )
  {
    v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v3) + 7;
  }
  else
  {
    v14 = 20;
  }
  v4 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this) - 10;
  v16 = v4;
  v5 = 5;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 128))(*(_DWORD *)(this + 344)) )
  {
    v5 = 5 - (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 772))(*(_DWORD *)(this + 344));
    v16 = v4 - sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 344));
  }
  v19 = 0;
  if ( *(int *)(this + 224) > 0 )
  {
    v18 = 0;
    do
    {
      v6 = -1;
      v7 = 0;
      v8 = v18 + *(_DWORD *)(this + 212);
      v17 = -1;
      if ( *(int *)(this + 316) > 0 )
      {
        v15 = *(_DWORD *)(this + 304);
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v15 + 296) == *(_DWORD *)v8 )
          {
            if ( v6 == -1 )
              v6 = v7;
            v17 = v7;
          }
          v15 += 4;
          ++v7;
        }
        while ( v7 < *(_DWORD *)(this + 316) );
        if ( v6 != -1 )
          goto LABEL_19;
      }
      if ( *(_BYTE *)(v8 + 4) )
      {
LABEL_19:
        sub_10236200(*(int (__thiscall ****)(void *, int, int))(v8 + 8), 5, v5, v16, v14);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 8) + 124))(*(_DWORD *)(v8 + 8), 1);
        v9 = v14 + v5;
        if ( v6 != -1 || !*(_BYTE *)(v8 + 4) )
        {
          for ( i = v6; i <= v17; ++i )
          {
            v11 = *(_DWORD *)(*(_DWORD *)(this + 304) + 4 * i);
            sub_10236200((int (__thiscall ***)(void *, int, int))v11, 5, v9, v16, *(_DWORD *)(this + 340));
            if ( sub_10237C80((_DWORD *)(this + 324)) && *(_DWORD *)(this + 328) == *(_DWORD *)(v11 + 292) )
            {
              sub_10279170((_DWORD **)v11, 1, &v21, &v20);
              v12 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)(this + 324));
              sub_10236200(v12, v21, v9, v20, v14);
            }
            v9 += *(_DWORD *)(this + 340);
          }
        }
        v5 = v9 + 8;
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v8 + 8) + 124))(*(_DWORD *)(v8 + 8), 0);
      }
      v18 += 36;
      ++v19;
    }
    while ( v19 < *(_DWORD *)(this + 224) );
  }
  *a2 = v5;
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 128))(*(_DWORD *)(this + 344));
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 772))(*(_DWORD *)(this + 344));
    *a2 += result;
  }
  return result;
}
