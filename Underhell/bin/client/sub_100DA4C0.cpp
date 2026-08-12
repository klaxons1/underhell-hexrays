int __thiscall sub_100DA4C0(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // [esp+0h] [ebp-8h]

  result = (int)a2;
  if ( a2 )
  {
    v4 = sub_1009EA30(a2);
    if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 520))(v4) )
      v5 = sub_1009E8A0(this + 3);
    else
      v5 = 0.0;
    *(float *)&v7 = v5;
    sub_1009E9B0(this, v7);
    result = sub_101BC880();
    if ( (_BYTE)result )
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
      return sub_101BCA60(v6);
    }
  }
  return result;
}
