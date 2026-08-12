int __thiscall sub_10033BD0(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // esi

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseCombatWeapon::DrawModel", 0, "Other_Model_Rendering", 0, 4);
  if ( !*(_BYTE *)(this + 116)
    || *(_WORD *)(this + 114) == 0xFFFF
    || (v3 = sub_100422D0(), (v4 = v3) != 0)
    && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 844))(v3)
    && sub_1000BAC0((_DWORD *)(this - 4))
    && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 844))(v4) == 4
    && (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 848))(v4), v5 == sub_1000BAC0((_DWORD *)(this - 4))) )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  else
  {
    sub_10033970((_DWORD *)(this - 4));
    v7 = sub_10026910((_BYTE *)this, a2);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return v7;
  }
}
