int __thiscall sub_1042ADD0(_DWORD *this, int a2)
{
  int result; // eax

  result = this[6];
  if ( result )
  {
    for ( ; *(_DWORD *)(result + 20); result = *(_DWORD *)(result + 20) )
      ;
    *(_DWORD *)(result + 20) = a2;
  }
  else
  {
    result = a2;
    this[6] = a2;
  }
  return result;
}
