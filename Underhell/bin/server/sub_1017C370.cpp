int __thiscall sub_1017C370(int this, char a2)
{
  char *v3; // edi
  int v4; // edx
  int v5; // ebx
  const char *v6; // eax
  char *v7; // edi
  int result; // eax
  int v9; // ebx
  const char *v10; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v3 = *(char **)(this + 800);
  if ( v3 )
  {
    v5 = sub_101B60F0(v3, this);
    if ( !v5 )
    {
      v6 = *(const char **)(this + 92);
      if ( !v6 )
        v6 = String;
      DevWarning("%s: can't find %s\n", v6, v3);
    }
    v11 = v5;
    v4 = v5;
  }
  else
  {
    v4 = dword_106BAFEC;
    v11 = dword_106BAFEC;
  }
  v7 = *(char **)(this + 804);
  if ( v7 )
  {
    v9 = sub_101B60F0(v7, this);
    if ( !v9 )
    {
      v10 = *(const char **)(this + 92);
      if ( !v10 )
        v10 = String;
      DevWarning("%s: can't find %s\n", v10, v7);
    }
    v4 = v11;
    result = v9;
  }
  else
  {
    result = dword_106BAFEC;
  }
  if ( v4 && result && v4 != result )
  {
    *(_BYTE *)(this + 808) = a2 == 0;
    *(_BYTE *)(this + 809) = 1;
    if ( a2 )
      return sub_101DA9E0(v4, result);
    else
      return sub_101DAA50(v4, result);
  }
  else
  {
    *(_BYTE *)(this + 809) = 0;
  }
  return result;
}
