char __usercall sub_101942B0@<al>(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int i; // ecx
  int v10; // ecx
  int v11; // ebx
  int v12; // ecx
  float v14; // [esp+0h] [ebp-14h]

  v3 = sub_1025FC50();
  if ( v3 )
  {
    v3 = *(_DWORD *)(a1 + 1124);
    if ( v3 != 1 && !*(_BYTE *)(a1 + 1168) && v3 != 4 )
    {
      LOBYTE(v3) = sub_10192560(a1, a2);
      if ( *(_DWORD *)(a1 + 1092) )
      {
        if ( *(_DWORD *)(a1 + 1088) )
        {
          LOBYTE(v3) = sub_1023C380((int)"EDIT_MARK_UNNAMED.Enable", 0.0, 0);
          *(_DWORD *)(a1 + 1100) = 4;
          *(_DWORD *)(a1 + 1180) = 0;
          *(_DWORD *)(a1 + 1088) = 0;
          *(_DWORD *)(a1 + 1100) = 4;
          return v3;
        }
        *(_DWORD *)(a1 + 1180) = 0;
        *(_DWORD *)(a1 + 1088) = 0;
        *(_DWORD *)(a1 + 1100) = 4;
        v4 = dword_10632630;
        if ( dword_10632630 != -1 )
        {
          while ( 1 )
          {
            v5 = 3 * v4;
            v6 = *(_DWORD *)(dword_10632624 + 4 * v5);
            v7 = dword_10632624 + 4 * v5;
            if ( !*(_DWORD *)(v6 + 44) )
              break;
            v4 = *(_DWORD *)(v7 + 8);
            if ( v4 == -1 )
              goto LABEL_13;
          }
          *(_DWORD *)(a1 + 1180) = 0;
          *(_DWORD *)(a1 + 1088) = v6;
          *(_DWORD *)(a1 + 1100) = 4;
        }
LABEL_13:
        v14 = 0.0;
        if ( !*(_DWORD *)(a1 + 1088) )
        {
          LOBYTE(v3) = sub_1023C380((int)"EDIT_MARK_UNNAMED.NoMarkedArea", v14, 0);
          *(_DWORD *)(a1 + 1100) = 4;
          return v3;
        }
        sub_1023C380((int)"EDIT_MARK_UNNAMED.MarkedArea", v14, 0);
        v8 = 0;
        for ( i = dword_10632630; i != -1; i = *(_DWORD *)(v12 + 8) )
        {
          v10 = 3 * i;
          v11 = *(_DWORD *)(dword_10632624 + 4 * v10);
          v12 = dword_10632624 + 4 * v10;
          if ( !*(_DWORD *)(v11 + 44) )
            ++v8;
        }
        LOBYTE(v3) = Msg(
                       "Marked Area is connected to %d other Areas - there are %d total unnamed areas\n",
                       *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 548)
                     + *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 584)
                     + *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 620)
                     + *(_DWORD *)(*(_DWORD *)(a1 + 1088) + 656),
                       v8);
      }
      *(_DWORD *)(a1 + 1100) = 4;
    }
  }
  return v3;
}
