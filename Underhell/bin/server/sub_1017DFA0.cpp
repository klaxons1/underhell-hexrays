void __thiscall sub_1017DFA0(float *this, int a2)
{
  double v2; // st7

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  this[200] = v2;
  if ( v2 > this[201] )
    this[201] = v2;
  sub_1017D2B0((unsigned int)this, *(_DWORD *)a2, this[203]);
}
