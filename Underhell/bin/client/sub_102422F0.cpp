int sub_102422F0()
{
  int result; // eax

  if ( !byte_1047CBA8 )
  {
    byte_1047CBA8 = 1;
    sub_10242280("float", (int)&off_103FCF50);
    sub_10242280("int", (int)&off_103FCF58);
    sub_10242280("Color", (int)off_103FCF60);
    sub_10242280("bool", (int)off_103FCF64);
    sub_10242280("char", (int)&off_103FCF68);
    sub_10242280("string", (int)&off_103FCF68);
    sub_10242280("HFont", (int)off_103FCF6C);
    sub_10242280("vgui::HFont", (int)off_103FCF6C);
    sub_10242280("proportional_float", (int)&off_103FCF54);
    sub_10242280("proportional_int", (int)&off_103FCF5C);
    return sub_10242280("textureid", (int)&off_103FCF70);
  }
  return result;
}
