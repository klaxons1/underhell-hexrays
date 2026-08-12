int *sub_10131CA0()
{
  if ( (dword_106AF114 & 1) == 0 )
  {
    dword_106AF114 |= 1u;
    dword_106AF0F8 = (int)"CEnvPlayerSurfaceTrigger";
    dword_106AF100 = 0;
    dword_106AF104 = 0;
    dword_106AF108 = 0;
    dword_106AF10C = 0;
    dword_106AF110 = 0;
    dword_106AF0FC = 24;
    atexit(sub_10470DA0);
  }
  dword_1061E970 = (int)&dword_1060F348;
  if ( (dword_106AF114 & 2) == 0 )
  {
    dword_106AF114 |= 2u;
    dword_1061EABC = (int)sub_100390B0((char **)&dword_106AF0F8, "UpdateMaterialThink");
    word_1061EAC8 = 1;
    dword_1061EAD8 = 0;
    dword_1061EADC = 0;
    dword_1061EAE0 = 0;
    dword_1061EAE4 = 0;
    dword_1061EAE8 = 0;
    word_1061EACA = 32;
    word_1061EAFE = 8;
    word_1061EAFC = 1;
    dword_1061EB0C = 0;
    dword_1061EB10 = 0;
    dword_1061EB14 = 0;
    dword_1061EB18 = 0;
    dword_1061EB1C = 0;
    word_1061EB30 = 1;
    dword_1061EB40 = 0;
    dword_1061EB44 = 0;
    dword_1061EB48 = 0;
    dword_1061EB4C = 0;
    dword_1061EB50 = 0;
    word_1061EB32 = 8;
    word_1061EB64 = 1;
    word_1061EB66 = 22;
    dword_1061EAC0 = 0;
    dword_1061EAC4 = 0;
    dword_1061EACC = 0;
    dword_1061EAD0 = 0;
    dword_1061EAD4 = (int)sub_101318D0;
    dword_1061EAEC = 0;
    dword_1061EAF0 = (int)"InputDisable";
    dword_1061EAF4 = 0;
    dword_1061EAF8 = 0;
    dword_1061EB00 = (int)"Disable";
    dword_1061EB04 = 0;
    dword_1061EB08 = (int)sub_10131900;
    dword_1061EB20 = 0;
    dword_1061EB24 = (int)"InputEnable";
    dword_1061EB28 = 0;
    dword_1061EB2C = 0;
    dword_1061EB34 = (int)"Enable";
    dword_1061EB38 = 0;
    dword_1061EB3C = (int)sub_10131910;
    dword_1061EB54 = 11;
    dword_1061EB58 = (int)"m_OnSurfaceChangedToTarget";
    dword_1061EB5C = 812;
    dword_1061EB60 = 0;
    dword_1061EB68 = (int)"OnSurfaceChangedToTarget";
    dword_1061EB6C = (int)off_10614A2C;
    dword_1061EB70 = 0;
    dword_1061EB74 = 0;
    dword_1061EB78 = 0;
    dword_1061EB7C = 0;
    dword_1061EB80 = 0;
    dword_1061EB84 = 0;
    dword_1061EB88 = 11;
    dword_1061EB8C = (int)"m_OnSurfaceChangedFromTarget";
    dword_1061EB90 = 836;
    dword_1061EB94 = 0;
    dword_1061EB98 = 1441793;
    dword_1061EB9C = (int)"OnSurfaceChangedFromTarget";
    dword_1061EBA0 = (int)off_10614A2C;
    dword_1061EBA4 = 0;
    dword_1061EBA8 = 0;
    dword_1061EBAC = 0;
    dword_1061EBB0 = 0;
    dword_1061EBB4 = 0;
    dword_1061EBB8 = 0;
  }
  dword_1061E968 = 8;
  dword_1061E964 = (int)&unk_1061EA1C;
  return &dword_1061E964;
}
