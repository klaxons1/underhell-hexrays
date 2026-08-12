char __thiscall sub_103027D0(_DWORD *this, int a2, char a3)
{
  int v4; // edi

  if ( a2 != (*(int (__thiscall **)(_DWORD *))(*this + 1364))(this)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2)
    || a3 )
  {
    return 0;
  }
  v4 = this[906];
  this[906] = 0;
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
    sub_1004AF00(this);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 2224))(this, v4, 0);
  }
  return 1;
}
