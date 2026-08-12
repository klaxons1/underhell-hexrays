void __thiscall sub_1007E270(_DWORD *this)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // edx

  v1 = this[7];
  if ( v1 != -1 )
  {
    v2 = (this[1] > 0) - 1;
    if ( (int)this[1] > 0 )
    {
      do
      {
        if ( v2 >= 0 && v2 < this[1] && v2 <= v1 )
        {
          v3 = *this + 8 * v2;
          if ( *(unsigned __int16 *)(v3 + 4) != v2 || *(unsigned __int16 *)(v3 + 6) == v2 )
          {
            *(_WORD *)(v3 + 4) = v2;
            *(_WORD *)(v3 + 6) = *((_WORD *)this + 10);
            this[5] = v2;
          }
        }
        v1 = this[7];
        if ( v2 == v1 )
          break;
        if ( ++v2 < 0 || v2 >= this[1] )
          v2 = -1;
      }
      while ( v2 != -1 );
    }
    this[3] = 0xFFFF;
    this[4] = 0xFFFF;
    this[6] = 0;
  }
}
