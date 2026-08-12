void __thiscall sub_100250E0(float *this, int a2, int a3)
{
  int v4; // esi
  float *v5; // edi

  if ( a2 )
  {
    v4 = 0;
    if ( sub_10126D90(a2) > 0 )
    {
      v5 = this + 351;
      do
        *(float *)(a3 + 4 * v4++) = *v5++;
      while ( v4 < sub_10126D90(a2) );
    }
  }
}
