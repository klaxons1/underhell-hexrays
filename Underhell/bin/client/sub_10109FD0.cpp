int __thiscall sub_10109FD0(_DWORD *this, int a2, const char *ArgList, int a4)
{
  int result; // eax

  result = this[13];
  if ( result == this[6] )
    return sub_10109E10((int)this, "string (%s)", ArgList);
  return result;
}
