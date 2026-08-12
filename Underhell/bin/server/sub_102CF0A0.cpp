int *sub_102CF0A0()
{
  int (__stdcall ***v0)(int, int); // eax

  if ( (dword_106DE484 & 1) == 0 )
  {
    dword_106DE484 |= 1u;
    dword_106DE468 = (int)"CFuncTankAirboatGun";
    dword_106DE470 = 0;
    dword_106DE474 = 0;
    dword_106DE478 = 0;
    dword_106DE47C = 0;
    dword_106DE480 = 0;
    dword_106DE46C = 19;
    atexit(sub_10476C40);
  }
  dword_10662DB0 = (int)&dword_10662D44;
  if ( (dword_106DE484 & 2) == 0 )
  {
    dword_106DE484 |= 2u;
    v0 = sub_1023DBB0();
    flt_10663570 = 0.0;
    word_10663552 = 2;
    flt_106635A4 = 0.0;
    flt_106635D8 = 0.0;
    dword_10663524 = (int)v0;
    flt_1066360C = 0.0;
    word_10663584 = 1;
    dword_1066352C = 0;
    dword_10663530 = 0;
    dword_10663534 = 0;
    dword_10663538 = 0;
    dword_1066353C = 0;
    word_10663586 = 2;
    word_10663550 = 1;
    word_106635B8 = 1;
    dword_10663528 = 0;
    dword_10663540 = 16;
    dword_10663544 = (int)"m_flNextHeavyShotTime";
    dword_10663548 = 1400;
    dword_1066354C = 0;
    dword_10663554 = 0;
    dword_10663558 = 0;
    dword_1066355C = 0;
    dword_10663560 = 0;
    dword_10663564 = 4;
    dword_10663568 = 0;
    dword_1066356C = 0;
    dword_10663574 = 6;
    dword_10663578 = (int)"m_bIsFiring";
    dword_1066357C = 1404;
    dword_10663580 = 0;
    dword_10663588 = 0;
    dword_1066358C = 0;
    dword_10663590 = 0;
    dword_10663594 = 0;
    dword_10663598 = 1;
    dword_1066359C = 0;
    dword_106635A0 = 0;
    dword_106635A8 = 2;
    dword_106635AC = (int)"m_iszAirboatGunModel";
    dword_106635B0 = 1408;
    dword_106635B4 = 0;
    word_106635BA = 6;
    dword_106635BC = (int)"airboat_gun_model";
    dword_106635C0 = 0;
    dword_106635C4 = 0;
    dword_106635C8 = 0;
    dword_106635CC = 4;
    dword_106635D0 = 0;
    dword_106635D4 = 0;
    dword_106635DC = 16;
    dword_106635E0 = (int)"m_flLastImpactEffectTime";
    dword_106635E4 = 1420;
    dword_106635E8 = 0;
    dword_106635EC = 131073;
    dword_106635F0 = 0;
    dword_106635F4 = 0;
    dword_106635F8 = 0;
    dword_106635FC = 0;
    dword_10663600 = 4;
    dword_10663604 = 0;
    dword_10663608 = 0;
  }
  dword_10662DA8 = 5;
  dword_10662DA4 = (int)&unk_1066350C;
  return &dword_10662DA4;
}
