int __thiscall sub_100B99B0(int *this)
{
  int result; // eax
  int i; // ecx

  result = *this;
  if ( *this )
  {
    for ( i = *(_DWORD *)(result + 40); i; i = *(_DWORD *)(i + 40) )
      result = i;
  }
  return result;
}
