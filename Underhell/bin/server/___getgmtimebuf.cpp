DWORD __getgmtimebuf()
{
  DWORD *v0; // eax
  DWORD *v1; // esi
  int v3; // eax

  v0 = _getptd_noexit();
  v1 = v0;
  if ( v0 )
  {
    if ( v0[17] )
      return v1[17];
    v3 = sub_10184390(36);
    v1[17] = v3;
    if ( v3 )
      return v1[17];
  }
  *_errno() = 12;
  return 0;
}
