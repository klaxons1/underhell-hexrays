_DWORD *sub_100EAA90()
{
  _DWORD *v2; // [esp+4h] [ebp-4h]

  v2 = (_DWORD *)sub_100DDA40(12);
  if ( !v2 )
    return 0;
  *v2 = &IMaterialProxy::`vftable';
  *v2 = &ParticleSphereProxy::`vftable';
  return v2;
}
