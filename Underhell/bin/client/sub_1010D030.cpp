int __thiscall sub_1010D030(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  double v6; // st7
  int v7; // eax
  int v8; // [esp+0h] [ebp-Ch]

  result = (int)a2;
  if ( a2 )
  {
    v4 = sub_1009EA30(a2);
    result = sub_100422D0();
    if ( result )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 296))(result);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 296))(v4) == v5 )
        v6 = 1.0;
      else
        v6 = 0.0;
      *(float *)&v8 = v6;
      sub_1009E9B0(this, v8);
      result = sub_101BC880();
      if ( (_BYTE)result )
      {
        v7 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
        return sub_101BCA60(v7);
      }
    }
  }
  return result;
}
