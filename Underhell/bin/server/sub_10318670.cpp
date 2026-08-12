void __thiscall sub_10318670(_BYTE *this, int a2)
{
  char **v2; // esi
  unsigned int v4; // eax
  int v5; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (char **)a2;
  if ( *(_BYTE *)(a2 + 361)
    && (*(_BYTE *)(a2 + 356) & 4) == 0
    && (this[2145]
     || (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24))
     && (!*(_DWORD *)(dword_10698344 + 48) || *(_DWORD *)(a2 + 420) == 7)) )
  {
    if ( *(char **)(a2 + 92) == "phys_bone_follower" || sub_100D6240((_DWORD *)a2, "phys_bone_follower") )
    {
      v4 = *(_DWORD *)(a2 + 412);
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 1] )
      {
        v2 = (char **)sub_10019B00((_DWORD *)a2);
      }
    }
    if ( (*((int (__thiscall **)(char **))*v2 + 55))(v2) != 10
      || v2[23] != "npc_helicopter" && !sub_100D6240(v2, "npc_helicopter") )
    {
      if ( sub_10316780((int)this) )
      {
        v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
               dword_106B31F8,
               "helicopter_grenade_punt_miss",
               0);
        if ( v5 )
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v5, 0);
      }
    }
    (*(void (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)this + 540))(this, v6, 0);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_10316550(this, (int)(this + 580), (int)v6);
  }
}
