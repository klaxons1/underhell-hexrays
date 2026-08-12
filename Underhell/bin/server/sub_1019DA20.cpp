char __usercall sub_1019DA20@<al>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax

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
        if ( *(_DWORD *)(v1 + 1092) )
        {
          v2 = *(_DWORD *)(v1 + 1088);
          if ( v2 )
          {
            sub_1018DAE0(v2, *(_DWORD *)(v1 + 1100), -1, 1);
            LOBYTE(v3) = sub_1023C380((int)"EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
          }
          else
          {
            LOBYTE(v3) = sub_1023C380((int)"EDIT_MOVE_CORNER.NoMarkedArea", 0.0, 0);
          }
        }
      }
    }
  }
  return v3;
}
