int __thiscall sub_10053580(int this)
{
  int v1; // eax
  int *v2; // edx

  *(_DWORD *)this = &C_FuncMonitor::`vftable';
  *(_DWORD *)(this + 4) = &C_FuncMonitor::`vftable';
  *(_DWORD *)(this + 8) = &C_FuncMonitor::`vftable';
  *(_DWORD *)(this + 12) = &C_FuncMonitor::`vftable';
  v1 = dword_1040B9B0;
  v2 = &dword_1040B9B0;
  if ( dword_1040B9B0 )
  {
    while ( v1 != this )
    {
      v2 = (int *)(v1 + 1192);
      v1 = *(_DWORD *)(v1 + 1192);
      if ( !v1 )
        return sub_1003D350(this);
    }
    *v2 = *(_DWORD *)(v1 + 1192);
  }
  return sub_1003D350(this);
}
