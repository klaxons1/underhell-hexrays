int __thiscall sub_101C9D60(_DWORD *this)
{
  _DWORD *v1; // eax
  int *v2; // edx

  *this = &CPhysicsNPCSolver::`vftable';
  this[200] = &CPhysicsNPCSolver::`vftable';
  v1 = (_DWORD *)dword_106BA8FC;
  v2 = &dword_106BA8FC;
  if ( dword_106BA8FC )
  {
    while ( v1 != this )
    {
      v2 = v1 + 201;
      v1 = (_DWORD *)v1[201];
      if ( !v1 )
        return sub_100DF1D0(this);
    }
    *v2 = v1[201];
  }
  return sub_100DF1D0(this);
}
