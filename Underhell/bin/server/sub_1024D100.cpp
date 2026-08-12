int __cdecl sub_1024D100(int *a1)
{
  const char *v1; // esi
  int result; // eax

  if ( *a1 < 2 )
    Error("Test_CreateEntity: requires entity classname argument.");
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  else
    v1 = String;
  result = sub_101811E0(v1, -1);
  if ( !result )
    return Error("Test_CreateEntity( %s ) failed.", v1);
  return result;
}
