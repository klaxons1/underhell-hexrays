int __thiscall sub_1027A0C0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a2;
  if ( a2 >= 0 && a2 < this[56] )
  {
    v4 = *(_DWORD *)(this[53] + 36 * a2 + 8);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 816))(v4, a3);
  }
  return result;
}
