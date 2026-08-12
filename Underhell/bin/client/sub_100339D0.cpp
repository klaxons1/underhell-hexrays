int __thiscall sub_100339D0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // [esp+4h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v7 = sub_10034480(this);
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 1300))(this);
    v5 = v4;
    if ( v7 != v4 )
      sub_1003B5B0(v4);
    sub_1002A520(this, a2);
    if ( this[506] )
    {
      sub_1022ACA0("worldmodel", 1);
      if ( this[506] == 2 )
      {
        v6 = sub_1022A910("baseentity", 0);
        *(_BYTE *)(v6 + 16) |= 1u;
      }
    }
    else
    {
      *(_DWORD *)(sub_1022A910("baseentity", 0) + 8) = -1;
    }
    result = v7;
    if ( v7 != v5 )
      return sub_1003B5B0(v7);
  }
  return result;
}
