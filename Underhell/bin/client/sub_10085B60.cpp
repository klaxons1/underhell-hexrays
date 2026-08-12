int __thiscall sub_10085B60(_DWORD *this)
{
  int i; // eax
  int result; // eax

  for ( i = 0; i < this[72]; ++i )
    *(_BYTE *)(i + this[74]) = 0;
  result = dword_1042C0F4;
  if ( *(_DWORD *)(dword_1042C0F4 + 48) )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041318C + 88))(dword_1041318C, 0xFFFF);
  return result;
}
