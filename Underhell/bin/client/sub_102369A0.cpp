int __thiscall sub_102369A0(_DWORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 292))(this);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 528))(this);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 288))(this);
      if ( !(_BYTE)result )
      {
        if ( this[12] )
        {
          sub_1025D420();
          sub_1025D9F0(this);
        }
        return (*(int (__thiscall **)(_DWORD *))(*this + 392))(this);
      }
    }
  }
  return result;
}
