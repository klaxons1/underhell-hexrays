void __thiscall sub_1017CE20(int this, int a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  float v5; // [esp+0h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  if ( v2 <= *(float *)(this + 804) )
  {
    if ( v2 >= *(float *)(this + 800) )
      v3 = v2;
    else
      v3 = *(float *)(this + 800);
  }
  else
  {
    v3 = *(float *)(this + 804);
  }
  if ( v2 == v3 || (*(_BYTE *)(this + 248) & 1) == 0 )
  {
    v4 = (v2 - *(float *)(this + 800))
       * (*(float *)(this + 812) - *(float *)(this + 808))
       / (*(float *)(this + 804) - *(float *)(this + 800))
       + *(float *)(this + 808);
    if ( (*(_BYTE *)(this + 248) & 2) != 0 )
    {
      if ( v4 <= *(float *)(this + 812) )
      {
        if ( v4 < *(float *)(this + 808) )
          v4 = *(float *)(this + 808);
      }
      else
      {
        v4 = *(float *)(this + 812);
      }
    }
    if ( *(_BYTE *)(this + 816) == 1 )
    {
      v5 = v4;
      sub_10108AE0((int *)(this + 820), SLOBYTE(v5), *(_DWORD *)a2, this);
    }
  }
}
