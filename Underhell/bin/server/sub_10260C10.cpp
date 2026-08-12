char __cdecl sub_10260C10(_DWORD *a1, char *String2)
{
  char *v2; // eax
  _DWORD *v3; // eax
  char result; // al
  const char *v5; // ecx
  const char *v6; // esi
  const char *v7; // eax
  const char *v8; // [esp-Ch] [ebp-Ch]

  v2 = String2;
  if ( !String2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  result = sub_10260B50((int)a1, (int)v3);
  if ( !result )
  {
    v5 = String2;
    if ( !String2 )
      v5 = String;
    v6 = (const char *)a1[23];
    if ( !v6 )
      v6 = String;
    v8 = v5;
    v7 = sub_100D6390(a1);
    return DevMsg(1, "%s (%s) was unable to point at an entity named: %s\n", v6, v7, v8);
  }
  return result;
}
