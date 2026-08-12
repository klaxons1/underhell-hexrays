int __thiscall sub_1005D710(int this)
{
  int v1; // eax
  int *v2; // edx

  *(_DWORD *)this = &C_PointCamera::`vftable';
  *(_DWORD *)(this + 4) = &C_PointCamera::`vftable';
  *(_DWORD *)(this + 8) = &C_PointCamera::`vftable';
  *(_DWORD *)(this + 12) = &C_PointCamera::`vftable';
  v1 = dword_1040D5B4;
  v2 = &dword_1040D5B4;
  if ( dword_1040D5B4 )
  {
    while ( v1 != this )
    {
      v2 = (int *)(v1 + 1228);
      v1 = *(_DWORD *)(v1 + 1228);
      if ( !v1 )
        return sub_1003D350(this);
    }
    *v2 = *(_DWORD *)(v1 + 1228);
  }
  return sub_1003D350(this);
}
