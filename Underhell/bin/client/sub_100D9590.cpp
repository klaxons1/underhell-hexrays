char __thiscall sub_100D9590(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx

  v2 = CommandLine_Tier0(this);
  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-nomouse");
  if ( !v3 )
  {
    *(_BYTE *)(this + 48) = 1;
    *(float *)(this + 60) = 0.0;
    *(_BYTE *)(this + 107) = 0;
    *(float *)(this + 64) = 0.0;
    v5 = CommandLine_Tier0(v4);
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 40))(v5, "-useforcedmparms");
    if ( v3 )
    {
      LOBYTE(v3) = SystemParametersInfoA(3u, 0, (PVOID)(this + 80), 0);
      *(_BYTE *)(this + 107) = v3;
      if ( (_BYTE)v3 )
      {
        v7 = CommandLine_Tier0(v6);
        if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 40))(v7, "-noforcemspd") )
        {
          v8 = *(_DWORD *)(this + 88);
          *(_DWORD *)(this + 100) = v8;
        }
        else
        {
          *(_BYTE *)(this + 106) = 1;
        }
        v9 = CommandLine_Tier0(v8);
        v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 40))(v9, "-noforcemaccel");
        if ( v3 )
        {
          v10 = *(_DWORD *)(this + 84);
          *(_DWORD *)(this + 92) = *(_DWORD *)(this + 80);
          *(_DWORD *)(this + 96) = v10;
        }
        else
        {
          *(_WORD *)(this + 104) = 257;
        }
      }
    }
  }
  return v3;
}
