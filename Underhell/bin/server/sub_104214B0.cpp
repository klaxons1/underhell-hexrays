int __thiscall sub_104214B0(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx

  result = this[7];
  if ( result != -1 )
  {
    v3 = (this[2] > 0) - 1;
    if ( (int)this[2] > 0 )
    {
      do
      {
        if ( v3 >= 0 && v3 < this[2] && v3 <= result && sub_1041F660(this, v3) != v3 )
        {
          v4 = 48 * v3;
          sub_10420DE0(48 * v3 + this[1] + 20);
          *(_DWORD *)(v4 + this[1] + 4) = this[6];
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
