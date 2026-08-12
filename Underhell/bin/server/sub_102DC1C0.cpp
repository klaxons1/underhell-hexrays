void sub_102DC1C0()
{
  int v0; // eax
  int v1; // esi
  int (__thiscall *v2)(int, const char *); // edx
  int v3; // eax
  double v4; // st7
  int v5; // edx
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  float v9; // [esp+4h] [ebp-4h]

  v0 = sub_10153490();
  v1 = v0;
  if ( v0 && (*(_BYTE *)(v0 + 256) & 0x20) == 0 )
  {
    if ( byte_106E0C4C )
    {
      v3 = dword_106E0C48;
    }
    else
    {
      v2 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52);
      byte_106E0C4C = 1;
      v3 = v2(cvar, "cl_forwardspeed");
      dword_106E0C48 = v3;
    }
    if ( !*(_DWORD *)(dword_106E0A94 + 48) || *(_BYTE *)(v1 + 4184) )
      goto LABEL_12;
    v4 = 400.0;
    v9 = 400.0;
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 + 28);
      v6 = *(float *)(v5 + 44);
      v9 = *(float *)(v5 + 44);
      v7 = v6 > 1.0;
      v8 = 1.0 == v6;
      v4 = 1.0;
      if ( !v7 && !v8 )
        v9 = 1.0;
    }
    sub_101E37E0((float *)v1);
    if ( v4 / v9 <= *(float *)(dword_106E0A4C + 44) )
LABEL_12:
      sub_101E37C0((_BYTE *)v1);
  }
}
