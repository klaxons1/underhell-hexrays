int __cdecl sub_10039D80(unsigned __int8 a1)
{
  int *v1; // ecx
  const char *v2; // eax
  int v3; // eax
  int result; // eax
  unsigned __int8 v5; // cl

  if ( *v1 < 2 )
    goto LABEL_5;
  v2 = Locale;
  if ( *v1 > 1 )
    v2 = (const char *)v1[259];
  v3 = atoi(v2);
  if ( v3 == -1 )
LABEL_5:
    result = sub_10039C60();
  else
    result = sub_1007A6A0(v3);
  if ( result )
  {
    v5 = *(_BYTE *)(result + 1113);
    if ( (v5 & a1) != 0 )
      *(_BYTE *)(result + 1113) = v5 & ~a1;
    else
      *(_BYTE *)(result + 1113) = a1 | v5;
  }
  return result;
}
