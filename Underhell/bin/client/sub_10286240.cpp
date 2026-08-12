int __thiscall sub_10286240(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  int (__thiscall *v6)(_DWORD *); // edx
  int result; // eax

  v3 = this[60] - this[62];
  v4 = a2;
  v5 = this[61];
  if ( a2 > v3 )
    v4 = v3;
  if ( v4 < this[59] )
    v4 = this[59];
  v6 = *(int (__thiscall **)(_DWORD *))(*this + 816);
  this[61] = v4;
  result = v6(this);
  if ( this[61] != v5 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 824))(this);
  return result;
}
