char __stdcall sub_100084E0(int a1, int a2)
{
  void *v2; // eax

  v2 = (void *)sub_1022B4C0("onlyAnimateOnTexture", (int)Locale);
  if ( !v2 )
    return 0;
  sub_1022CFC0(v2);
  return sub_1000A200(a1, a2);
}
