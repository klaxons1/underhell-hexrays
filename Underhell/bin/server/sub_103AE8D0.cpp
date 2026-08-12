char __thiscall sub_103AE8D0(_DWORD *this)
{
  int v1; // eax
  bool v2; // zf
  _DWORD *v3; // ecx

  v1 = (int)this;
  v2 = this[955] == 0;
  v3 = this + 955;
  if ( v2 )
    LOBYTE(v1) = sub_101BDBA0(v3, v1, 10, (int)off_10679D8C);
  return v1;
}
