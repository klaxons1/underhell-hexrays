int sub_1015C550()
{
  if ( (dword_1043F5D8 & 1) == 0 )
  {
    dword_1043F5D8 |= 1u;
    sub_1009AED0((int)&unk_1043F4E8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043F524, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_1043F560, (int)"m_nAttachment", 1428, 4, 0, 0);
    sub_1009AC40((int)&unk_1043F59C, (int)"m_flLifetime", 1432, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043FA1C, (int)&unk_1043F524, 3, (int)"DT_FireTrail");
  return 1;
}
