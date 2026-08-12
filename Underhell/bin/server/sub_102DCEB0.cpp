int __thiscall sub_102DCEB0(_DWORD *this, int a1)
{
  unsigned int v2; // eax
  int *v3; // edx
  const char *v4; // eax
  int v5; // esi
  int v6; // eax

  v2 = this[1286];
  if ( v2 == -1 )
    return sub_100F5B50(a1);
  v3 = &off_1061BE18[4 * (this[1286] & 0xFFF) + 1];
  if ( off_1061BE18[4 * (this[1286] & 0xFFF) + 2] != v2 >> 12 || !*v3 )
    return sub_100F5B50(a1);
  v4 = sub_1014EC00(*v3);
  v5 = *(_DWORD *)dword_106BAFF8;
  v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, v4);
  return (*(int (__thiscall **)(int, int))(v5 + 20))(dword_106BAFF8, v6);
}
