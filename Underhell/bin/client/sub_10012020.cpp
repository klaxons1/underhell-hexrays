int __thiscall sub_10012020(_DWORD *this, const char *a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // eax

  result = (int)a2;
  if ( a2 )
  {
    result = sub_1000A680(this, a2, a3);
    v5 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 844))(this);
      if ( !result )
      {
        result = (*(int (__thiscall **)(_DWORD *, int))(*this + 936))(this, v5);
        if ( (_BYTE)result )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*this + 788))(this) )
          {
            v6 = (*(int (__thiscall **)(_DWORD *))(*this + 788))(this);
            result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 888))(v6);
            if ( !(_BYTE)result )
              return result;
            sub_100423B0(this);
          }
          return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 780))(this, v5, 0);
        }
      }
    }
  }
  return result;
}
