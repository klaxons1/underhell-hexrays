int __thiscall sub_100F5C20(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // eax

  result = a2;
  if ( a2 )
  {
    result = sub_100CF660(this, a2, a3);
    v5 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 1332))(this);
      if ( !result )
      {
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 1244))(this, v5);
        if ( (_BYTE)result )
        {
          if ( sub_100CF460(this) )
          {
            v6 = sub_100CF460(this);
            result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 980))(v6);
            if ( !(_BYTE)result )
              return result;
            sub_101EDFB0(this);
          }
          return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 964))(this, v5, 0);
        }
      }
    }
  }
  return result;
}
