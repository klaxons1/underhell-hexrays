const char *__thiscall sub_10035360(int *this, int a2)
{
  if ( a2 < 0 || a2 >= *this )
    return Locale;
  else
    return (const char *)this[a2 + 258];
}
