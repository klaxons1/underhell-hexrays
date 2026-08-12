char __thiscall sub_101B9050(int this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-Ch] BYREF
  int (__cdecl *v5)(const char *, _DWORD); // [esp+8h] [ebp-8h]

  sub_10171060(&v4);
  if ( !v5 )
    return 0;
  dword_106BAFE8 = v5("VPhysics031", 0);
  if ( !dword_106BAFE8 )
    return 0;
  dword_106BAFF0 = v5("VPhysicsCollision007", 0);
  if ( !dword_106BAFF0 )
    return 0;
  v2 = v5("VPhysicsSurfaceProps001", 0);
  dword_106BAFF8 = v2;
  if ( !v2 )
    return 0;
  sub_101DB4F0(v2, dword_106B31D8);
  *(float *)(this + 84) = 0.0;
  *(_BYTE *)(this + 89) = 1;
  sub_101B8230((int *)(this + 64), 4);
  return 1;
}
