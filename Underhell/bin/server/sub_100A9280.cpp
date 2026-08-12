int __thiscall sub_100A9280(_DWORD *this)
{
  char v2; // al
  int result; // eax
  bool v4; // sf
  int v5; // ecx

  if ( this )
    v2 = (_BYTE)this + 32;
  else
    v2 = 0;
  sub_1012CED0(v2);
  result = sub_100E20F0(this);
  v4 = (int)this[251] < 0;
  this[252] = 0;
  if ( v4 )
  {
    this[253] = this[249];
  }
  else
  {
    result = this[249];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[249]);
      this[249] = 0;
    }
    v5 = this[249];
    this[250] = 0;
    this[253] = v5;
  }
  return result;
}
