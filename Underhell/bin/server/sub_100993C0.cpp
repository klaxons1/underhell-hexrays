char __thiscall sub_100993C0(_DWORD *this, int a2)
{
  char *v3; // eax
  char result; // al
  const char *v5; // eax

  v3 = (char *)this[53];
  if ( *(char **)(a2 + 260) == v3 )
    return 1;
  if ( !v3 )
    v3 = (char *)String;
  if ( (unsigned __int8)sub_100D6190(v3) )
    return 1;
  v5 = (const char *)this[53];
  if ( *(const char **)(a2 + 92) == v5 )
    return 1;
  if ( !v5 )
    v5 = String;
  result = sub_100D6240(v5);
  if ( result )
    return 1;
  return result;
}
