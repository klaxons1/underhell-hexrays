char __usercall sub_1019D980@<al>(int a1@<ebp>)
{
  _DWORD *v1; // esi
  int v2; // eax

  LOBYTE(v2) = sub_1025EF10();
  if ( (_BYTE)v2 )
  {
    v1 = (_DWORD *)dword_106B8370;
    v2 = sub_1025FC50();
    if ( v2 && v1[281] == 4 )
    {
      LOBYTE(v2) = sub_10192560((int)v1, a1);
      if ( v1[273] )
      {
        sub_1023C380((int)"EDIT_PLACE_PICK", 0.0, 0);
        v2 = v1[273];
        *(_DWORD *)(dword_106B8370 + 1068) = *(_DWORD *)(v2 + 44);
      }
      v1[295] = 0;
      v1[272] = 0;
      v1[275] = 4;
    }
  }
  return v2;
}
