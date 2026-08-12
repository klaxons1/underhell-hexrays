const char *__thiscall sub_100019D0(_DWORD *this)
{
  const char *result; // eax

  result = (const char *)this[2];
  if ( !result )
    return "unnamed";
  return result;
}
