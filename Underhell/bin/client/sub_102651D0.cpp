int __thiscall sub_102651D0(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax

  result = this[7];
  if ( result != -1 )
  {
    v3 = (this[2] > 0) - 1;
    if ( (int)this[2] > 0 )
    {
      do
      {
        if ( v3 >= 0 && v3 < this[2] && v3 <= result && sub_10263990(this, v3) != v3 )
        {
          v4 = 24 * v3;
          *(_DWORD *)(this[1] + v4 + 4) = this[6];
          *(_DWORD *)(v4 + this[1]) = v3;
          this[6] = v3;
        }
        result = this[7];
        if ( v3 == result )
          break;
        if ( ++v3 < 0 || v3 >= this[2] )
          v3 = -1;
      }
      while ( v3 != -1 );
    }
    this[4] = -1;
    this[5] = 0;
  }
  return result;
}
