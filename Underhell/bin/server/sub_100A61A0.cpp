int __thiscall sub_100A61A0(int *this)
{
  int result; // eax

  result = *this;
  if ( *this )
    return *(_DWORD *)(result + 32);
  return result;
}
