int __thiscall sub_101E4820(_DWORD *this, char a2)
{
  unsigned int v2; // eax
  int *v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  int result; // eax

  v2 = this[876];
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (this[876] & 0xFFF) + 1], v4 = v2 >> 12, off_1061BE18[4 * (this[876] & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * (this[876] & 0xFFF) + 2] == v4 )
      v5 = *(_DWORD *)(*v3 + 24);
    else
      v5 = MEMORY[0x18];
  }
  else
  {
    v5 = this[6];
  }
  result = 2 * (a2 == 0) - 1 + (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
  if ( result > *(_DWORD *)(dword_106B31C8 + 20) )
    return 1;
  if ( result < 1 )
    return *(_DWORD *)(dword_106B31C8 + 20);
  return result;
}
