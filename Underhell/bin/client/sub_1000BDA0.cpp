int __thiscall sub_1000BDA0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi

  result = (*(int (__thiscall **)(_DWORD *))(*this + 744))(this);
  if ( (_BYTE)result )
  {
    if ( a2 >= 0 )
    {
      result = sub_1000BAC0(this);
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 504))(result);
        if ( (_BYTE)result )
        {
          result = sub_10045780(this[492]);
          v4 = result;
          if ( result )
          {
            (*(void (__thiscall **)(_DWORD *))(*this + 860))(this);
            return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 744))(v4, a2);
          }
        }
      }
    }
  }
  return result;
}
