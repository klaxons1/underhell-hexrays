int __thiscall sub_10241B50(unsigned int *this)
{
  int v2; // eax
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 288))(this) )
  {
    v2 = sub_10240220(this + 33);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 68))(v2);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(unsigned int *, int, int))(*this + 12))(this, 1, 1);
  }
  else
  {
    sub_10241250(this, (int)this);
    return (*(int (__thiscall **)(unsigned int *))(*this + 484))(this);
  }
  return result;
}
