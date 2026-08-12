char __thiscall sub_1011BEC0(_DWORD *this)
{
  char *v1; // ecx
  char v2; // al
  char v3; // al

  v1 = (char *)this[1];
  v2 = *v1;
  if ( *v1 > 32 )
  {
LABEL_5:
    v3 = *v1;
    if ( *v1 != 59 && v3 != 35 && (v3 != 47 || v1[1] != 47) )
      return 1;
  }
  else
  {
    while ( v2 != 10 )
    {
      v2 = *++v1;
      if ( !v2 )
        break;
      if ( v2 > 32 )
        goto LABEL_5;
    }
  }
  return 0;
}
