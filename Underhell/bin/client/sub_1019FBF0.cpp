int sub_1019FBF0()
{
  if ( (dword_10449B9C & 1) == 0 )
  {
    dword_10449B9C |= 1u;
    sub_1009AED0((int)&unk_10449A70, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449AAC, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_101160A0((int)&unk_10449AE8, (int)"m_flBlueEndFadeTime", 3388, 4);
    sub_10116070((int)&unk_10449B24, (int)"m_bIsBlue", 3384, 1);
    sub_10116070((int)&unk_10449B60, (int)"m_bIsBlack", 3392, 1);
  }
  sub_1009AC10(dword_10449D10, (int)&unk_10449AAC, 4, (int)"DT_NPC_Vortigaunt");
  return 1;
}
