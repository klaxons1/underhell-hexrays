void __thiscall sub_100590F0(int this)
{
  char *v1; // eax
  int v2; // edi
  int v3; // esi
  float v4; // ecx
  unsigned __int8 v5; // al
  double v6; // st7
  int v7; // [esp+24h] [ebp-Ch]
  float v8; // [esp+24h] [ebp-Ch]
  _DWORD *v10; // [esp+2Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 1184) )
  {
    v1 = (char *)sub_10074520(*(_DWORD *)(this + 1180));
    if ( v1 )
    {
      if ( *v1 )
      {
        v2 = sub_100EA350(v1, 1, -1, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
        if ( v2 )
        {
          v3 = 1;
          v10 = (_DWORD *)(this + 1192);
          v7 = 63;
          do
          {
            if ( *v10 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*v10 & 0xFFF) + 2) == *v10 >> 12 )
            {
              v4 = *((float *)off_103DCD74 + 4 * (*v10 & 0xFFF) + 1);
              if ( v4 != 0.0 )
                sub_100EA130(v2, v3, v4, 1, 0.0, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
            }
            v5 = *(_BYTE *)(this + v3 + 1443);
            if ( v5 )
              sub_10058FF0((_DWORD *)(v2 + 16), v3, v5);
            ++v10;
            ++v3;
            --v7;
          }
          while ( v7 );
          sub_100E9FD0(v2, 0.0);
          v6 = *((float *)off_103DC81C + 3) - *(float *)(this + 1188);
          if ( v6 > 0.0099999998 )
          {
            CVProfile::EnterScope(
              g_VProfCurrentProfile,
              "C_ParticleSystem::ClientThink SkipToTime",
              0,
              "Particle Simulation",
              0,
              4);
            v8 = v6;
            sub_101FA120(v8);
            CVProfile::ExitScope(g_VProfCurrentProfile);
          }
        }
      }
    }
  }
}
