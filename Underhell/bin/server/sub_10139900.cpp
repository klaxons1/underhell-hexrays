void __thiscall sub_10139900(int this)
{
  int v1; // eax
  double v2; // st7
  bool v3; // zf
  float v4; // [esp+0h] [ebp-8h]

  v1 = *(_DWORD *)(this + 248);
  if ( (v1 & dword_10621478) != 0 )
    *(_DWORD *)(this + 808) |= dword_1062147C;
  if ( (v1 & dword_10621480) != 0 )
    *(_DWORD *)(this + 808) |= dword_10621484;
  if ( (v1 & dword_10621488) != 0 )
    *(_DWORD *)(this + 808) |= dword_1062148C;
  if ( (v1 & dword_10621490) != 0 )
    *(_DWORD *)(this + 808) |= dword_10621494;
  if ( (v1 & dword_10621498) != 0 )
    *(_DWORD *)(this + 808) |= dword_1062149C;
  v2 = 0.0;
  if ( 0.0 == *(float *)(this + 812) )
  {
    *(float *)(this + 812) = 1.0;
  }
  else if ( *(float *)(this + 812) > 10.0 )
  {
    *(float *)(this + 812) = 10.0;
  }
  if ( *(float *)(this + 816) <= 0.9 )
  {
    if ( *(float *)(this + 816) >= 0.0 )
      v2 = *(float *)(this + 816);
  }
  else
  {
    v2 = 0.9;
  }
  v3 = *(_BYTE *)(this + 800) == 0;
  *(float *)(this + 816) = v2;
  if ( v3 )
  {
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v4, 0);
  }
}
