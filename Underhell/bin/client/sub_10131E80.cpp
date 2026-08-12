int __thiscall sub_10131E80(_BYTE *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 95) + 360))(*((_DWORD *)this + 95), this + 239);
  if ( a2 == 107 )
  {
    if ( this[386] )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 772))(this, *((_DWORD *)this + 68));
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
    }
  }
  return result;
}
