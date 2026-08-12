void __thiscall sub_1017ADE0(int this)
{
  double v1; // st7
  double v2; // st7

  if ( *(float *)(this + 804) == *(float *)(this + 800) )
  {
    *(float *)(this + 800) = 0.0;
    *(float *)(this + 804) = 1.0;
  }
  v1 = *(float *)(this + 804);
  *(_BYTE *)(this + 816) = 1;
  if ( v1 < *(float *)(this + 800) )
  {
    v2 = *(float *)(this + 800);
    *(float *)(this + 800) = *(float *)(this + 804);
    *(float *)(this + 804) = v2;
  }
}
