bool __stdcall sub_1015E250(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = a1;
  v3 = a2;
  if ( a1 > a2 )
  {
    v2 = a2;
    v3 = a1;
  }
  if ( (v2 == 5 || v2 == 8) && v3 == 17 )
    return 0;
  if ( v2 == 1 )
  {
    if ( v3 == 17 )
      return 1;
  }
  else if ( v2 == 10 )
  {
    return 0;
  }
  if ( v3 == 10 || v3 == 14 && v2 != 9 )
    return 0;
  if ( v2 == 5 )
  {
    if ( v3 == 15 )
      return 0;
LABEL_19:
    if ( v3 != 16 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( v2 == 1 || v2 == 2 )
    return 0;
  if ( v2 != 16 )
    goto LABEL_19;
LABEL_20:
  if ( v2 )
    return 0;
LABEL_21:
  if ( v2 == 3 )
  {
    if ( v3 == 3 || v3 == 8 )
      return 0;
    if ( v3 == 5 )
      return 0;
  }
  else if ( v2 == 6 && v3 == 6 )
  {
    return 0;
  }
  if ( v3 == 4 )
  {
    if ( v2 )
      return 0;
  }
  else if ( v3 == 13 )
  {
    if ( v2 == 11 )
      return 0;
    if ( v2 == 13 )
      return 0;
  }
  else if ( v3 == 11 && (v2 == 7 || v2 == 5 || v2 == 9) )
  {
    return 0;
  }
  if ( v2 != 12 && v3 != 12 )
    return 1;
  return v2 == 7;
}
