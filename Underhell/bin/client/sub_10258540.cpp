int __thiscall sub_10258540(_DWORD *this)
{
  int v2; // eax

  if ( ++this[74] < this[59] )
  {
    do
    {
      if ( iswspace(*(_WORD *)(this[56] + 2 * this[74])) )
        break;
      ++this[74];
    }
    while ( this[74] < this[59] );
  }
  if ( ++this[74] < this[59] )
  {
    do
    {
      if ( !iswspace(*(_WORD *)(this[56] + 2 * this[74])) )
        break;
      ++this[74];
    }
    while ( this[74] < this[59] );
  }
  v2 = this[59];
  if ( this[74] > v2 )
    this[74] = v2;
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
