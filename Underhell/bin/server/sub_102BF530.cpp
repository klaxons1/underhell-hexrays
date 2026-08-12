int *sub_102BF530()
{
  if ( (dword_106DDDF8 & 1) == 0 )
  {
    dword_106DDDF8 |= 1u;
    dword_106DDDDC = (int)"CSpeaker";
    dword_106DDDE4 = 0;
    dword_106DDDE8 = 0;
    dword_106DDDEC = 0;
    dword_106DDDF0 = 0;
    dword_106DDDF4 = 0;
    dword_106DDDE0 = 8;
    atexit(sub_10476A90);
  }
  dword_1066205C = (int)&dword_1060F348;
  if ( (dword_106DDDF8 & 2) == 0 )
  {
    dword_106DDDF8 |= 2u;
    dword_106621B8 = (int)sub_100390B0((char **)&dword_106DDDDC, "SpeakerThink");
    word_106621C4 = 1;
    dword_106621D4 = 0;
    dword_106621D8 = 0;
    dword_106621DC = 0;
    dword_106621E0 = 0;
    dword_106621E4 = 0;
    word_106621C6 = 32;
    word_106621F8 = 1;
    word_106621FA = 8;
    dword_106621BC = 0;
    dword_106621C0 = 0;
    dword_106621C8 = 0;
    dword_106621CC = 0;
    dword_106621D0 = (int)sub_102BF210;
    dword_106621E8 = 0;
    dword_106621EC = (int)"InputTurnOn";
    dword_106621F0 = 0;
    dword_106621F4 = 0;
    dword_106621FC = (int)"TurnOn";
    dword_10662200 = 0;
    dword_10662204 = (int)sub_102BEFC0;
    dword_10662208 = 0;
    dword_1066220C = 0;
    dword_10662210 = 0;
    dword_10662214 = 0;
    dword_10662218 = 0;
    dword_1066221C = 0;
    dword_10662220 = (int)"InputTurnOff";
    dword_10662224 = 0;
    dword_10662228 = 0;
    word_1066222C = 1;
    word_1066222E = 8;
    dword_10662230 = (int)"TurnOff";
    dword_10662234 = 0;
    dword_10662238 = (int)sub_102BEFE0;
    dword_1066223C = 0;
    dword_10662240 = 0;
    dword_10662244 = 0;
    dword_10662248 = 0;
    dword_1066224C = 0;
    dword_10662250 = 0;
    dword_10662254 = (int)"InputToggle";
    dword_10662258 = 0;
    dword_1066225C = 0;
    dword_10662260 = 524289;
    dword_10662264 = (int)"Toggle";
    dword_10662268 = 0;
    dword_1066226C = (int)sub_102BF000;
    dword_10662270 = 0;
    dword_10662274 = 0;
    dword_10662278 = 0;
    dword_1066227C = 0;
    dword_10662280 = 0;
  }
  dword_10662054 = 8;
  dword_10662050 = (int)&unk_106620E4;
  return &dword_10662050;
}
