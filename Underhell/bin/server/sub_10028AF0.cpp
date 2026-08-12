int __thiscall sub_10028AF0(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // esi
  int result; // eax
  int v7; // esi

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( v4 )
      v5 = v4;
    else
      v5 = (char *)String;
  }
  else
  {
    v5 = (char *)sub_1010D460(v3);
  }
  if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) && v5[strlen(v5) - 1] == 42 )
    DevMsg("InputForgetEntity does not support wildcards\n");
  result = sub_1012BF20(0, v5, 0, 0, 0, 0);
  v7 = result;
  if ( result )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) == result )
    {
      sub_100285C0(this, 0, 1);
      if ( this[584] != 2 )
        this[584] = 2;
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 1868))(this);
    return sub_100780E0(v7);
  }
  return result;
}
