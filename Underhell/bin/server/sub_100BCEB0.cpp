int __thiscall sub_100BCEB0(void *this, int a2)
{
  int result; // eax

  result = *(_DWORD *)this + *(_DWORD *)(*(_DWORD *)this + 176) + 12 * a2;
  if ( result )
    return *(_DWORD *)(result + 4);
  return result;
}
