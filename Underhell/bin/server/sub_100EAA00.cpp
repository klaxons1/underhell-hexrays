int __thiscall sub_100EAA00(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // esi

  v2 = this[64];
  v3 = this + 64;
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 664))(this, this + 64);
    *v3 = 0;
  }
  return sub_1012D9E0(this, v2, *v3);
}
