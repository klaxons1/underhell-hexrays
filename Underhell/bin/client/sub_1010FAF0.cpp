int __thiscall sub_1010FAF0(int *this)
{
  int result; // eax
  int i; // edx
  int v3; // esi

  result = this[5];
  if ( result <= *((_DWORD *)off_103DC81C + 6) )
  {
    for ( i = this[3] - 1; i >= 0; --i )
    {
      result = *this;
      if ( *(_DWORD *)(*this + 8 * i + 4) != *((_DWORD *)off_103DC81C + 6) )
      {
        v3 = this[3];
        if ( v3 > 0 )
        {
          *(_DWORD *)(result + 8 * i) = *(_DWORD *)(result + 8 * v3 - 8);
          *(_DWORD *)(result + 8 * i + 4) = *(_DWORD *)(result + 8 * v3 - 4);
          --this[3];
        }
      }
    }
  }
  else
  {
    this[3] = 0;
  }
  return result;
}
