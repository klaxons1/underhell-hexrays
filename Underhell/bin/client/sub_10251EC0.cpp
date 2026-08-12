void __thiscall sub_10251EC0(_DWORD *this)
{
  int v1; // eax

  if ( !*((_BYTE *)this + 341) && *((_BYTE *)this + 380) )
  {
    v1 = this[70];
    if ( v1 < this[94] )
    {
      if ( v1 < 0 )
        this[70] = 0;
      this[94] = this[70];
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
  }
}
