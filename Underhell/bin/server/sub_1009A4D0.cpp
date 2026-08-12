char __usercall sub_1009A4D0@<al>(_BYTE *a1@<esi>)
{
  char v1; // al
  _BYTE *v2; // ecx
  const char *v4; // [esp+0h] [ebp-4h]

  if ( 0.0 != atof(v4) )
    return 1;
  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    return 1;
  while ( v1 == 48 )
  {
    v1 = *++v2;
    if ( !v1 )
      return 1;
  }
  return 0;
}
