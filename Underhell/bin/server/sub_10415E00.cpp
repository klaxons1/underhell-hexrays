void __thiscall sub_10415E00(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  _DWORD *v8; // esi
  int v9; // esi

  sub_100C6890(this);
  v2 = *(_DWORD *)(this + 300);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = *(_DWORD *)(v5 + 300);
        if ( v6 != -1 )
        {
          v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (v6 & 0xFFF) + 2] == v6 >> 12 )
          {
            v8 = (_DWORD *)*v7;
            if ( *v7 )
            {
              if ( *(_BYTE *)(this + 2136) && (*(unsigned __int8 (__thiscall **)(int))(*v8 + 320))(*v7) )
              {
                v9 = sub_10174000(v8);
                if ( sub_10019AD0((_DWORD *)this) != v9 )
                {
                  Warning(
                    "UNDERHELL WARNING!: Found a glowstick that was attached to player, but it was not the activeglowstick! deleting\n");
                  sub_1025FAC0(this);
                }
              }
            }
          }
        }
      }
    }
  }
}
