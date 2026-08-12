int __thiscall sub_101DAE80(_DWORD *this, int a2, char *String1, char *String)
{
  int result; // eax

  result = _stricmp(String1, "contents");
  if ( !result )
  {
    result = atoi(String);
    this[1] = result;
  }
  return result;
}
