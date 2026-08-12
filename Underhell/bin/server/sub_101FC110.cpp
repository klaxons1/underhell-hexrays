int sub_101FC110()
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

  if ( (dword_106C0E4C & 1) == 0 )
  {
    dword_106C0E4C |= 1u;
    sub_10122040((int)&unk_106C0058, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_chAreaBits", 4, 1, 8, 1, 0);
    sub_101223F0(
      (int)&unk_106C00A4,
      (int)"m_chAreaBits",
      4,
      1,
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
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_chAreaPortalBits", 36, 1, 8, 1, 0);
    sub_101223F0(
      (int)&unk_106C00F0,
      (int)"m_chAreaPortalBits",
      36,
      1,
      24,
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
    sub_10122040((int)&unk_106C013C, (int)"m_iHideHUD", 60, 4, 16, 1, 0);
    sub_10121D30((int)&unk_106C0188, (int)"m_flFOVRate", 64, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106C01D4, (int)"m_bDucked", 80, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C0220, (int)"m_bDucking", 81, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C026C, (int)"m_bInDuckJump", 82, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106C02B8, (int)"m_flDucktime", 84, 4, 12, 1032, 0.0, 2048.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C0304, (int)"m_flDuckJumpTime", 88, 4, 12, 8, 0.0, 2048.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C0350, (int)"m_flJumpTime", 92, 4, 12, 8, 0.0, 2048.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C039C, (int)"m_flFallVelocity", 100, 4, 17, 1024, -4096.0, 4096.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106C03E8, (int)"m_vecPunchAngle", 112, 12, -1, 1026, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0434, (int)"m_vecPunchAngleVel", 124, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106C0480, (int)"m_bDrawViewmodel", 136, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C04CC, (int)"m_bWearingSuit", 137, 1, 1, 1, 0);
    sub_10234700(&unk_106C0518, "m_bPoisoned", 138, 1);
    sub_10121D30((int)&unk_106C0564, (int)"m_flStepSize", 140, 4, 16, 16, 0.0, 128.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106C05B0, (int)"m_bAllowAutoMovement", 144, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C05FC, (int)"m_skybox3d.scale", 152, 4, 12, 0, 0);
    sub_10121E50((int)&unk_106C0648, (int)"m_skybox3d.origin", 156, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106C0694, (int)"m_skybox3d.area", 168, 4, 8, 1, 0);
    sub_10122040((int)&unk_106C06E0, (int)"m_skybox3d.fog.enable", 236, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C072C, (int)"m_skybox3d.fog.blend", 237, 1, 1, 1, 0);
    sub_10121E50(
      (int)&unk_106C0778,
      (int)"m_skybox3d.fog.dirPrimary",
      176,
      12,
      -1,
      2,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    sub_10122040((int)&unk_106C07C4, (int)"m_skybox3d.fog.colorPrimary", 188, 4, 32, 1, 0);
    sub_10122040((int)&unk_106C0810, (int)"m_skybox3d.fog.colorSecondary", 192, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106C085C, (int)"m_skybox3d.fog.start", 204, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C08A8, (int)"m_skybox3d.fog.end", 208, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C08F4, (int)"m_skybox3d.fog.maxdensity", 216, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234730(&unk_106C0940, "m_PlayerFog.m_hCtrl", 244, 4, -1, sub_10234830);
    sub_10121E50((int)&unk_106C098C, (int)"m_audio.localSound[0]", 348, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C09D8, (int)"m_audio.localSound[1]", 360, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0A24, (int)"m_audio.localSound[2]", 372, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0A70, (int)"m_audio.localSound[3]", 384, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0ABC, (int)"m_audio.localSound[4]", 396, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0B08, (int)"m_audio.localSound[5]", 408, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0B54, (int)"m_audio.localSound[6]", 420, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106C0BA0, (int)"m_audio.localSound[7]", 432, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106C0BEC, (int)"m_audio.soundscapeIndex", 444, 4, 17, 0, 0);
    sub_10122040((int)&unk_106C0C38, (int)"m_audio.localBits", 448, 4, 8, 1, 0);
    sub_10234730(&unk_106C0C84, "m_audio.ent", 452, 4, -1, sub_10234830);
    sub_10121D30(
      (int)&unk_106C0CD0,
      (int)"m_TonemapParams.m_flTonemapScale",
      460,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106C0D1C,
      (int)"m_TonemapParams.m_flTonemapRate",
      464,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106C0D68,
      (int)"m_TonemapParams.m_flBloomScale",
      468,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106C0DB4,
      (int)"m_TonemapParams.m_flAutoExposureMin",
      472,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106C0E00,
      (int)"m_TonemapParams.m_flAutoExposureMax",
      476,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    atexit(sub_10473690);
  }
  sub_10121D00(byte_106C0F10, (int)&unk_106C00A4, 46, (int)off_1063EDD0[0]);
  return 1;
}
