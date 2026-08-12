void __thiscall sub_101438D0(int *this, float a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx

  if ( (dword_1043C8C8 & 1) == 0 )
  {
    dword_1043C8C8 |= 1u;
    dword_1043C8C4 = CVProfile::FindOrCreateCounter(g_VProfCurrentProfile, "RenderWorld", 0);
    atexit(nullsub_8);
  }
  ++*(_DWORD *)dword_1043C8C4;
  CVProfile::EnterScope(g_VProfCurrentProfile, "DrawWorld", 0, "World Rendering", 0, 4);
  if ( *(_DWORD *)(dword_1043BED4 + 48) )
  {
    v3 = *(_DWORD *)dword_10413168;
    v4 = sub_10142260(this[33]);
    (*(void (__thiscall **)(int, int, int, _DWORD))(v3 + 52))(v5, this[35], v4, LODWORD(a2));
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
