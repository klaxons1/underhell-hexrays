char __thiscall sub_100A91A0(_DWORD *this, int a2)
{
  int v2; // ecx
  bool v4; // bl

  v2 = this[244];
  if ( v2 == 2 )
    return 1;
  if ( !*(_DWORD *)a2 )
    return 1;
  v4 = v2 == 0;
  if ( sub_10262560(*(_DWORD *)(*(_DWORD *)a2 + 24)) )
  {
    if ( !v4 )
      return 1;
  }
  else if ( v4 )
  {
    return 1;
  }
  return 0;
}
