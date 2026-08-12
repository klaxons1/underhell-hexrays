int __thiscall sub_102580F0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx

  v2 = this[88];
  v3 = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = this[85]; *(_DWORD *)(*(_DWORD *)i + 208) <= a2; i += 4 )
  {
    if ( ++v3 >= v2 )
      return -1;
  }
  return v3 - 1;
}
