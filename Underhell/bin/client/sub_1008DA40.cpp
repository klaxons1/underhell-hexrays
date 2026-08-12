void __thiscall sub_1008DA40(_DWORD *this, double a2)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax

  CVProfile::EnterScope(g_VProfCurrentProfile, "CEffectsList::DrawEffects", 0, "Particle/Effect_Rendering", 0, 4);
  v3 = this[1] - 1;
  if ( v3 >= 0 )
  {
    v4 = &this[v3 + 2];
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 4))(*v4, LODWORD(a2), HIDWORD(a2));
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5) )
        {
          v6 = this[1];
          if ( v3 < v6 )
          {
            v7 = *v4;
            v8 = v6 - 1;
            this[1] = v8;
            if ( v8 > 0 && v3 != v8 )
              *v4 = this[v8 + 2];
            (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 16))(v7);
            (**(void (__thiscall ***)(int, int))v7)(v7, 1);
          }
        }
      }
      --v4;
      --v3;
    }
    while ( v3 >= 0 );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
