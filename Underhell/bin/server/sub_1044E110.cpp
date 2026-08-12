char __thiscall sub_1044E110(int *this, int a2, int a3, char *ArgList, int a5)
{
  int *v7; // esi
  int *v8; // edi
  int v9; // ebx
  void *v10; // esp
  int *v11; // ebx
  int *v12; // edi
  int v13; // ebx
  void *v14; // esp
  char v15[12]; // [esp+0h] [ebp-50h] BYREF
  char *v16[2]; // [esp+Ch] [ebp-44h] BYREF
  int v17; // [esp+14h] [ebp-3Ch]
  UUID Uuid; // [esp+3Ch] [ebp-14h] BYREF
  int *v19; // [esp+4Ch] [ebp-4h]
  int v20; // [esp+5Ch] [ebp+Ch]

  v19 = this;
  sub_1042DE40((int)v16, 0, 0, 0);
  if ( sub_1044D5B0(a2, (int *)v16) != 5 )
  {
    sub_1044D260((int)word_10701A30, "Expecting quoted attribute value for attribute \"%s\", didn't find one!", ArgList);
    if ( v17 >= 0 )
    {
      if ( v16[0] )
        (*(void (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
    }
    return 0;
  }
  if ( a3 == -1 )
    v7 = 0;
  else
    v7 = *(int **)(*this + 20 * a3);
  if ( a5 == 7 && !sub_104292D0((int)ArgList, "id", 3) )
  {
    v8 = sub_1042CFC0();
    v9 = sub_1042DA90((int)v16, (int)v8, 1);
    v10 = alloca(v9);
    sub_1042E300((int)v16, (int)v8, v15, v9);
    if ( !(unsigned __int8)sub_10433310(&Uuid, v15, 0) )
    {
      sub_1044D260((int)word_10701A30, "Encountered invalid element ID data!");
      sub_1002A150((int *)v16);
      return 0;
    }
    sub_104332E0(&Uuid, (_DWORD *)(*v19 + 20 * a3 + 4));
    sub_1044A170(v7, &Uuid);
    goto LABEL_29;
  }
  if ( !sub_1044A480(v7, ArgList) )
  {
    sub_1044A460(v7, 1);
    v11 = (int *)sub_1044A8B0(v7, ArgList);
    v20 = (int)v11;
    if ( v7 )
      sub_1044A460(v7, 0);
    if ( a5 == 1 )
    {
      v12 = sub_1042CFC0();
      v13 = sub_1042DA90((int)v16, (int)v12, 1);
      v14 = alloca(v13);
      sub_1042E300((int)v16, (int)v12, v15, v13);
      if ( v15[0] )
      {
        if ( !(unsigned __int8)sub_10433310(&Uuid, v15, 0) )
        {
          sub_1044D260((int)word_10701A30, "Invalid format for element ID encountered for attribute \"%s\"", ArgList);
          goto LABEL_27;
        }
        sub_1044DCA0(v19, v20, &Uuid);
      }
    }
    else if ( !sub_1044D8B0(v11, a5, v16) )
    {
      sub_1044D260((int)word_10701A30, "Error reading attribute \"%s\"", ArgList);
LABEL_27:
      sub_1002A150((int *)v16);
      return 0;
    }
LABEL_29:
    sub_1002A150((int *)v16);
    return 1;
  }
  sub_1044D260((int)word_10701A30, "Encountered duplicate attribute definition for attribute \"%s\"!", ArgList);
  if ( v17 >= 0 && v16[0] )
    (*(void (__thiscall **)(_DWORD, char *))(*g_pMemAlloc + 20))(g_pMemAlloc, v16[0]);
  return 0;
}
