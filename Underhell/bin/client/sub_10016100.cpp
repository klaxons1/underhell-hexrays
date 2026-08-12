int __thiscall sub_10016100(int *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    v3 = -1;
  v4 = this[302];
  if ( this[v4 + 306] != v3 )
    this[v4 + 306] = v3;
  if ( a2 )
    this[339] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    this[339] = -1;
  result = sub_10015BC0(this);
  a2[78] |= 0x80u;
  return result;
}
