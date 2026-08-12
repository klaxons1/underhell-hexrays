int __thiscall sub_1000CD20(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  int v4; // ecx

  if ( (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 788))(a2) == this )
    v3 = a2[4000] != 0 ? 64 : 2;
  else
    v3 = 1;
  v4 = this[506];
  if ( v4 != v3 )
  {
    this[506] = v3;
    (*(void (__thiscall **)(_DWORD *, int))(*this + 924))(this, v4);
  }
  return 1;
}
