char *__thiscall sub_10272160(int this)
{
  char *result; // eax

  result = sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 820) == 1023 )
  {
    result = *(char **)(this + 800);
    if ( result )
      return (char *)sub_10271C40(this, *(const char **)(this + 800));
  }
  return result;
}
