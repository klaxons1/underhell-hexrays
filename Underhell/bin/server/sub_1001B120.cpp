void __thiscall sub_1001B120(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx

  v2 = this[3] - 1;
  if ( v2 >= 0 )
  {
    v3 = 36 * v2;
    do
    {
      if ( !(unsigned __int8)sub_10074090(v3 + *this) )
      {
        if ( this[3] - v2 - 1 > 0 )
          memcpy((void *)(v3 + *this), (const void *)(v3 + *this + 36), 36 * (this[3] - v2 - 1));
        --this[3];
      }
      v3 -= 36;
      --v2;
    }
    while ( v2 >= 0 );
  }
}
