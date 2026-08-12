int __thiscall sub_102B7200(_DWORD *this, int a2)
{
  if ( this[300] || !this[106] )
    return 0;
  (*(void (__thiscall **)(_DWORD *, int))(*this + 600))(this, a2);
  return 1;
}
