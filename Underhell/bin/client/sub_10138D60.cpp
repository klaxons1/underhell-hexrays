int __thiscall sub_10138D60(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  v2 = CommandLine_Tier0(this);
  v3 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v2 + 28))(v2, "-particles", -1);
  if ( v3 < 0 )
  {
    this[7] = 2048;
  }
  else
  {
    if ( v3 <= 512 )
      v3 = 512;
    this[7] = v3;
  }
  this[4] = sub_100DDA40((unsigned __int64)(unsigned int)this[7] >> 27 != 0 ? -1 : 32 * this[7]);
  return (*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
}
