void __thiscall sub_101BB740(_BYTE *this)
{
  double v2; // st7
  float v3; // [esp+1Ch] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CPhysicsHook::FrameUpdatePostEntityThink", 0, "Physics", 0, 4);
  v2 = 0.0;
  if ( *(float *)(dword_106B31C8 + 16) > 0.0 )
    v2 = *(float *)(dword_106B31C8 + 28);
  v3 = v2;
  if ( sub_100EA2A0() )
  {
    this[89] = 0;
    sub_101BB0C0(v3);
  }
  this[89] = 1;
  sub_101BB0C0(v3);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
