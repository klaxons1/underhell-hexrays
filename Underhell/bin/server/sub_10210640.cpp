int *sub_10210640()
{
  char *v0; // eax

  if ( (dword_106C2840 & 1) == 0 )
  {
    dword_106C2840 |= 1u;
    dword_106C2824 = (int)"CPhysicsPropRespawnable";
    dword_106C282C = 0;
    dword_106C2830 = 0;
    dword_106C2834 = 0;
    dword_106C2838 = 0;
    dword_106C283C = 0;
    dword_106C2828 = 23;
    atexit(sub_10473B30);
  }
  dword_106430A4 = (int)&dword_10642FF8;
  if ( (dword_106C2840 & 2) == 0 )
  {
    dword_106C2840 |= 2u;
    v0 = sub_100390B0((char **)&dword_106C2824, "Materialize");
    flt_106C2750 = 0.0;
    word_106C2730 = 1;
    flt_106C2784 = 0.0;
    dword_106C26F0 = (int)v0;
    flt_106C27B8 = 0.0;
    word_106C2766 = 2;
    word_106C26FC = 1;
    word_106C2798 = 1;
    word_106C26FE = 32;
    dword_106C270C = 0;
    dword_106C2710 = 0;
    dword_106C2714 = 0;
    dword_106C2718 = 0;
    dword_106C271C = 0;
    word_106C279A = 2;
    word_106C2732 = 6;
    word_106C2764 = 1;
    word_106C27CC = 1;
    dword_106C26F4 = 0;
    dword_106C26F8 = 0;
    dword_106C2700 = 0;
    dword_106C2704 = 0;
    dword_106C2708 = (int)sub_1020EBA0;
    dword_106C2720 = 1;
    dword_106C2724 = (int)"m_flRespawnTime";
    dword_106C2728 = 1736;
    dword_106C272C = 0;
    dword_106C2734 = (int)"RespawnTime";
    dword_106C2738 = 0;
    dword_106C273C = 0;
    dword_106C2740 = 0;
    dword_106C2744 = 4;
    dword_106C2748 = 0;
    dword_106C274C = 0;
    dword_106C2754 = 15;
    dword_106C2758 = (int)"m_vOriginalSpawnOrigin";
    dword_106C275C = 1688;
    dword_106C2760 = 0;
    dword_106C2768 = 0;
    dword_106C276C = 0;
    dword_106C2770 = 0;
    dword_106C2774 = 0;
    dword_106C2778 = 12;
    dword_106C277C = 0;
    dword_106C2780 = 0;
    dword_106C2788 = 3;
    dword_106C278C = (int)"m_vOriginalSpawnAngles";
    dword_106C2790 = 1700;
    dword_106C2794 = 0;
    dword_106C279C = 0;
    dword_106C27A0 = 0;
    dword_106C27A4 = 0;
    dword_106C27A8 = 0;
    dword_106C27AC = 12;
    dword_106C27B0 = 0;
    dword_106C27B4 = 0;
    dword_106C27BC = 3;
    dword_106C27C0 = (int)"m_vOriginalMins";
    dword_106C27C4 = 1712;
    dword_106C27C8 = 0;
    word_106C27CE = 2;
    dword_106C27D0 = 0;
    dword_106C27D4 = 0;
    flt_106C27EC = 0.0;
    dword_106C27D8 = 0;
    flt_106C2820 = 0.0;
    dword_106C27DC = 0;
    dword_106C27E0 = 12;
    dword_106C27E4 = 0;
    dword_106C27E8 = 0;
    dword_106C27F0 = 3;
    dword_106C27F4 = (int)"m_vOriginalMaxs";
    dword_106C27F8 = 1724;
    dword_106C27FC = 0;
    dword_106C2800 = 131073;
    dword_106C2804 = 0;
    dword_106C2808 = 0;
    dword_106C280C = 0;
    dword_106C2810 = 0;
    dword_106C2814 = 12;
    dword_106C2818 = 0;
    dword_106C281C = 0;
  }
  dword_1064309C = 6;
  dword_10643098 = (int)&unk_106C26EC;
  return &dword_10643098;
}
