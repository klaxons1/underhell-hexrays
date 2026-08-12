const char *__thiscall sub_100634F0(int *this, int a2)
{
  if ( a2 < 0 || a2 >= *this )
    return String;
  else
    return (const char *)this[a2 + 258];
}
