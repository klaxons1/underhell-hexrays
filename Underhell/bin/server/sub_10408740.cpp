int *sub_10408740()
{
  if ( (dword_106F0600 & 1) == 0 )
  {
    dword_106F0600 |= 1u;
    dword_106F05E4 = (int)"CMissile";
    dword_106F05EC = 0;
    dword_106F05F0 = 0;
    dword_106F05F4 = 0;
    dword_106F05F8 = 0;
    dword_106F05FC = 0;
    dword_106F05E8 = 8;
    atexit(sub_10479A00);
  }
  dword_106866F8 = (int)&dword_1060E098;
  if ( (dword_106F0600 & 2) == 0 )
  {
    dword_106F0600 |= 2u;
    dword_1068711C = (int)sub_100390B0((char **)&dword_106F05E4, "MissileTouch");
    word_10687128 = 1;
    word_1068712A = 32;
    dword_10687120 = 0;
    dword_10687124 = 0;
    dword_1068712C = 0;
    dword_10687130 = 0;
    dword_10687134 = (int)sub_10406390;
    dword_10687138 = 0;
    dword_1068713C = 0;
    dword_10687140 = 0;
    dword_10687144 = 0;
    dword_10687148 = 0;
    dword_1068714C = 0;
    dword_10687150 = (int)sub_100390B0((char **)&dword_106F05E4, "AccelerateThink");
    word_1068715E = 32;
    dword_10687154 = 0;
    dword_10687158 = 0;
    word_1068715C = 1;
    dword_10687160 = 0;
    dword_10687164 = 0;
    dword_10687168 = (int)sub_10406EC0;
    dword_1068716C = 0;
    dword_10687170 = 0;
    dword_10687174 = 0;
    dword_10687178 = 0;
    dword_1068717C = 0;
    dword_10687180 = 0;
    dword_10687184 = (int)sub_100390B0((char **)&dword_106F05E4, "AugerThink");
    word_10687190 = 1;
    dword_10687188 = 0;
    dword_1068718C = 0;
    word_10687192 = 32;
    dword_10687194 = 0;
    dword_10687198 = 0;
    dword_1068719C = (int)sub_10406F50;
    dword_106871A0 = 0;
    dword_106871A4 = 0;
    dword_106871A8 = 0;
    dword_106871AC = 0;
    dword_106871B0 = 0;
    dword_106871B4 = 0;
    dword_106871B8 = (int)sub_100390B0((char **)&dword_106F05E4, "IgniteThink");
    word_106871C4 = 1;
    dword_106871BC = 0;
    dword_106871C0 = 0;
    word_106871C6 = 32;
    dword_106871C8 = 0;
    dword_106871CC = 0;
    dword_106871D0 = (int)sub_10407CF0;
    dword_106871D4 = 0;
    dword_106871D8 = 0;
    dword_106871DC = 0;
    dword_106871E0 = 0;
    dword_106871E4 = 0;
    dword_106871E8 = 0;
    dword_106871EC = (int)sub_100390B0((char **)&dword_106F05E4, "SeekThink");
    dword_106871F0 = 0;
    dword_106871F4 = 0;
    dword_106871F8 = 2097153;
    dword_106871FC = 0;
    dword_10687200 = 0;
    dword_10687204 = (int)sub_104063C0;
    dword_10687208 = 0;
    dword_1068720C = 0;
    dword_10687210 = 0;
    dword_10687214 = 0;
    dword_10687218 = 0;
  }
  dword_106866F0 = 12;
  dword_106866EC = (int)&unk_10686FAC;
  return &dword_106866EC;
}
