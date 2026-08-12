int __cdecl sub_100D5D70(int *a1, char *String)
{
  int result; // eax
  int v3; // esi
  int v4; // edx

  result = -1;
  if ( String && *String )
    result = atoi(String);
  v3 = *a1;
  if ( result != *a1 )
  {
    v4 = a1[1];
    if ( result != v4 )
    {
      if ( !v3 )
      {
        *a1 = result;
        goto LABEL_10;
      }
      if ( !v4 )
      {
        a1[1] = result;
LABEL_10:
        result = a1[2];
        if ( (result & 1) == 0 )
        {
          result |= 3u;
          a1[2] = result;
        }
        return result;
      }
      if ( *String )
        return DevMsg(1, "Three keys down for a button '%c' '%c' '%c'!\n", v3, v4, String);
    }
  }
  return result;
}
