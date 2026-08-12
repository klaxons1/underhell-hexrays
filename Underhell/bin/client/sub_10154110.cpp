int __thiscall sub_10154110(int *this)
{
  bool v2; // sf
  int v3; // ecx

  *this = (int)&CSnowFallManager::`vftable';
  this[1] = (int)&CSnowFallManager::`vftable';
  this[2] = (int)&CSnowFallManager::`vftable';
  this[3] = (int)&CSnowFallManager::`vftable';
  v2 = this[350] < 0;
  this[351] = 0;
  if ( !v2 )
  {
    if ( this[348] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[348]);
      this[348] = 0;
    }
    this[349] = 0;
  }
  this[352] = this[348];
  sub_1011A810(this + 348);
  v3 = this[303];
  if ( v3 )
    sub_100F2FF0(v3);
  return sub_1003D350((int)this);
}
