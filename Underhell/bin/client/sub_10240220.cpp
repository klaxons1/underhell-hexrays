int __thiscall sub_10240220(unsigned int *this)
{
  unsigned int v1; // eax
  int v2; // edx
  int v3; // ecx

  v1 = *this;
  if ( *this == -1 )
    return 0;
  v2 = v1 & 0xFFFFF;
  if ( (v1 & 0xFFFFF) >= dword_10481998 )
    return 0;
  v3 = *(_DWORD *)(dword_1048198C + 8 * v2);
  if ( ((v3 ^ (v1 >> 20) & 0x7FF) & 0x7FFFFFFF) != 0 || (v3 & 0x80000000) == 0x80000000 )
    return 0;
  else
    return *(_DWORD *)(dword_1048198C + 8 * v2 + 4);
}
