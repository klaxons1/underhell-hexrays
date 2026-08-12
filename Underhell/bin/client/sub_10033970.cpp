void __thiscall sub_10033970(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // edi

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 1300))(this);
  sub_1003B5B0(v2);
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = (_DWORD *)this[485];
  if ( v3 && *v3 )
  {
    v4 = this[452];
    if ( v4 >= sub_10126D70(v3) )
      sub_10029860((int)this, 0);
  }
}
