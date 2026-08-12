void __thiscall sub_100EDA60(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  const char *v6; // eax
  int v7; // ecx
  const char *v8; // edx

  DevMsg("Particle Effect Systems:\n");
  v3 = *(unsigned __int16 *)(this + 52);
  if ( v3 != 0xFFFF )
  {
    v4 = *(_DWORD *)(this + 40);
    do
    {
      v5 = 8 * (unsigned __int16)v3;
      v6 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(v4 + v5) + 140) + 44))(*(_DWORD *)(*(_DWORD *)(v4 + v5) + 140));
      v7 = *(_DWORD *)(v5 + *(_DWORD *)(this + 40));
      v8 = "on";
      if ( (*(_BYTE *)(v7 + 148) & 8) == 0 )
        v8 = "off";
      DevMsg("%3d: NumActive: %3d, AutoBBox: %3s \"%s\" \n", v3, *(unsigned __int16 *)(v7 + 132), v8, v6);
      v4 = *(_DWORD *)(this + 40);
      v3 = *(unsigned __int16 *)(v4 + v5 + 6);
    }
    while ( v3 != 0xFFFF );
  }
}
