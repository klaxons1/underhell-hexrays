char __usercall sub_1019DA80@<al>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  LOBYTE(v8) = sub_1025EF10();
  if ( (_BYTE)v8 )
  {
    v1 = dword_106B8370;
    v8 = sub_1025FC50();
    if ( v8 )
    {
      v8 = *(_DWORD *)(v1 + 1124);
      if ( v8 != 1 && !*(_BYTE *)(v1 + 1168) && v8 != 4 )
      {
        LOBYTE(v8) = sub_10192560(v1, a1);
        if ( *(_DWORD *)(v1 + 1172) )
        {
          sub_1023C380((int)"EDIT_MOVE_CORNER.MarkedArea", 0.0, 0);
          v2 = *(_DWORD *)(v1 + 1172);
          v3 = sub_1018AB40(*(_DWORD *)(v2 + 52));
          sub_1019CD40(v2, *(float *)&a1, v1, v3);
          v4 = *(_DWORD *)(v1 + 1172);
          v5 = *(_DWORD *)(v4 + 44);
          *(_DWORD *)(v4 + 44) = *(_DWORD *)(v4 + 32);
          *(_DWORD *)(*(_DWORD *)(v1 + 1172) + 32) = v5;
          v6 = *(_DWORD *)(v1 + 1172);
          v7 = *(_DWORD *)(v6 + 40);
          *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 36);
          v8 = *(_DWORD *)(v1 + 1172);
          *(_DWORD *)(v8 + 36) = v7;
        }
        *(_DWORD *)(v1 + 1180) = 0;
        *(_DWORD *)(v1 + 1088) = 0;
        *(_DWORD *)(v1 + 1100) = 4;
      }
    }
  }
  return v8;
}
