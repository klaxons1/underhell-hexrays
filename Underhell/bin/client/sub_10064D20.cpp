char *__thiscall sub_10064D20(char *this, int a2)
{
  int v2; // edx
  char *i; // ecx
  char *result; // eax

  v2 = 0;
  for ( i = this + 4; ; i += 20 )
  {
    result = i - 4;
    if ( i[8] )
    {
      if ( *(_DWORD *)i == a2 )
        break;
    }
    if ( ++v2 >= 3 )
      return 0;
  }
  return result;
}
