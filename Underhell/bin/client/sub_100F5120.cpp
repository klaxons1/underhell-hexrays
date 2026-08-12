char __cdecl sub_100F5120(int (__cdecl *a1)(const char *, _DWORD))
{
  dword_10436248 = a1("VPhysics031", 0);
  if ( !dword_10436248 )
    return 0;
  dword_10436258 = a1("VPhysicsSurfaceProps001", 0);
  if ( !dword_10436258 )
    return 0;
  dword_10436250 = a1("VPhysicsCollision007", 0);
  if ( !dword_10436250 )
    return 0;
  sub_10101F80(dword_10436258, dword_10413188);
  return 1;
}
