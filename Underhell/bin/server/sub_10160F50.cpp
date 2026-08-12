int __thiscall sub_10160F50(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  char v6; // al
  int result; // eax
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF

  *(_WORD *)(this + 2475) = 1;
  if ( !_stricmp(&byte_106B3F00, "unknown") )
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
            v6 = sub_1015F550((int)v8, 8);
            sub_10429A00(&byte_106B3F00, 0x14u, "H:%x", v6);
          }
        }
      }
    }
  }
  sub_10160E40((char *)this);
  *(float *)(this + 2588) = 0.0;
  *(float *)(this + 2488) = *(float *)dword_106B31C8;
  (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 28))(off_10627F88);
  result = (**(int (__thiscall ***)(int))off_10627F88)(off_10627F88);
  if ( (_BYTE)result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 184))(off_10627F88) )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 0);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 204))(off_10627F88);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 168))(off_10627F88);
  }
  return result;
}
