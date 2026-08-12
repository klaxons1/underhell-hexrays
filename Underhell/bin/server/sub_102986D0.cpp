char __thiscall sub_102986D0(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  void *v5; // esi
  const char *v6; // edi
  _DWORD *v7; // ecx
  const char *v8; // eax
  const char *v10; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  while ( 1 )
  {
    v4 = (_DWORD *)sub_102976E0((_DWORD *)this, v3);
    v5 = v4;
    if ( !v4 )
      goto LABEL_6;
    LOBYTE(v4) = sub_10295660(v4, (int *)&v10);
    if ( !v10[37] || !*(_BYTE *)(this + 1116) )
      break;
    v5 = 0;
LABEL_6:
    if ( !*(_BYTE *)(this + 1116) && ++v3 < 20 )
      continue;
    break;
  }
  if ( v5 )
  {
    sub_10295660(v5, (int *)&v10);
    v6 = v10;
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v7 = (_DWORD *)*((_DWORD *)v10 + 1);
      v10 = (const char *)v7[23];
      if ( !v10 )
        v10 = String;
      v8 = sub_100D6390(v7);
      Msg("ACTBUSY: behavior disabled on NPC %s (%s)\n", v10, v8);
    }
    if ( v6[16] )
      sub_10023CB0(*((char **)v6 + 1), 25);
    sub_10295E70((int)v6);
    *((_BYTE *)v6 + 16) = 0;
    v4 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 8))(v5);
    *(_DWORD *)(this + 1112) = *v4;
  }
  return (char)v4;
}
