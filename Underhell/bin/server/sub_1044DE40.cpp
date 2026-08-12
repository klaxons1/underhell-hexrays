char __thiscall sub_1044DE40(_DWORD *this, int a2, int a3, char *ArgList)
{
  int *v4; // esi
  int v6; // esi
  int v7; // eax
  int *v8; // ebx
  int v9; // esi
  void *v10; // esp
  int *v11; // esi
  int v12; // edi
  void *v13; // esp
  _DWORD *v14; // esi
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // edi
  int *v19; // esi
  int v20; // eax
  char v21[12]; // [esp+0h] [ebp-54h] BYREF
  int v22[12]; // [esp+Ch] [ebp-48h] BYREF
  UUID Uuid; // [esp+3Ch] [ebp-18h] BYREF
  int v24; // [esp+4Ch] [ebp-8h] BYREF
  _DWORD *v25; // [esp+50h] [ebp-4h]
  int v26; // [esp+60h] [ebp+Ch]
  _BYTE *ArgLista; // [esp+64h] [ebp+10h]

  v25 = this;
  if ( a3 == -1 )
    v4 = 0;
  else
    v4 = *(int **)(*this + 20 * a3);
  if ( sub_1044A480(v4, ArgList) )
  {
    sub_1044D260((int)word_10701A30, "Attribute \"%s\" was defined more than once.\n", ArgList);
    return 0;
  }
  else
  {
    sub_1044A460(v4, 1);
    ArgLista = sub_1044A8B0(v4, ArgList);
    if ( v4 )
      sub_1044A460(v4, 0);
    sub_1042DE40((int)v22, 0, 0, 0);
    v6 = a2;
    if ( sub_1044D5B0(a2, v22) == 2 )
    {
      v26 = 0;
      if ( *(_BYTE *)(a2 + 20) )
      {
LABEL_14:
        sub_1002A150(v22);
        return 1;
      }
      else
      {
        while ( 1 )
        {
          v7 = sub_1044D5B0(v6, v22);
          if ( v7 == -1 || v7 == 7 )
            break;
          if ( v7 == 3 )
            goto LABEL_14;
          if ( v26 > 0 )
          {
            if ( v7 != 4 )
            {
              sub_1044D260((int)word_10701A30, "Expecting ',', didn't find it!");
              goto LABEL_36;
            }
            v7 = sub_1044D5B0(v6, v22);
          }
          if ( v7 != 5 )
          {
            sub_1044D260((int)word_10701A30, "Expecting element type, didn't find it!");
            goto LABEL_36;
          }
          v8 = sub_1042CFC0();
          v9 = sub_1042DA90((int)v22, (int)v8, 1);
          v10 = alloca(v9);
          sub_1042E300((int)v22, (int)v8, v21, v9);
          if ( sub_104291C0(v21, off_1068FF7C[0], v9) )
          {
            v16 = v25;
            if ( !(unsigned __int8)sub_1044E380(v25, a2, v21, &v24) )
              goto LABEL_36;
            v17 = v16[13];
            v18 = v24;
            v19 = v16 + 10;
            v20 = 24 * sub_1044DBB0(v19, v17);
            *(_DWORD *)(*v19 + v20 + 4) = 1;
            *(_DWORD *)(v20 + *v19) = ArgLista;
            *(_DWORD *)(*v19 + v20 + 8) = v18;
          }
          else
          {
            if ( sub_1044D5B0(a2, v22) != 5 )
            {
              sub_1044D260((int)word_10701A30, "Expecting element reference, didn't find it!");
              goto LABEL_36;
            }
            v11 = sub_1042CFC0();
            v12 = sub_1042DA90((int)v22, (int)v11, 1);
            v13 = alloca(v12);
            sub_1042E300((int)v22, (int)v11, v21, v12);
            if ( !(unsigned __int8)sub_10433310(&Uuid, v21, 0) )
            {
              sub_1044D260((int)word_10701A30, "Encountered invalid element ID data!");
              goto LABEL_36;
            }
            v14 = v25 + 10;
            v15 = 24 * sub_1044DBB0(v25 + 10, v25[13]);
            *(_DWORD *)(*v14 + v15 + 4) = 7;
            *(_DWORD *)(v15 + *v14) = ArgLista;
            sub_104332E0(&Uuid, (_DWORD *)(*v14 + v15 + 8));
          }
          ++v26;
          if ( *(_BYTE *)(a2 + 20) )
            goto LABEL_14;
          v6 = a2;
        }
        sub_1044D260((int)word_10701A30, "Expecting ']', didn't find it!");
LABEL_36:
        sub_1002A150(v22);
        return 0;
      }
    }
    else
    {
      sub_1044D260((int)word_10701A30, "Expecting '[', didn't find it!");
      if ( v22[2] >= 0 )
      {
        if ( v22[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
      }
      return 0;
    }
  }
}
