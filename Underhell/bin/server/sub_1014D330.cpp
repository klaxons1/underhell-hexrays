int *sub_1014D330()
{
  if ( (dword_106B1B90 & 1) == 0 )
  {
    dword_106B1B90 |= 1u;
    dword_106B1B74 = (int)"CBreakableSurface";
    dword_106B1B7C = 0;
    dword_106B1B80 = 0;
    dword_106B1B84 = 0;
    dword_106B1B88 = 0;
    dword_106B1B8C = 0;
    dword_106B1B78 = 17;
    atexit(sub_104713F0);
  }
  dword_10625D9C = (int)&dword_10625504;
  if ( (dword_106B1B90 & 2) == 0 )
  {
    dword_106B1B90 |= 2u;
    dword_10626204 = (int)sub_100390B0((char **)&dword_106B1B74, "BreakThink");
    word_10626210 = 1;
    word_10626212 = 32;
    dword_10626208 = 0;
    dword_1062620C = 0;
    dword_10626214 = 0;
    dword_10626218 = 0;
    dword_1062621C = (int)sub_1014C050;
    dword_10626220 = 0;
    dword_10626224 = 0;
    dword_10626228 = 0;
    dword_1062622C = 0;
    dword_10626230 = 0;
    dword_10626234 = 0;
    dword_10626238 = (int)sub_100390B0((char **)&dword_106B1B74, "SurfaceTouch");
    word_10626246 = 32;
    dword_1062623C = 0;
    dword_10626240 = 0;
    word_10626244 = 1;
    dword_10626248 = 0;
    dword_1062624C = 0;
    dword_10626250 = (int)sub_1014C590;
    dword_10626254 = 0;
    dword_10626258 = 0;
    dword_1062625C = 0;
    dword_10626260 = 0;
    dword_10626264 = 0;
    dword_10626268 = 3;
    dword_1062626C = (int)"InputShatter";
    dword_10626270 = 0;
    dword_10626274 = 0;
    dword_10626278 = 524289;
    dword_1062627C = (int)"Shatter";
    dword_10626280 = 0;
    dword_10626284 = (int)sub_1014CFB0;
    dword_10626288 = 0;
    dword_1062628C = 0;
    dword_10626290 = 0;
    dword_10626294 = 0;
    dword_10626298 = 0;
  }
  dword_10625D94 = 20;
  dword_10625D90 = (int)&unk_10625E8C;
  return &dword_10625D90;
}
