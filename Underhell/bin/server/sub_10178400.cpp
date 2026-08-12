void __thiscall sub_10178400(_BYTE *this, unsigned int a2, float *a3)
{
  float *v3; // edx

  if ( a2 <= 1 )
  {
    v3 = (float *)&this[12 * a2 + 540];
    if ( *a3 != *v3 || a3[1] != v3[1] || a3[2] != v3[2] )
      this[568] = 1;
    *v3 = *a3;
    v3[1] = a3[1];
    v3[2] = a3[2];
  }
}
