int __cdecl sub_10197B40(char *Src, int a2, int a3, char a4)
{
  double v4; // st7
  int v5; // esi
  float v7; // [esp+14h] [ebp-4h]

  v4 = Plat_FloatTime();
  if ( flt_106B82B4 + 10.0 < v4 )
  {
    if ( a4 && a2 )
      Msg("%s %.0f%%\n", Src, (double)a3 * 100.0 / (double)a2);
    else
      Msg("%s\n", Src);
    v7 = v4;
    flt_106B82B4 = v7;
  }
  if ( sub_1042A310(32) )
    v5 = sub_1042A330("data");
  else
    v5 = 0;
  sub_1042AF60("msg", Src);
  sub_1042AFD0("total", a2);
  sub_1042AFD0("current", a3);
  sub_10197A70((int)"nav_progress", 1, v5);
  return sub_1042B1A0(v5);
}
