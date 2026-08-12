const char *__thiscall sub_1011E4F0(void *this, char *String1, unsigned __int8 a3)
{
  const char *result; // eax

  if ( a3 == 67 )
    return String1;
  if ( _stricmp(String1, "Impact.Concrete") )
    return String1;
  if ( a3 == 45 )
    return String;
  result = (const char *)sub_1011E490((int)this, a3);
  if ( !result )
    return String1;
  return result;
}
