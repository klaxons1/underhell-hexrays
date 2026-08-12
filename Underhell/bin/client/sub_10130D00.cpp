int __thiscall sub_10130D00(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  sub_10131ED0(a2);
  result = a2 - 107;
  if ( a2 == 107 )
  {
    if ( this[98] )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this);
      if ( result )
      {
        if ( sub_10229D00(32) )
          v4 = sub_10229D20("NewSelection");
        else
          v4 = 0;
        sub_1022ACA0("NewSelection", this[99]);
        v5 = *this;
        v6 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 148))(this, v4, 0.0);
        return (*(int (__thiscall **)(_DWORD *, int))(v5 + 136))(this, v6);
      }
    }
  }
  else
  {
    result = a2 - 108;
    if ( a2 == 108 )
    {
      if ( this[98] )
        return sub_1026B010(this, this[100]);
    }
  }
  return result;
}
