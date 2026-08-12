int __thiscall sub_10109E70(_DWORD *this, int a2, int ArgList, int a4, int a5)
{
  int result; // eax

  result = this[13];
  if ( result == this[6] )
    return sub_10109E10((int)this, "binary (%i bytes)", ArgList);
  return result;
}
