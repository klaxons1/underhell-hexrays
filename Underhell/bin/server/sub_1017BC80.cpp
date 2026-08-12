int __thiscall sub_1017BC80(char **this, int a2)
{
  const char *v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // edi
  const char *v7; // eax
  const char *v8; // eax
  int v9; // eax

  v3 = this[206];
  if ( !v3 )
    v3 = String;
  v4 = sub_101679A0((int)v3);
  result = sub_10167A00(v4);
  if ( result == 1 )
  {
    v6 = 0;
  }
  else
  {
    if ( result )
      return result;
    v6 = 1;
  }
  v7 = this[206];
  if ( !v7 )
    v7 = String;
  if ( sub_101679A0((int)v7) < 0 )
    return sub_1017B330(this[206], *(char **)(dword_106B31C8 + 60), v6);
  v8 = this[206];
  if ( !v8 )
    v8 = String;
  v9 = sub_101679A0((int)v8);
  return sub_101678B0(v9, v6);
}
