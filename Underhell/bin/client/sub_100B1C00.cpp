void __thiscall sub_100B1C00(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // edx

  if ( a2 == 1 )
  {
    if ( !a4 )
      return;
    v4 = 0;
    if ( (int)this[66] > 0 )
    {
      v5 = (_DWORD *)this[63];
      while ( *v5 != 4 || v5[3] != a3 )
      {
        ++v4;
        v5 += 6;
        if ( v4 >= this[66] )
          goto LABEL_10;
      }
      *(float *)(this[63] + 24 * v4 + 4) = 0.0;
      this[69] = v4;
    }
  }
LABEL_10:
  sub_100B1A50((int)this, a2, a3, 0, a4, 0);
}
