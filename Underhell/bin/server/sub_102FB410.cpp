int __thiscall sub_102FB410(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = this[906];
  if ( !v2 )
    return sub_10069910(this, a2);
  if ( a2 < 1000000000 && a2 != -1 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(v2, a2);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
  v4 = sub_1007DAF0((_DWORD *)(v3 + 4), a2);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(v2, v4);
}
