int __stdcall sub_10070870(char *String1)
{
  if ( !sub_10227B20(String1, "MaterialImage", 20) )
  {
    if ( sub_100DDA40(484) )
      return sub_1012FEC0(0, "BitmapPanel");
    return 0;
  }
  if ( sub_10227B20(String1, "MaterialButton", 20) )
    return sub_1024C260(String1);
  if ( !sub_100DDA40(656) )
    return 0;
  return sub_1012F820(0, "BitmapButton", (int)Locale);
}
