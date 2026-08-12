char __usercall sub_1019D6F0@<al>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax
  float v5; // [esp+0h] [ebp-10h]

  LOBYTE(v3) = sub_1025EF10();
  if ( (_BYTE)v3 )
  {
    v1 = dword_106B8370;
    v3 = sub_1025FC50();
    if ( v3 )
    {
      v3 = *(_DWORD *)(v1 + 1124);
      if ( v3 != 1 && !*(_BYTE *)(v1 + 1168) && v3 != 4 )
      {
        LOBYTE(v3) = sub_10192560(v1, a1);
        v2 = *(_DWORD *)(v1 + 1092);
        if ( v2 )
        {
          if ( *(_DWORD *)(v1 + 1088) )
          {
            v5 = 0.0;
            if ( sub_1018FE20(v2, *(_DWORD *)(v1 + 1088)) )
            {
              LOBYTE(v3) = sub_1023C380((int)"EDIT_SPLICE.MarkedArea", v5, 0);
              goto LABEL_14;
            }
          }
          else
          {
            Msg(
              "To splice, mark an area, highlight a second area, then invoke the splice command to create an area between them");
            v5 = 0.0;
          }
          LOBYTE(v3) = sub_1023C380((int)"EDIT_SPLICE.NoMarkedArea", v5, 0);
        }
LABEL_14:
        *(_DWORD *)(v1 + 1180) = 0;
        *(_DWORD *)(v1 + 1088) = 0;
        *(_DWORD *)(v1 + 1100) = 4;
      }
    }
  }
  return v3;
}
