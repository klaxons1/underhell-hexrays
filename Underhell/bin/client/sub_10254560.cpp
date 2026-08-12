int __thiscall sub_10254560(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  bool i; // sf

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1020))(this, 0);
  result = this[70];
  if ( result >= 1 )
  {
    v3 = result - 1;
    this[70] = v3;
    if ( v3 >= 0 )
    {
      do
      {
        if ( !iswspace(*(_WORD *)(this[55] + 2 * this[70])) )
          break;
        i = --this[70] < 0;
      }
      while ( !i );
    }
    for ( i = --this[70] < 0; !i; i = --this[70] < 0 )
    {
      if ( iswspace(*(_WORD *)(this[55] + 2 * this[70])) )
        break;
    }
    ++this[70];
    sub_10251EC0(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  }
  return result;
}
