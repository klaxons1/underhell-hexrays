int sub_10158740()
{
  if ( (dword_1043E27C & 1) == 0 )
  {
    dword_1043E27C |= 1u;
    sub_1009AED0((int)&unk_1043E1C8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90((int)&unk_1043E204, (int)"m_vOrigin", 1436, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043E240, (int)"m_vDirection", 1448, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_1043E280, (int)&unk_1043E204, 2, (int)"DT_ParticleFire");
  return 1;
}
