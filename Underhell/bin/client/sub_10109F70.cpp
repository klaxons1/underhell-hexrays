int __thiscall sub_10109F70(_DWORD *this, int a2, _BYTE *a3, int a4, int a5)
{
  int result; // eax
  const char *v6; // eax

  result = this[13];
  if ( result == this[6] )
  {
    v6 = "true";
    if ( !*a3 )
      v6 = "false";
    return sub_10109E10((int)this, "bool (%s)", v6);
  }
  return result;
}
