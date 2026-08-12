int sub_1009B560()
{
  if ( (dword_1042D384 & 1) == 0 )
  {
    dword_1042D384 |= 1u;
    sub_1009AED0((int)&unk_1042CE98, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40((int)&unk_1042CED4, (int)"m_vOrigin[0]", 0, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042CF10, (int)"m_vOrigin[1]", 4, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042CF4C, (int)"m_vOrigin[2]", 8, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042CF88, (int)"m_vStart[0]", 12, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042CFC4, (int)"m_vStart[1]", 16, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042D000, (int)"m_vStart[2]", 20, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1042D03C, (int)"m_vAngles", 36, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1042D078, (int)"m_vNormal", 24, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_1042D0B4, (int)"m_fFlags", 48, 4, 0, 0);
    sub_1009AC40((int)&unk_1042D0F0, (int)"m_flMagnitude", 60, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042D12C, (int)"m_flScale", 56, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1042D168, (int)"m_nAttachmentIndex", 68, 4, 0, 0);
    sub_10116040(&unk_1042D1A4, "m_nSurfaceProp", 72, 2, sub_10116020);
    sub_1009AED0((int)&unk_1042D1E0, (int)"m_iEffectName", 92, 4, 0, 0);
    sub_1009AED0((int)&unk_1042D21C, (int)"m_nMaterial", 76, 4, 0, 0);
    sub_1009AED0((int)&unk_1042D258, (int)"m_nDamageType", 80, 4, 0, 0);
    sub_1009AED0((int)&unk_1042D294, (int)"m_nHitBox", 84, 4, 0, 0);
    sub_1009AED0((int)&unk_1042D2D0, (int)"entindex", 0, -1, 0, (int (__cdecl *)(int, int, int))sub_1009B520);
    sub_1009AED0((int)&unk_1042D30C, (int)"m_nColor", 88, 1, 0, 0);
    sub_1009AC40((int)&unk_1042D348, (int)"m_flRadius", 64, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1042CE80, (int)&unk_1042CED4, 20, (int)"DT_EffectData");
  return 1;
}
