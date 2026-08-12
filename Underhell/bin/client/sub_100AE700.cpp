int __thiscall sub_100AE700(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  char v6; // al
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF

  *(_WORD *)(this + 2475) = 1;
  if ( !_stricmp(&Src, "unknown") )
  {
    v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "hostip");
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "hostport");
    if ( v2 )
    {
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 28);
        v8[0] = *(_DWORD *)(*(_DWORD *)(v2 + 28) + 48);
        v5 = *(_DWORD *)(v4 + 48);
        v8[1] = v5;
        if ( v8[0] )
        {
          if ( v5 )
          {
            v6 = sub_100AE6A0((int)v8, 8);
            sub_10228370(&Src, 0x14u, "H:%x", v6);
          }
        }
      }
    }
  }
  *(float *)(this + 2588) = 0.0;
  *(float *)(this + 2488) = *(float *)off_103DC81C;
  return ((int (__thiscall *)(int (***)()))(*off_103E0700)[7])(off_103E0700);
}
