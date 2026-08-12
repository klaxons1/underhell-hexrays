int *sub_1013B2A0()
{
  if ( (dword_106B004C & 1) == 0 )
  {
    dword_106B004C |= 1u;
    dword_106B0030 = (int)"CEnvShake";
    dword_106B0038 = 0;
    dword_106B003C = 0;
    dword_106B0040 = 0;
    dword_106B0044 = 0;
    dword_106B0048 = 0;
    dword_106B0034 = 9;
    atexit(sub_10470FC0);
  }
  dword_106218F8 = (int)&dword_1060F348;
  if ( (dword_106B004C & 2) == 0 )
  {
    dword_106B004C |= 2u;
    dword_10621BBC = sub_101D3250(8);
    flt_10621C08 = 0.0;
    dword_10621BC4 = 0;
    dword_10621BC8 = 0;
    dword_10621BCC = 0;
    dword_10621BD0 = 0;
    dword_10621BD4 = 0;
    word_10621BE8 = 1;
    word_10621C1E = 8;
    word_10621BEA = 2;
    dword_10621C2C = 0;
    dword_10621C30 = 0;
    dword_10621C34 = 0;
    dword_10621C38 = 0;
    dword_10621C3C = 0;
    dword_10621C60 = 0;
    dword_10621C64 = 0;
    dword_10621C68 = 0;
    dword_10621C6C = 0;
    dword_10621C70 = 0;
    word_10621C1C = 1;
    word_10621C50 = 1;
    word_10621C84 = 1;
    dword_10621BC0 = 0;
    dword_10621BD8 = 10;
    dword_10621BDC = (int)"m_shakeCallback";
    dword_10621BE0 = 844;
    dword_10621BE4 = 0;
    dword_10621BEC = 0;
    dword_10621BF0 = 0;
    dword_10621BF4 = 0;
    dword_10621BF8 = (int)&dword_106218D4;
    dword_10621BFC = 16;
    dword_10621C00 = 0;
    dword_10621C04 = 0;
    dword_10621C0C = 0;
    dword_10621C10 = (int)"InputStartShake";
    dword_10621C14 = 0;
    dword_10621C18 = 0;
    dword_10621C20 = (int)"StartShake";
    dword_10621C24 = 0;
    dword_10621C28 = (int)sub_1013B100;
    dword_10621C40 = 0;
    dword_10621C44 = (int)"InputStopShake";
    dword_10621C48 = 0;
    dword_10621C4C = 0;
    word_10621C52 = 8;
    dword_10621C54 = (int)"StopShake";
    dword_10621C58 = 0;
    dword_10621C5C = (int)sub_1013B140;
    dword_10621C74 = 1;
    dword_10621C78 = (int)"InputAmplitude";
    dword_10621C7C = 0;
    dword_10621C80 = 0;
    word_10621C86 = 8;
    dword_10621C88 = (int)"Amplitude";
    dword_10621C8C = 0;
    dword_10621C90 = (int)sub_1013B150;
    dword_10621C94 = 0;
    dword_10621C98 = 0;
    dword_10621C9C = 0;
    dword_10621CA0 = 0;
    dword_10621CA4 = 0;
    dword_10621CA8 = 1;
    dword_10621CAC = (int)"InputFrequency";
    dword_10621CB0 = 0;
    dword_10621CB4 = 0;
    dword_10621CB8 = 524289;
    dword_10621CBC = (int)"Frequency";
    dword_10621CC0 = 0;
    dword_10621CC4 = (int)sub_1013B190;
    dword_10621CC8 = 0;
    dword_10621CCC = 0;
    dword_10621CD0 = 0;
    dword_10621CD4 = 0;
    dword_10621CD8 = 0;
  }
  dword_106218F0 = 14;
  dword_106218EC = (int)&unk_10621A04;
  return &dword_106218EC;
}
