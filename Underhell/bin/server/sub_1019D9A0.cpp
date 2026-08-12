char __usercall sub_1019D9A0@<al>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // eax
  float v4; // [esp+0h] [ebp-10h]

  LOBYTE(v2) = sub_1025EF10();
  if ( (_BYTE)v2 )
  {
    v1 = dword_106B8370;
    v2 = sub_1025FC50();
    if ( v2 && *(_DWORD *)(v1 + 1124) == 4 )
    {
      LOBYTE(v2) = sub_10192560(v1, a1);
      if ( *(_DWORD *)(v1 + 1092) )
      {
        v4 = 0.0;
        if ( *(_BYTE *)(v1 + 1116) )
        {
          *(_BYTE *)(v1 + 1116) = 0;
          LOBYTE(v2) = sub_1023C380((int)"Bot.EditSwitchOff", v4, 0);
        }
        else
        {
          *(_BYTE *)(v1 + 1116) = 1;
          sub_1023C380((int)"Bot.EditSwitchOn", v4, 0);
          v2 = *(_DWORD *)(v1 + 1092);
          *(_DWORD *)(v2 + 44) = *(_DWORD *)(dword_106B8370 + 1068);
        }
      }
      *(_DWORD *)(v1 + 1180) = 0;
      *(_DWORD *)(v1 + 1088) = 0;
      *(_DWORD *)(v1 + 1100) = 4;
    }
  }
  return v2;
}
