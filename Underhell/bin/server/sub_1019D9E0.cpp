char __usercall sub_1019D9E0@<al>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // eax

  LOBYTE(v2) = sub_1025EF10();
  if ( (_BYTE)v2 )
  {
    v1 = dword_106B8370;
    v2 = sub_1025FC50();
    if ( v2 )
    {
      v2 = *(_DWORD *)(v1 + 1124);
      if ( v2 != 1 && !*(_BYTE *)(v1 + 1168) && v2 != 4 )
      {
        LOBYTE(v2) = sub_10192560(v1, a1);
        if ( *(_DWORD *)(v1 + 1092) )
        {
          if ( *(_DWORD *)(v1 + 1088) )
          {
            *(_DWORD *)(v1 + 1100) = (*(_DWORD *)(v1 + 1100) + 1) % 5;
            LOBYTE(v2) = sub_1023C380((int)"EDIT_SELECT_CORNER.MarkedArea", 0.0, 0);
          }
          else
          {
            LOBYTE(v2) = sub_1023C380((int)"EDIT_SELECT_CORNER.NoMarkedArea", 0.0, 0);
          }
        }
      }
    }
  }
  return v2;
}
