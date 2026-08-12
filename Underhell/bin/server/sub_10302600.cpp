int __thiscall sub_10302600(_DWORD *this)
{
  int v2; // edi

  v2 = this[906];
  this[906] = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
    sub_1004AF00(this);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2224))(this, v2, 0);
  }
  return sub_10042730();
}
