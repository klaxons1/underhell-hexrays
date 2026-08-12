int sub_10075B60()
{
  int v0; // esi
  int *v1; // eax
  void *v2; // ecx
  float v4; // [esp+38h] [ebp-8h]

  v0 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 1);
  sub_10034100(0);
  sub_100604C0();
  sub_1003D7F0();
  sub_10025420();
  sub_10034100(1);
  sub_100341C0(1);
  sub_1002E510(1, 0, (int)"OnRenderStart->CViewRender::SetUpView");
  sub_100375B0();
  (*(void (__thiscall **)(int *))(*off_103ED0D8 + 128))(off_103ED0D8);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 16))(dword_10439968);
  v1 = sub_1005FF10();
  (*(void (__thiscall **)(int *))(*v1 + 16))(v1);
  sub_1002A4C0();
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 0);
  sub_10075AC0();
  flt_104452F0 = 0.0;
  sub_10092030(off_103DD830);
  sub_10075440(v2);
  sub_100F6C00();
  sub_1002FE90();
  CVProfile::EnterScope(g_VProfCurrentProfile, "Client TempEnts", 0, "Client Simulation", 0, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 220))(dword_1041315C);
  ((void (__thiscall *)(void ***))(*off_103E9C2C)[5])(off_103E9C2C);
  (*((void (__thiscall **)(void ***))*off_103E773C[0] + 3))(off_103E773C[0]);
  sub_10136C50(0);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  CVProfile::EnterScope(g_VProfCurrentProfile, "ParticleMgr()->Simulate", 0, "Particle Simulation", 0, 4);
  sub_100F0920(*((float *)off_103DC81C + 4));
  sub_100F0840(v4);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_10039430();
  if ( (unsigned __int8)sub_101BC880() )
    sub_100352C0();
  sub_100398D0();
  return (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 104))(v0);
}
