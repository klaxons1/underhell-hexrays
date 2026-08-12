int __thiscall sub_101AB980(_DWORD *this)
{
  _BYTE *v1; // eax
  const char *v2; // esi
  const char *v3; // eax

  v1 = (_BYTE *)this[201];
  if ( v1 )
  {
    v2 = (const char *)this[201];
    if ( *v1 )
      return sub_101543E0((int)v2);
  }
  else
  {
    v2 = String;
  }
  v3 = (const char *)this[65];
  if ( !v3 )
    v3 = String;
  Warning("info_particle_system (%s) has no particle system name specified!\n", v3);
  return sub_101543E0((int)v2);
}
