int __thiscall sub_10258610(int *this)
{
  int result; // eax
  int v3; // eax
  bool i; // sf
  int v5; // eax

  result = this[74];
  if ( result >= 1 )
  {
    v3 = result - 1;
    this[74] = v3;
    if ( v3 >= 0 )
    {
      do
      {
        if ( !iswspace(*(_WORD *)(this[56] + 2 * this[74])) )
          break;
        i = --this[74] < 0;
      }
      while ( !i );
    }
    for ( i = --this[74] < 0; !i; i = --this[74] < 0 )
    {
      if ( iswspace(*(_WORD *)(this[56] + 2 * this[74])) )
        break;
    }
    v5 = *this;
    ++this[74];
    return (*(int (__thiscall **)(int *))(v5 + 16))(this);
  }
  return result;
}
