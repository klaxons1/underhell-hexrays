void __thiscall sub_100803A0(_DWORD *this, int a2, int a3, int a4)
{
  int i; // esi

  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientLeafSystem::ProjectFlashlight", 0, "Flashlight Shadows", 0, 4);
  sub_1007F490((int)(this + 46), a2);
  sub_1007F6B0((int)(this + 66), a2);
  ++this[97];
  for ( i = 0; i < a3; ++i )
    sub_10080230((int)this, *(_DWORD *)(a4 + 4 * i), a2);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
