_DWORD *sub_1009C510()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = sub_10034900(0x4B0u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1003D000((int)v0);
  *v1 = &C_EnvDetailController::`vftable';
  v1[1] = &C_EnvDetailController::`vftable';
  v1[2] = &C_EnvDetailController::`vftable';
  v1[3] = &C_EnvDetailController::`vftable';
  dword_1042D514 = (int)v1;
  return v1;
}
