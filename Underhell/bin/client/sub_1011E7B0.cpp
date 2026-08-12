int __thiscall sub_1011E7B0(int *this, int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 380))(a2);
  if ( *this )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)*this + 12))(*this);
    if ( *this )
      (*(void (__thiscall **)(int))(*(_DWORD *)*this + 4))(*this);
  }
  *this = 0;
  if ( v3 )
    (**(void (__thiscall ***)(int))v3)(v3);
  *this = v3;
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
}
