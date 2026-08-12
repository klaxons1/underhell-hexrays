int __thiscall sub_1027E320(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a2;
  this[58] = a2;
  this[59] = a3;
  v4 = this[53];
  if ( v4 )
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v4 + 36))(v4, 107, 2, a2, a3);
  return result;
}
