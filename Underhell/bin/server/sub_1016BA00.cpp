int __thiscall sub_1016BA00(int *this)
{
  int v2; // edi
  int result; // eax
  int v4; // ebx

  v2 = 0;
  if ( this[3] <= 0 )
  {
    this[3] = 0;
  }
  else
  {
    do
    {
      result = *this;
      v4 = *(_DWORD *)(*this + 4 * v2);
      if ( v4 )
      {
        sub_1016B610(*(_DWORD **)(*this + 4 * v2));
        result = sub_10184660(v4);
      }
      ++v2;
    }
    while ( v2 < this[3] );
    this[3] = 0;
  }
  return result;
}
