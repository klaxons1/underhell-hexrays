__int16 __thiscall sub_10106E60(_WORD *this, int *a2)
{
  int v2; // edx
  __int16 v3; // si
  _DWORD v5[3]; // [esp+4h] [ebp-24h] BYREF
  void **v6; // [esp+10h] [ebp-18h]
  _DWORD v7[5]; // [esp+14h] [ebp-14h] BYREF

  v5[1] = 0;
  v5[2] = 0;
  memset(v7, 0, sizeof(v7));
  v2 = *a2;
  v6 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
  v5[0] = v2;
  v3 = sub_101061C0(this, (int)v5);
  v6 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
  sub_1011A810(v7);
  return v3;
}
