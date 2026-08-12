int __thiscall sub_10136D00(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ecx
  int v5; // edi
  int result; // eax
  int v7; // ecx
  int v8; // edx

  if ( this[1] )
  {
    do
    {
      v2 = this[1];
      v3 = *(_DWORD *)(v2 + 44);
      if ( v2 )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
      this[1] = v3;
    }
    while ( v3 );
  }
  if ( this[2] )
  {
    do
    {
      v4 = this[2];
      v5 = *(_DWORD *)(v4 + 44);
      if ( v4 )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      this[2] = v5;
    }
    while ( v5 );
  }
  result = this[7];
  this[3] = 0;
  if ( result )
  {
    this[6] = this[4];
    v7 = 0;
    this[5] = 0;
    if ( result > 0 )
    {
      v8 = 0;
      do
      {
        result = this[4];
        *(_DWORD *)(result + v8) = result + v8 + 32;
        ++v7;
        v8 += 32;
      }
      while ( v7 < this[7] );
    }
    *(_DWORD *)(32 * this[7] + this[4] - 32) = 0;
  }
  return result;
}
