void __thiscall sub_1008BD20(_BYTE *this)
{
  const char *v2; // eax
  int v3; // eax
  float v4; // [esp+4h] [ebp-Ch]

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 452))(dword_106B3CDC) )
    goto LABEL_22;
  if ( *(_DWORD *)(dword_1069367C + 48) )
    goto LABEL_9;
  if ( this[800] )
  {
    sub_1008BCE0((int)this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
        dword_106B31D0,
        "exec map_edit.cfg\n");
    sub_100EC3F0(0, 0.0, 0);
    if ( !byte_1069362D )
      dword_1069042C &= ~1u;
    goto LABEL_8;
  }
  if ( !this[813] && (!byte_1069362C || (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0)) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
    {
      v2 = *(const char **)(dword_106B31C8 + 60);
      if ( !v2 )
        v2 = String;
      v3 = sub_10123D10((char)v2, *(_DWORD *)(dword_106B31C8 + 64), 0);
      if ( v3 == 1 )
      {
        DevMsg("\nAborting map_edit\nWorldcraft not running...\n\n");
        sub_10260160(4, "Worldcraft not running...\n", 0, 0, 0, 0);
LABEL_21:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "disconnect\n");
LABEL_22:
        sub_100EC3F0(0, 0.0, 0);
        return;
      }
      if ( v3 == 2 )
      {
        DevMsg("\nAborting map_edit\nWC/Engine map versions different...\n\n");
        sub_10260160(4, "WC/Engine map versions different...\n", 0, 0, 0, 0);
        goto LABEL_21;
      }
      ++*(_DWORD *)(dword_106B31C8 + 64);
    }
    DevMsg("Node Graph out of Date. Rebuilding...\n");
    sub_10260160(4, "Node Graph out of Date. Rebuilding...\n", 0, 0, 0, 0);
    this[800] = 1;
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0(v4, 0);
    return;
  }
LABEL_8:
  sub_1006AAC0();
  sub_10085F70(this);
LABEL_9:
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0);
  this[812] = 1;
  if ( sub_1016BFB0(&dword_10690DF8) )
  {
    if ( !*(_DWORD *)(dword_106935D8 + 4) )
      DevMsg("WARNING: Level contains NPCs but has no path nodes\n");
  }
}
