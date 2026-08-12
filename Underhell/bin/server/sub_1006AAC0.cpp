void sub_1006AAC0()
{
  int v0; // esi
  int v1; // edi
  int v2; // eax
  int v3; // edi
  _BYTE *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp-12h] [ebp-14h]
  char v10; // [esp+1h] [ebp-1h]

  if ( !*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) )
  {
    Warning("ERROR: Trying initialize links with no WC ID table!\n");
    return;
  }
  if ( !byte_10692E28 )
  {
    byte_10692E28 = 1;
    v10 = 0;
    sub_1006AA70();
    v0 = dword_10692E2C;
    if ( dword_10692E2C )
    {
      while ( 1 )
      {
        if ( !*(_BYTE *)(v0 + 829) )
        {
          v1 = sub_10085FA0(*(_DWORD *)(v0 + 804));
          if ( v1 == -1 )
            DevMsg("ERROR: Dynamic link source WC node %d not found\n", *(_DWORD *)(v0 + 804));
          v2 = sub_10085FA0(*(_DWORD *)(v0 + 808));
          if ( v2 == -1 )
          {
            DevMsg("ERROR: Dynamic link dest WC node %d not found\n", *(_DWORD *)(v0 + 808));
            v2 = -1;
          }
          *(_DWORD *)(v0 + 812) = v1;
          *(_DWORD *)(v0 + 816) = v2;
          *(_BYTE *)(v0 + 829) = 1;
        }
        v3 = *(_DWORD *)(v0 + 812);
        if ( v3 == -1 || *(_DWORD *)(v0 + 816) == -1 )
        {
          v9 = v0;
          v0 = *(_DWORD *)(v0 + 800);
          sub_1025FAE0(v9);
          goto LABEL_49;
        }
        if ( (*(_DWORD *)(v0 + 248) & 0x2FF) == 0 )
          goto LABEL_47;
        v4 = (_BYTE *)sub_10069C20((_DWORD *)v0);
        if ( v4 )
          break;
        if ( v3 < 0 || v3 >= *(_DWORD *)(dword_106935D8 + 4) )
        {
          ++dword_10691DE0;
          v5 = 0;
        }
        else
        {
          v5 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v3);
        }
        v6 = *(_DWORD *)(v0 + 816);
        if ( v6 < 0 || v6 >= *(_DWORD *)(dword_106935D8 + 4) )
        {
          ++dword_10691DE0;
          v7 = 0;
        }
        else
        {
          v7 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v6);
        }
        if ( !v5 || !v7 )
          goto LABEL_47;
        v4 = (_BYTE *)sub_10085280(*(_DWORD *)(v0 + 812), *(_DWORD *)(v0 + 816), 0);
        if ( v4 )
          break;
        DevMsg("Failed to create dynamic link (%d <--> %d)\n", *(_DWORD *)(v0 + 804), *(_DWORD *)(v0 + 808));
        sub_10069CA0(v0);
        v0 = *(_DWORD *)(v0 + 800);
LABEL_49:
        if ( !v0 )
        {
          if ( v10 )
            sub_10086B50(dword_106935D8);
          return;
        }
      }
      v8 = *(_DWORD *)(v0 + 248) & 0x2FF;
      v10 = 1;
      if ( (*(_BYTE *)(v0 + 248) & 1) != 0 )
        v4[4] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 2) != 0 )
        v4[5] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 4) != 0 )
        v4[6] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 8) != 0 )
        v4[7] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x10) != 0 )
        v4[8] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x20) != 0 )
        v4[9] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x40) != 0 )
        v4[10] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x80u) != 0 )
        v4[11] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x100) != 0 )
        v4[12] = *(_BYTE *)(v0 + 832);
      if ( (v8 & 0x200) != 0 )
        v4[13] = *(_BYTE *)(v0 + 832);
LABEL_47:
      sub_10069CA0(v0);
      v0 = *(_DWORD *)(v0 + 800);
      goto LABEL_49;
    }
  }
}
