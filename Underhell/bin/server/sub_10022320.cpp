int __thiscall sub_10022320(void *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  int result; // eax
  int v6; // esi

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  result = sub_1012BF20(0, v4, 0, 0, 0, 0);
  v6 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(result + 252) & 0x800) != 0 )
      sub_100DAE60(result);
    return (*(int (__thiscall **)(void *, int, int, void *))(*(_DWORD *)this + 1876))(this, v6, v6 + 580, this);
  }
  return result;
}
