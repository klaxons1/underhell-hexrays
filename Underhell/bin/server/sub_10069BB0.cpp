int __thiscall sub_10069BB0(_DWORD *this)
{
  int v1; // eax
  _DWORD *v3; // edx

  *this = &CAI_DynamicLink::`vftable';
  v1 = dword_10692E2C;
  if ( (_DWORD *)dword_10692E2C == this )
  {
    dword_10692E2C = *(_DWORD *)(dword_10692E2C + 800);
    return sub_100DF1D0(this);
  }
  else
  {
    if ( dword_10692E2C )
    {
      while ( 1 )
      {
        v3 = *(_DWORD **)(v1 + 800);
        if ( v3 == this )
          break;
        v1 = *(_DWORD *)(v1 + 800);
        if ( !v3 )
          return sub_100DF1D0(this);
      }
      *(_DWORD *)(v1 + 800) = v3[200];
    }
    return sub_100DF1D0(this);
  }
}
