char __usercall sub_1023B7D0@<al>(int *a1@<ebx>, int a2@<edi>)
{
  char v2; // al
  int v4; // eax
  int v5; // eax
  int v6; // edx

  if ( dword_1064C3F0 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, dword_1064C3F0);
    dword_1064C3F0 = 0;
  }
  sub_1042F730(&unk_1064C3F4);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 24))(dword_106B3204);
  v4 = CommandLine_Tier0();
  byte_1064C3EC = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v4 + 12))(v4, "-makereslists", 0) != 0;
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "closecaption");
  v6 = *(_DWORD *)dword_106B3204;
  dword_106C4E90 = v5;
  (*(void (__thiscall **)(int))(v6 + 20))(dword_106B3204);
  sub_1023B1C0((int)&off_1064C3E8, (int)a1);
  if ( (byte_1060F3B0 & 0x10) != 0 )
  {
    v2 = byte_1060F3B0 & 0xEF;
    byte_1060F3B0 = v2;
    if ( (v2 & 8) != 0 )
    {
      sub_100E1720((int)&off_1060F368, a1, a2);
      sub_100DDC70((int)&off_1060F36C);
      return sub_100E7AF0((int)&off_1060F368);
    }
    if ( (v2 & 4) != 0 && !(unsigned __int8)sub_100D7910((char **)&off_1060F368) )
      sub_100DE390((int)&off_1060F368);
    sub_100DDC70((int)&off_1060F36C);
  }
  return sub_100E7AF0((int)&off_1060F368);
}
