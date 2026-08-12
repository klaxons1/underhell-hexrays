int sub_1022ABB0()
{
  int v1[19]; // [esp-44h] [ebp-50h] BYREF
  int (__cdecl *v2)(int, int, int); // [esp+8h] [ebp-4h]

  if ( (dword_106C454C & 1) == 0 )
  {
    dword_106C454C |= 1u;
    sub_10122040((int)&unk_106C4338, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C4384, (int)"m_nSceneStringIndex", 980, 4, 12, 1, 0);
    sub_10234700(&unk_106C43D0, "m_bIsPlayingBack", 884, 1);
    sub_10234700(&unk_106C441C, "m_bPaused", 885, 1);
    sub_10234700(&unk_106C4468, "m_bMultiplayer", 886, 1);
    sub_10121D30((int)&unk_106C44B4, (int)"m_flForceClientTime", 888, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    v2 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10234730(v1, 0, 0, 0, -1, sub_10234830);
    sub_10122AC0(
      (int)&unk_106C4500,
      "m_hActorList",
      932,
      4,
      (int)sub_10229080,
      16,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      *(float *)&v1[4],
      *(float *)&v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      *(float *)&v1[12],
      v1[13],
      v1[14],
      v1[15],
      v1[16],
      v1[17],
      v1[18],
      v2);
    atexit(sub_10473D60);
  }
  sub_10121D00(byte_106C41F0, (int)&unk_106C4384, 6, (int)off_106470A0);
  return 1;
}
