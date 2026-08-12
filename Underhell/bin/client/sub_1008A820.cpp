char __thiscall sub_1008A820(int this, int a2, int a3, char a4)
{
  char v5; // bl
  unsigned __int16 v6; // ax
  __int16 v7; // ax
  bool v9; // al
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int *v21; // eax
  int i; // esi

  v5 = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v6 != 0xFFFF )
  {
    v7 = *(_WORD *)(168 * v6 + *(_DWORD *)(this + 36) + 8);
    if ( (v7 & 4) != 0 )
    {
      if ( !*(_BYTE *)(this + 208) )
        return 0;
      if ( (*(_BYTE *)(this + 208) != 0) == -1 )
        goto LABEL_26;
    }
    else if ( (v7 & 0x10) == 0 )
    {
      return 0;
    }
    if ( a4 )
    {
      v10 = *(_DWORD *)dword_10413178;
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
      v9 = (*(int (__thiscall **)(int, int))(v10 + 36))(dword_10413178, v11) == 3;
    }
    else
    {
      v9 = (*(_BYTE *)(a3 + 8) & 0x40) == 0;
    }
    if ( v9 )
    {
      v12 = (**(int (__thiscall ***)(int))a2)(a2);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 28))(v12);
      v14 = v13;
      if ( v13 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 520))(v13) )
        {
          v15 = dword_1042C644;
          v16 = dword_1042C644;
          if ( dword_1042C644 + 1 > dword_1042C63C )
          {
            sub_1010AFF0(dword_1042C644 - dword_1042C63C + 1);
            v15 = dword_1042C644;
          }
          v17 = dword_1042C638;
          dword_1042C644 = v15 + 1;
          v18 = v15 - v16;
          dword_1042C648 = dword_1042C638;
          if ( v18 > 0 )
          {
            memcpy((void *)(dword_1042C638 + 4 * v16 + 4), (const void *)(dword_1042C638 + 4 * v16), 4 * v18);
            v17 = dword_1042C638;
          }
LABEL_23:
          v21 = (int *)(v17 + 4 * v16);
          if ( v21 )
            *v21 = v14;
          goto LABEL_25;
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 164))(v14) )
        {
          v19 = dword_1042C658;
          v16 = dword_1042C658;
          if ( dword_1042C658 + 1 > dword_1042C650 )
          {
            sub_1010AFF0(dword_1042C658 - dword_1042C650 + 1);
            v19 = dword_1042C658;
          }
          v17 = dword_1042C64C;
          dword_1042C658 = v19 + 1;
          v20 = v19 - v16;
          dword_1042C65C = dword_1042C64C;
          if ( v20 > 0 )
          {
            memcpy((void *)(dword_1042C64C + 4 * v16 + 4), (const void *)(dword_1042C64C + 4 * v16), 4 * v20);
            v17 = dword_1042C64C;
          }
          goto LABEL_23;
        }
      }
LABEL_25:
      v5 = 1;
    }
  }
LABEL_26:
  for ( i = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
        i;
        i = (*(int (__thiscall **)(int))(*(_DWORD *)i + 120))(i) )
  {
    if ( (unsigned __int8)sub_1008A820(i, a3, 1) )
      v5 = 1;
  }
  return v5;
}
