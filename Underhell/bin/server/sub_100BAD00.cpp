void __cdecl sub_100BAD00(int a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  const char *v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // [esp+Ch] [ebp+8h]

  if ( a1 && (unsigned __int8)sub_10245FE0(a1) )
  {
    v2 = 0;
    if ( sub_10245270(a1) > 0 )
    {
      while ( 1 )
      {
        v3 = sub_10245550(v2);
        *(_DWORD *)(v3 + 12) |= 0x1000u;
        v8 = v3;
        if ( v2 < 0 || v2 >= sub_10245270(a1) )
          break;
        v4 = sub_10245550(v2);
        v5 = (const char *)(v4 + *(_DWORD *)(v4 + 8));
        if ( *v5 )
          goto LABEL_7;
LABEL_12:
        v7 = (_DWORD *)sub_10245550(v2);
        sub_100BA720(v7);
        if ( ++v2 >= sub_10245270(a1) )
          goto LABEL_13;
      }
      Msg("Bad sequence in GetSequenceActivityName() for model '%s'!\n", (const char *)(*(_DWORD *)a1 + 12));
      v5 = "Unknown";
LABEL_7:
      v6 = sub_10002030((int)v5);
      if ( v6 == -1 )
        v6 = sub_100032E0((int)v5);
      *(_DWORD *)(v8 + 16) = v6;
      goto LABEL_12;
    }
LABEL_13:
    sub_10245A60(dword_105FD4CC);
  }
}
