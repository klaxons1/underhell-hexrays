int __thiscall sub_10251B80(_DWORD *this)
{
  int result; // eax
  int v3; // edx
  int v4; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  if ( result > this[76] )
  {
    v3 = result + this[77];
    v4 = *this;
    *((_BYTE *)this + 292) = *((_BYTE *)this + 292) == 0;
    this[76] = v3;
    return (*(int (__thiscall **)(_DWORD *))(v4 + 16))(this);
  }
  return result;
}
