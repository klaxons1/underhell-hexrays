int __thiscall sub_10130C80(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  result = sub_10131E80(a2);
  if ( a2 == 107 )
  {
    result = (*(int (__thiscall **)(int *))(*this + 148))(this);
    if ( result )
    {
      if ( sub_10229D00(32) )
        v4 = sub_10229D20("NewMouseReleased");
      else
        v4 = 0;
      sub_1022ACA0("NewMouseReleased", this[99]);
      v5 = *this;
      v6 = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 148))(this, v4, 0.0);
      return (*(int (__thiscall **)(int *, int))(v5 + 136))(this, v6);
    }
  }
  return result;
}
