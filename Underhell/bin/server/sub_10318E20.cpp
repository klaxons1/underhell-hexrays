void __thiscall sub_10318E20(_BYTE *this, int a2)
{
  int v2; // esi
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int *v7; // eax

  v2 = (int)this;
  if ( !this[1136] )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 1124);
      if ( v3 == -1 )
        break;
      v4 = &off_1061BE18[4 * (*(_DWORD *)(v2 + 1124) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v2 + 1124) & 0xFFF) + 2] != v5 || !*v4 )
        break;
      if ( off_1061BE18[4 * (*(_DWORD *)(v2 + 1124) & 0xFFF) + 2] == v5 )
        v6 = *v4;
      else
        v6 = 0;
      v2 = v6;
      if ( *(_BYTE *)(v6 + 1136) )
        return;
    }
    if ( *(_DWORD *)(v2 + 1128) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(v2 + 1128));
      *(_DWORD *)(v2 + 1128) = 0;
    }
    if ( *(_DWORD *)(v2 + 1132) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(v2 + 1132));
      *(_DWORD *)(v2 + 1132) = 0;
    }
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v7 = (int *)sub_102AF950((float *)(v2 + 580));
    if ( v7 )
      sub_100F5880(v7, 10.0);
    sub_1023C380((_DWORD *)v2, (int)"NPC_AttackHelicopter.Crash", 0.0, 0);
    *(_BYTE *)(v2 + 1136) = 1;
  }
}
