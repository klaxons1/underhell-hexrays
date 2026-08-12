int __thiscall sub_102E85B0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2;
  if ( !a2 )
    return sub_1015C080(this, a2);
  v3 = *(_DWORD *)(a2 + 76);
  if ( !v3 || *(_DWORD *)(v3 + 420) != 32 )
    return sub_1015C080(this, a2);
  return result;
}
