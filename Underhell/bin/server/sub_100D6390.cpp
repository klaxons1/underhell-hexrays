const char *__thiscall sub_100D6390(_DWORD *this)
{
  const char *result; // eax

  if ( !this )
    return "<<null>>";
  result = (const char *)this[65];
  if ( !result )
  {
    result = (const char *)this[23];
    if ( !result )
      return String;
  }
  return result;
}
