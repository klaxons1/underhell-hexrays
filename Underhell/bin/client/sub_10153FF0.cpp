float *__thiscall sub_10153FF0(float *this)
{
  double v2; // st7
  int v3; // ecx

  sub_1003D000((int)this);
  *(_DWORD *)this = &CSnowFallManager::`vftable';
  *((_DWORD *)this + 1) = &CSnowFallManager::`vftable';
  *((_DWORD *)this + 2) = &CSnowFallManager::`vftable';
  *((_DWORD *)this + 3) = &CSnowFallManager::`vftable';
  this[298] = -1.0;
  this[299] = 0.0;
  this[303] = 0.0;
  this[301] = 0.0;
  v2 = 0.0;
  this[300] = -1.0;
  this[348] = 0.0;
  this[349] = 0.0;
  this[350] = 0.0;
  this[351] = 0.0;
  this[352] = 0.0;
  this[302] = 0.0;
  v3 = *((_DWORD *)this + 303);
  if ( v3 )
  {
    sub_100F2FF0(v3);
    v2 = 0.0;
    this[303] = 0.0;
  }
  this[304] = v2;
  this[305] = v2;
  this[306] = v2;
  this[307] = v2;
  this[308] = 3.4028235e38;
  this[309] = 3.4028235e38;
  this[310] = 3.4028235e38;
  this[311] = 1.1754944e-38;
  this[312] = 1.1754944e-38;
  this[313] = 1.1754944e-38;
  this[314] = 0.0;
  this[351] = 0.0;
  if ( *((int *)this + 350) >= 0 )
  {
    if ( *((_DWORD *)this + 348) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 348));
      this[348] = 0.0;
    }
    this[349] = 0.0;
  }
  this[352] = this[348];
  return this;
}
