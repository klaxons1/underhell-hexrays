int sub_101E6890()
{
  char v1; // [esp-44h] [ebp-50h] BYREF
  int v2; // [esp-40h] [ebp-4Ch]
  int v3; // [esp-3Ch] [ebp-48h]
  int v4; // [esp-38h] [ebp-44h]
  float v5; // [esp-34h] [ebp-40h]
  float v6; // [esp-30h] [ebp-3Ch]
  int v7; // [esp-2Ch] [ebp-38h]
  int v8; // [esp-28h] [ebp-34h]
  int v9; // [esp-24h] [ebp-30h]
  int v10; // [esp-20h] [ebp-2Ch]
  int v11; // [esp-1Ch] [ebp-28h]
  int v12; // [esp-18h] [ebp-24h]
  float v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-10h] [ebp-1Ch]
  int v15; // [esp-Ch] [ebp-18h]
  int v16; // [esp-8h] [ebp-14h]
  int v17; // [esp-4h] [ebp-10h]
  int v18; // [esp+0h] [ebp-Ch]
  int v19; // [esp+4h] [ebp-8h]
  int (__cdecl *v20)(int, int, int); // [esp+8h] [ebp-4h]

  if ( (dword_106BC55C & 1) == 0 )
  {
    dword_106BC55C |= 1u;
    sub_10122040((int)&unk_106BBF20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BBF6C,
      (int)"m_Local",
      2192,
      (int)&unk_106C0F10,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106BBFB8, (int)"m_flFriction", 556, 4, 8, 8, 0.0, 4.0, (int)sub_10121A20);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_iAmmo", 1780, 4, 10, 1, 0);
    sub_101223F0(
      (int)&unk_106BC004,
      (int)"m_iAmmo",
      1780,
      4,
      32,
      v1,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    sub_10122040((int)&unk_106BC050, (int)"m_fOnTarget", 3316, 1, 2, 1, 0);
    sub_10122040((int)&unk_106BC09C, (int)"m_nTickBase", 4216, 4, -1, 1024, 0);
    sub_10122040((int)&unk_106BC0E8, (int)"m_nNextThinkTick", 188, 4, -1, 0, 0);
    sub_10234730(&unk_106BC134, "m_hLastWeapon", 4228, 4, -1, sub_10234830);
    sub_10234730(&unk_106BC180, "m_hGroundEntity", 452, 4, 1024, sub_10234830);
    sub_10121D30((int)&unk_106BC1CC, (int)"m_vecVelocity[0]", -592, 4, 32, 1028, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106BC218, (int)"m_vecVelocity[1]", -596, 4, 32, 1028, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106BC264, (int)"m_vecVelocity[2]", -600, 4, 32, 1028, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106BC2B0, (int)"m_vecBaseVelocity", 464, 12, 20, 0, -1000.0, 1000.0, (int)sub_10121AA0);
    sub_10234730(&unk_106BC2FC, "m_hConstraintEntity", 4268, 4, -1, sub_10234830);
    sub_10121E50((int)&unk_106BC348, (int)"m_vecConstraintCenter", 4272, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106BC394, (int)"m_flConstraintRadius", 4284, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106BC3E0, (int)"m_flConstraintWidth", 4288, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106BC42C,
      (int)"m_flConstraintSpeedFactor",
      4292,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30((int)&unk_106BC478, (int)"m_flDeathTime", 3472, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106BC4C4, (int)"m_nWaterLevel", 447, 1, 2, 1, 0);
    sub_10121D30((int)&unk_106BC510, (int)"m_flLaggedMovementValue", 4328, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104734F0);
  }
  sub_10121D00(byte_106BBEB8, (int)&unk_106BBF6C, 20, (int)off_1063C6D8[0]);
  return 1;
}
