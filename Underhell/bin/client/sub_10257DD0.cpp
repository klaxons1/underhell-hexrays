int __thiscall sub_10257DD0(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v4; // edi

  v2 = a2;
  if ( this[69] == 1 )
  {
    v4 = (_DWORD *)this[66];
    if ( *v4 == this[91] || *v4 == *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 228))(this, &a2) )
      *(_DWORD *)this[66] = v2;
  }
  return sub_10237590(this, v2);
}
