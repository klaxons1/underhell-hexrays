char __thiscall sub_1009AD20(_DWORD *this)
{
  char result; // al
  int v2; // eax
  char *v3; // esi

  if ( (int)this[334] <= 0 )
    return 0;
  v2 = this[331];
  v3 = *(char **)(v2 + 8);
  if ( v3 )
  {
    result = *v3;
    if ( *v3 )
    {
      while ( result != 10 && (result != 47 || v3[1] != 47) )
      {
        if ( !isspace(result) || isalnum(*v3) )
          return 1;
        result = *++v3;
        if ( !result )
          return result;
      }
    }
  }
  else
  {
    Error("AI_ResponseSystem:  Unxpected TokenWaiting() with NULL buffer in %s", *(const char **)(v2 + 4));
  }
  return 0;
}
