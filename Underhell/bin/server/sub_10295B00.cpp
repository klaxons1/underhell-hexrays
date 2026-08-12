void __thiscall sub_10295B00(int this)
{
  _BYTE *v2; // ecx
  _DWORD *v3; // ecx
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // [esp-4h] [ebp-8h]

  if ( *(_BYTE *)(this + 38) )
  {
    v2 = *(_BYTE **)(this + 4);
    if ( (v2[252] & 1) == 0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 264))(v2) )
      {
        v3 = *(_DWORD **)(this + 4);
        v4 = (const char *)v3[23];
        if ( !v4 )
          v4 = String;
        v6 = v4;
        v5 = sub_100D6390(v3);
        Warning("NPC %s(%s) left actbusy without playing exit anim.\n", v5, v6);
        *(_BYTE *)(this + 38) = 0;
      }
    }
  }
  sub_100EA9A0(*(int **)(this + 4), 1024);
  if ( *(_BYTE *)(this + 28) )
    sub_10027A90(*(_DWORD *)(this + 4), 1);
}
