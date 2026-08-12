void __thiscall sub_10162BC0(int this, int *a2, int a3)
{
  int v4; // eax
  int v5; // edi
  double v6; // st7

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  v5 = this - 228;
  sub_100F0010(a2, this - 228, v4);
  if ( *(_DWORD *)(this + 32) == 1 )
    *(_DWORD *)(this + 140) = sub_100F0C50(this - 228, v5, this, "sprites/heatwave");
  else
    *(_DWORD *)(this + 140) = dword_1043DF20[0];
  *(float *)(this + 144) = 1.0 / *(float *)(this + 20);
  *(float *)(this + 148) = 0.0;
  v6 = *(float *)(this + 24) / *(float *)(this + 8);
  *(_DWORD *)(this + 136) = a2;
  *(float *)(this + 72) = v6;
  sub_10162730((float *)(this - 1424));
}
