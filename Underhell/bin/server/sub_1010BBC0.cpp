int __thiscall sub_1010BBC0(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = this[5];
  for ( result = 0; v1; ++result )
    v1 = *(_DWORD *)(v1 + 24);
  return result;
}
