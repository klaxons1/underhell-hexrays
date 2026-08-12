int __thiscall sub_10164B30(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  int v5; // edi

  v5 = this[906];
  this[906] = 0;
  if ( v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 32))(v5);
    sub_1004AF00(this);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2224))(this, v5, 0);
  }
  return sub_100427C0(this, a2, a3, a4);
}
