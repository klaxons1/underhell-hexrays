bool __thiscall sub_10225440(int this)
{
  bool v1; // zf
  int v2; // ecx
  char v3; // al

  v1 = *(_BYTE *)(this + 886) == 0;
  v2 = *(_DWORD *)(this + 976);
  if ( v1 )
  {
    if ( !v2 )
      return 0;
    if ( (unsigned __int8)sub_1041D250(10) )
      return 1;
    v3 = sub_1041D250(2);
  }
  else
  {
    if ( !v2 )
      return 0;
    if ( (unsigned __int8)sub_1041D250(10) || (unsigned __int8)sub_1041D250(2) || (unsigned __int8)sub_1041D250(6) )
      return 1;
    v3 = sub_1041D250(7);
  }
  return v3 != 0;
}
