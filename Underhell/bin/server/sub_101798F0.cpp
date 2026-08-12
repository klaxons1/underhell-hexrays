unsigned int __thiscall sub_101798F0(_DWORD *this, char *String2)
{
  _DWORD *v3; // eax
  unsigned int v4; // eax
  unsigned int result; // eax

  v3 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( v3 )
    this[205] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    this[205] = -1;
  v4 = this[205];
  if ( v4 == -1 )
    return Warning("logic_measure_movement: Unable to find movement target entity %s\n", String2);
  result = v4 >> 12;
  if ( off_1061BE18[4 * (this[205] & 0xFFF) + 2] != result || !off_1061BE18[4 * (this[205] & 0xFFF) + 1] )
    return Warning("logic_measure_movement: Unable to find movement target entity %s\n", String2);
  return result;
}
