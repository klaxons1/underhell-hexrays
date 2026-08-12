int __thiscall sub_1003CC70(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebx

  result = (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]);
  if ( result )
  {
    result = sub_100422D0();
    v4 = result;
    if ( result )
    {
      if ( !*((_BYTE *)this + 188) )
      {
        result = sub_101079E0(this + 37);
        if ( !(_BYTE)result )
          return result;
        result = sub_101079F0(this + 37);
        if ( *(_DWORD *)(v4 + 80) - 1 != result )
          return result;
        *((_BYTE *)this + 188) = 1;
      }
      result = (*(int (__thiscall **)(_DWORD *))(*this + 428))(this);
      if ( !(_BYTE)result )
      {
        result = (*(int (__thiscall **)(_DWORD *))(*this + 460))(this);
        if ( (_BYTE)result )
        {
          if ( !this[275] )
            return sub_1003C660(this);
        }
      }
    }
  }
  return result;
}
