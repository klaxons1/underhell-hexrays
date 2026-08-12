int __thiscall sub_10013260(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // ecx
  int v9; // eax

  v5 = this[1032];
  if ( v5 != -1
    && (v6 = (int *)((char *)off_103DCD74 + 16 * (this[1032] & 0xFFF) + 4), v6[1] == v5 >> 12)
    && (v7 = *v6) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 332))(v7) )
  {
    sub_100131D0(this);
    return sub_101EE040(this + 1083, a2, a3, a4);
  }
  else
  {
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 536))(this);
    return sub_101EE040(v9, a2, a3, a4);
  }
}
