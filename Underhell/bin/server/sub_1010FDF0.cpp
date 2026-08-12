void sub_1010FDF0()
{
  int v0; // eax
  int v1; // esi
  int v2; // edx
  int v3[3]; // [esp+Ch] [ebp-30h] BYREF
  int v4[3]; // [esp+18h] [ebp-24h] BYREF
  int v5[3]; // [esp+24h] [ebp-18h] BYREF
  int v6[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    v0 = sub_10153490();
    v1 = v0;
    if ( v0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v0 + 320))(v0) )
      {
        if ( *(_BYTE *)(v1 + 306) == 8 )
        {
          *(_DWORD *)(v1 + 252) &= ~4u;
          sub_100E0970(v1, v2, 2, 0);
          if ( (*(_DWORD *)(v1 + 252) & 0x800) != 0 )
            sub_100DAE60(v1);
          v6[0] = *(_DWORD *)(v1 + 580);
          v6[1] = *(_DWORD *)(v1 + 584);
          v6[2] = *(_DWORD *)(v1 + 588);
          sub_102601C0(v1, 2, "noclip OFF\n", 0, 0, 0, 0);
          if ( !sub_1010FC80(v1) )
          {
            sub_104222B0(v1 + 3248, v3, v5, v4);
            if ( !sub_1010FCE0(v1, (float *)v3, 1.0, (float *)v6)
              && !sub_1010FCE0(v1, (float *)v5, 1.0, (float *)v6)
              && !sub_1010FCE0(v1, (float *)v5, -1.0, (float *)v6)
              && !sub_1010FCE0(v1, (float *)v4, 1.0, (float *)v6)
              && !sub_1010FCE0(v1, (float *)v4, -1.0, (float *)v6)
              && !sub_1010FCE0(v1, (float *)v3, -1.0, (float *)v6) )
            {
              Msg("Can't find the world\n");
            }
            sub_100E0D20(v1, (float *)v6);
          }
        }
        else
        {
          sub_1010EB30((_DWORD *)v1);
        }
      }
    }
  }
}
