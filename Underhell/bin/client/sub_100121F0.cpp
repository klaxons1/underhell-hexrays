int __thiscall sub_100121F0(_DWORD *this, int *a2, int a3, int a4)
{
  int v5; // eax

  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 788))(this) )
    return sub_1000E1C0(this, a2, a3, a4);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 788))(this);
  return (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v5 + 104))(v5, a2, a3, a4);
}
