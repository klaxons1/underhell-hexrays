int __thiscall sub_1024EE80(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int result; // eax

  v3 = this[97];
  if ( a2 != v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 300))(v3);
    v4 = this[86];
    this[97] = a2;
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 1064))(v4, a2);
  }
  return result;
}
