void __thiscall sub_1026BD70(_DWORD *this, int a2)
{
  int v3; // esi

  if ( a2 )
  {
    v3 = this[3] - 1;
    if ( v3 >= 0 )
    {
      while ( sub_10237C80((_DWORD *)(*this + 4 * v3)) != a2 )
      {
        if ( --v3 < 0 )
          return;
      }
      if ( this[3] - v3 - 1 > 0 )
        memcpy((void *)(*this + 4 * v3), (const void *)(*this + 4 * v3 + 4), 4 * (this[3] - v3 - 1));
      --this[3];
    }
  }
}
