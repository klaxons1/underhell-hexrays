int __thiscall sub_1000C810(_DWORD *this)
{
  bool v2; // zf
  int (__thiscall *v3)(_DWORD *); // edx
  int v4; // eax
  int (__thiscall *v5)(_DWORD *); // edx
  int result; // eax

  v2 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1184))(this) == 0;
  v3 = *(int (__thiscall **)(_DWORD *))(*this + 1136);
  if ( v2 )
  {
    this[504] = v3(this);
    if ( this[510] != -1 )
      this[510] = -1;
  }
  else
  {
    v4 = v3(this);
    if ( this[510] != v4 )
      this[510] = v4;
  }
  v2 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1188))(this) == 0;
  v5 = *(int (__thiscall **)(_DWORD *))(*this + 1140);
  if ( v2 )
  {
    result = v5(this);
    this[505] = result;
    if ( this[511] != -1 )
      this[511] = -1;
  }
  else
  {
    result = v5(this);
    if ( this[511] != result )
      this[511] = result;
  }
  return result;
}
