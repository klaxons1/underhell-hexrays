void __thiscall sub_10197690(float **this)
{
  float *v2; // eax
  float *v3; // esi
  int v4; // ecx

  if ( !this[301] )
  {
    v2 = (float *)sub_100DDA40(260);
    v3 = v2;
    if ( v2 )
    {
      sub_100F2BA0(v2, (int)"wash");
      *(_DWORD *)v3 = &WashEmitter::`vftable';
    }
    else
    {
      v3 = 0;
    }
    if ( v3 != this[301] )
    {
      if ( v3 )
        sub_100F2950(v3);
      v4 = (int)this[301];
      if ( v4 )
        sub_100F2FF0(v4);
      this[301] = v3;
    }
    sub_100F29C0(this[301], 128.0, 256.0);
  }
}
