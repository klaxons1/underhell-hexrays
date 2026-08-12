void __thiscall sub_10034660(float *this, float *a2, float *a3, int a4)
{
  int v4; // esi

  if ( this[137] == *a2 && this[138] == a2[1] && this[139] == a2[2] )
    v4 = a4;
  else
    v4 = a4 | 1;
  if ( this[151] != *a3 || this[152] != a3[1] || this[153] != a3[2] )
    v4 |= 2u;
  if ( v4 )
    sub_1000F6C0((int)this, v4);
}
