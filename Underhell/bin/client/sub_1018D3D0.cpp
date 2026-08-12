void __thiscall sub_1018D3D0(float *this, float *a2)
{
  double v2; // st6
  double v3; // st7
  float *v4; // ecx

  v2 = a2[1];
  if ( *a2 != this[852] || v2 != this[853] || a2[2] != this[854] )
  {
    v3 = a2[2];
    v4 = this + 88;
    v4[764] = *a2;
    v4[765] = v2;
    v4[766] = v3;
    sub_1008F760((int *)v4);
  }
}
