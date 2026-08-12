int __thiscall sub_100DCD50(_BYTE *this, char a2)
{
  _BYTE *v2; // esi
  int result; // eax

  v2 = this + 447;
  if ( a2 != this[447] )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 672))(this, this + 447);
    *v2 = a2;
  }
  return result;
}
