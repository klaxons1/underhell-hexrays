int __userpurge sub_101085D0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int result; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  char *v8; // eax
  const char *v9; // [esp-18h] [ebp-1Ch]
  int v10; // [esp-14h] [ebp-18h]
  char *v11; // [esp-10h] [ebp-14h]

  result = ((int (__thiscall *)(int (__stdcall ***)(int), int))(*off_103D89CC)[1])(off_103D89CC, a1) - 1;
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v4 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, result);
      v5 = v4;
      if ( !v4 )
        goto LABEL_16;
      if ( sub_10034D10(v4) )
        goto LABEL_16;
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 428))(v5) )
        goto LABEL_16;
      v6 = (_DWORD *)*((_DWORD *)v5 + 38);
      if ( !v6 )
        goto LABEL_16;
      if ( sub_10107A20(v5 + 148) )
        break;
      if ( v6[1] <= a3 )
      {
        if ( (v5[312] & 1) == 0 && *(_DWORD *)(dword_10436AA4 + 48) )
        {
          v11 = sub_10107A90((_DWORD *)v5 + 37);
          v10 = v6[3];
          v9 = (const char *)v6[2];
          v8 = sub_10034D90(v5);
          Msg("Removing unack'ed predicted entity:  %s created %s(%i) id == %s : %p\n", v8, v9, v10, v11, v5);
        }
LABEL_15:
        (*(void (__thiscall **)(_BYTE *))(*((_DWORD *)v5 + 2) + 4))(v5 + 8);
      }
LABEL_16:
      result = --a2;
      if ( a2 < 0 )
        return result;
    }
    if ( !(unsigned __int8)sub_10135630(v5) || sub_10034EB0(v5) )
      goto LABEL_16;
    v7 = sub_1006BE10(v6 + 4);
    if ( v7 )
      (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v7 + 564))(v7, 1, v5);
    goto LABEL_15;
  }
  return result;
}
