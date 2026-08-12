void __thiscall sub_102586A0(_DWORD *this, int a2, _WORD *a3, unsigned int a4)
{
  _WORD *v4; // edx
  int v5; // esi
  int i; // eax

  v4 = a3;
  if ( a3 )
  {
    v5 = (a4 >> 1) + a2 - 1;
    for ( i = a2; i < v5; ++v4 )
    {
      if ( i >= this[59] )
        break;
      *v4 = *(_WORD *)(this[56] + 2 * i++);
    }
    a3[i - a2] = 0;
    a3[(a4 >> 1) - 1] = 0;
  }
}
