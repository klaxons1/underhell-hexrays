void __thiscall sub_10212CE0(int this)
{
  double v2; // st7
  char *v3; // eax
  unsigned int v4; // eax
  char v5; // bl
  int *v6; // ecx
  float v7; // [esp+8h] [ebp-18h]

  if ( *(char **)(this + 92) == "dynamic_prop" || sub_100D6240((_DWORD *)this, "dynamic_prop") )
    sub_100D5D20((_DWORD *)this, (int)"prop_dynamic");
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 44))(this + 320)
    && (*(char **)(this + 92) == "prop_dynamic" || sub_100D6240((_DWORD *)this, "prop_dynamic")) )
  {
    sub_10112C00(this + 320, 3);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  }
  sub_10210E40(this, this + 320);
  if ( (*(_BYTE *)(this + 252) & 1) == 0 )
  {
    if ( *(char **)(this + 92) == "dynamic_prop"
      || sub_100D6240((_DWORD *)this, "dynamic_prop")
      || *(char **)(this + 92) == "prop_dynamic_override"
      || sub_100D6240((_DWORD *)this, "prop_dynamic_override") )
    {
      sub_100D5D20((_DWORD *)this, (int)"prop_dynamic");
    }
    sub_100EA940((int *)this, 0x40000);
    if ( *(_BYTE *)(this + 1532) || *(_DWORD *)(this + 1520) )
    {
      sub_100EA9A0((int *)this, 0x40000);
      if ( *(_BYTE *)(this + 1532) )
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_102113C0, 0.0, 0);
        v2 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               *(float *)(this + 1540),
               *(float *)(this + 1544))
           + *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 1536) = v2;
        v7 = v2 + *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC4A0((int *)this, v7, 0);
      }
      else
      {
        v3 = *(char **)(this + 1520);
        if ( !v3 )
          v3 = (char *)String;
        sub_1020FBB0((_DWORD *)this, v3);
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
    if ( *(_DWORD *)(this + 1552) )
    {
      v4 = *(_DWORD *)(this + 300);
      if ( v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
      {
        sub_101C8460(this, this);
      }
    }
    if ( *(_BYTE *)(this + 1550) )
      sub_100EAB80((_DWORD *)this, 32);
    if ( !*(_BYTE *)(this + 1296) )
      sub_102076A0((_DWORD *)this);
    v5 = (*(_DWORD *)(this + 248) & 0x40) != 0;
    if ( v5 != *(_BYTE *)(this + 1551) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 1551);
      }
      *(_BYTE *)(this + 1551) = v5;
    }
    if ( (*(_DWORD *)(this + 248) & 0x100) != 0 )
      sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  }
}
