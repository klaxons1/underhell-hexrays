int *sub_102BAFC0()
{
  if ( (dword_106DD5FC & 1) == 0 )
  {
    dword_106DD5FC |= 1u;
    dword_106DD5E0 = (int)"CAlyxEmpEffect";
    dword_106DD5E8 = 0;
    dword_106DD5EC = 0;
    dword_106DD5F0 = 0;
    dword_106DD5F4 = 0;
    dword_106DD5F8 = 0;
    dword_106DD5E4 = 14;
    atexit(sub_104769D0);
  }
  dword_10661150 = (int)&dword_1060F348;
  if ( (dword_106DD5FC & 2) == 0 )
  {
    dword_106DD5FC |= 2u;
    dword_106613CC = (int)sub_100390B0((char **)&dword_106DD5E0, "AutomaticThink");
    word_106613D8 = 1;
    dword_106613E8 = 0;
    dword_106613EC = 0;
    dword_106613F0 = 0;
    dword_106613F4 = 0;
    dword_106613F8 = 0;
    word_1066140E = 8;
    word_106613DA = 32;
    dword_1066141C = 0;
    dword_10661420 = 0;
    dword_10661424 = 0;
    dword_10661428 = 0;
    dword_1066142C = 0;
    dword_10661450 = 0;
    dword_10661454 = 0;
    dword_10661458 = 0;
    dword_1066145C = 0;
    dword_10661460 = 0;
    word_1066140C = 1;
    word_10661440 = 1;
    word_10661474 = 1;
    dword_106613D0 = 0;
    dword_106613D4 = 0;
    dword_106613DC = 0;
    dword_106613E0 = 0;
    dword_106613E4 = (int)sub_102BAF60;
    dword_106613FC = 1;
    dword_10661400 = (int)"InputStartCharge";
    dword_10661404 = 0;
    dword_10661408 = 0;
    dword_10661410 = (int)"StartCharge";
    dword_10661414 = 0;
    dword_10661418 = (int)sub_102BA920;
    dword_10661430 = 0;
    dword_10661434 = (int)"InputStartDischarge";
    dword_10661438 = 0;
    dword_1066143C = 0;
    word_10661442 = 8;
    dword_10661444 = (int)"StartDischarge";
    dword_10661448 = 0;
    dword_1066144C = (int)sub_102BAFB0;
    dword_10661464 = 1;
    dword_10661468 = (int)"InputStop";
    dword_1066146C = 0;
    dword_10661470 = 0;
    word_10661476 = 8;
    dword_10661478 = (int)"Stop";
    dword_1066147C = 0;
    dword_10661480 = (int)sub_102BA950;
    dword_10661484 = 0;
    dword_10661488 = 0;
    dword_1066148C = 0;
    dword_10661490 = 0;
    dword_10661494 = 0;
    dword_10661498 = 2;
    dword_1066149C = (int)"InputSetTargetEnt";
    dword_106614A0 = 0;
    dword_106614A4 = 0;
    dword_106614A8 = 524289;
    dword_106614AC = (int)"SetTargetEnt";
    dword_106614B0 = 0;
    dword_106614B4 = (int)sub_102BA620;
    dword_106614B8 = 0;
    dword_106614BC = 0;
    dword_106614C0 = 0;
    dword_106614C4 = 0;
    dword_106614C8 = 0;
  }
  dword_10661148 = 14;
  dword_10661144 = (int)&unk_106611F4;
  return &dword_10661144;
}
