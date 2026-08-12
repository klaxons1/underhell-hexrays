void __thiscall sub_10188C70(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  double v5; // st7
  bool v6; // c0
  bool v7; // c3

  *(float *)(this + 896) = 0.0;
  v2 = *(_DWORD *)(this + 900);
  if ( v2 == 1 )
  {
    if ( *(float *)(this + 872) > (double)*(float *)(this + 564) )
    {
      v3 = *(float *)(this + 564) - *(float *)(this + 868);
LABEL_9:
      *(float *)(this + 896) = v3;
      goto LABEL_10;
    }
    v4 = *(_DWORD *)(this + 884);
    if ( v4 )
      *(_DWORD *)(this + 880) = v4;
  }
  else if ( v2 == -1 )
  {
    v5 = *(float *)(this + 872);
    v6 = v5 < *(float *)(this + 564);
    v7 = v5 == *(float *)(this + 564);
    *(_DWORD *)(this + 880) = *(_DWORD *)(this + 884);
    if ( !v6 && !v7 )
    {
      v3 = *(float *)(this + 872) - *(float *)(this + 564);
      goto LABEL_9;
    }
  }
LABEL_10:
  sub_100D8290((float *)this, -1.0);
  *(float *)(this + 868) = 0.0;
  *(float *)(this + 872) = 0.0;
  *(_DWORD *)(this + 900) = 0;
  *(_DWORD *)(this + 884) = 0;
  sub_100DD660(this, &flt_106F1CA8);
  sub_100D7260((float *)this, &flt_106F1CB4);
}
