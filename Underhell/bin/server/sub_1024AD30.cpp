int __thiscall sub_1024AD30(char *this)
{
  char *i; // esi
  int result; // eax
  _DWORD *v4; // eax
  char *v5; // edi
  int v6; // esi
  char *v7; // [esp-Ch] [ebp-220h]
  char String[512]; // [esp+Ch] [ebp-208h] BYREF
  _DWORD *v9; // [esp+20Ch] [ebp-8h]
  int j; // [esp+210h] [ebp-4h]

  dword_106C6860 = 0;
  sub_104299C0(String, this + 59, 0x200u);
  for ( i = strtok(String, ";"); i; i = strtok(0, ";") )
  {
    if ( !*i )
      break;
    if ( (*(int (__thiscall **)(char *, char *))(*(_DWORD *)this + 420))(this, i) < 0 )
    {
      sub_104299C0(&byte_106C6660[16 * dword_106C6860], i, 0x10u);
      ++dword_106C6860;
    }
  }
  if ( dword_106C6860 < 2 )
  {
    dword_106C6860 = 0;
    this[58] = 0;
  }
  memset(dword_106C65E0, 0, sizeof(dword_106C65E0));
  result = 1;
  for ( j = 1; result <= *(_DWORD *)(dword_106B31C8 + 20); j = result )
  {
    v4 = (_DWORD *)sub_1025FB50(result);
    v9 = v4;
    if ( v4 )
    {
      v5 = (char *)sub_100D8800(v4);
      v6 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)this + 420))(this, v5);
      if ( v6 >= 0 )
        goto LABEL_14;
      if ( !this[58] )
      {
        v6 = dword_106C6860;
        v7 = &byte_106C6660[16 * dword_106C6860++];
        dword_106C65E0[v6] = 0;
        sub_104299C0(v7, v5, 0x10u);
      }
      if ( v6 >= 0 )
LABEL_14:
        dword_106C65E0[v6] += v9[998];
    }
    result = j + 1;
  }
  return result;
}
