int __thiscall sub_1012D240(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( (*(_DWORD *)(a2 + 256) & 0x10000) != 0 )
    return sub_1012CDA0(this, a2);
  return result;
}
