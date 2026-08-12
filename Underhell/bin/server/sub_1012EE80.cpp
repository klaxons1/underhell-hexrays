int __cdecl sub_1012EE80(int *a1)
{
  const char *v2; // eax

  if ( *a1 < 3 )
    return Warning("Incorrect parameters. Format: <category id> <line>\n");
  v2 = String;
  if ( *a1 > 1 )
    v2 = (const char *)a1[259];
  return atoi(v2);
}
