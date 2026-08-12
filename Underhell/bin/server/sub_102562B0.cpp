void __thiscall sub_102562B0(int this)
{
  _DWORD *v2; // edi

  sub_10255CE0(this);
  if ( *(_DWORD *)(dword_106B31C8 + 72) || (*(_DWORD *)(this + 248) & 4) == 0 )
  {
    v2 = sub_10254F80((char *)(this + 1124));
    if ( v2 )
    {
      if ( (v2[63] & 0x800) != 0 )
        sub_100DAE60((int)v2);
      if ( (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B31D0 + 44))(dword_106B31D0, v2 + 145) < 0 )
        Warning(
          "trigger_changelevel to map %s has a landmark embedded in solid!\nThis will break level transitions!\n",
          (const char *)(this + 1092));
      if ( *(_DWORD *)(dword_106C765C + 48) )
      {
        if ( !sub_1012BC90(&dword_1069E3E0, 0, "trigger_transition") )
          Warning("Map has no trigger_transition volumes for landmark %s\n", (const char *)(this + 1124));
      }
    }
    *(_BYTE *)(this + 1156) = 0;
  }
  else
  {
    sub_100EA370((float *)this);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFF3);
    *(_DWORD *)(this + 196) = 0;
  }
}
