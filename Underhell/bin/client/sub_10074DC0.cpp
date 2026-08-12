int __userpurge sub_10074DC0@<eax>(int a1@<edi>, int (__cdecl *a2)(const char *, _DWORD), int a3, void *a4)
{
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  int *v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // [esp+18h] [ebp-10h]
  int v30; // [esp+1Ch] [ebp-Ch]
  _DWORD v31[2]; // [esp+20h] [ebp-8h] BYREF

  nullsub_4();
  sub_101F0370(2.2, 2.2, 0.0, 2, 1, 1, 1, 1);
  off_103DC81C = a4;
  sub_1022CAC0(&a2, 1);
  sub_102335C0(&a2, 1);
  sub_10235200(&a2, 1);
  sub_10074240(dword_1041320C);
  dword_1041315C = a2("VEngineClient013", 0);
  if ( !dword_1041315C )
    return 0;
  dword_10413160 = a2("VEngineModel016", 0);
  if ( !dword_10413160 )
    return 0;
  dword_10413164 = a2("VEngineEffects001", 0);
  if ( !dword_10413164 )
    return 0;
  dword_104131A0 = a2("EngineTraceClient003", 0);
  if ( !dword_104131A0 )
    return 0;
  dword_10413168 = a2("VEngineRenderView013", 0);
  if ( !dword_10413168 )
    return 0;
  dword_1041316C = a2("VDebugOverlay003", 0);
  if ( !dword_1041316C )
    return 0;
  dword_10413174 = a2("VDataCache003", 0);
  if ( !dword_10413174 )
    return 0;
  if ( !dword_1047CA8C )
    return 0;
  dword_10413178 = a2("VModelInfoClient004", 0);
  if ( !dword_10413178 )
    return 0;
  dword_1041317C = a2("VEngineVGui001", 0);
  if ( !dword_1041317C )
    return 0;
  dword_10413180 = a2("VEngineClientStringTable001", 0);
  if ( !dword_10413180 )
    return 0;
  dword_10413184 = a2("SpatialPartition001", 0);
  if ( !dword_10413184 )
    return 0;
  dword_1041318C = a2("VEngineShadowMgr002", 0);
  if ( !dword_1041318C )
    return 0;
  dword_10413190 = a2("StaticPropMgrClient004", 0);
  if ( !dword_10413190 )
    return 0;
  dword_10413194 = a2("IEngineSoundClient003", 0);
  if ( !dword_10413194 )
    return 0;
  dword_10413188 = a2("VFileSystem017", 0);
  if ( !dword_10413188 )
    return 0;
  dword_10413198 = a2("VEngineRandom001", 0);
  if ( !dword_10413198 )
    return 0;
  dword_104131A4 = a2("VENGINE_GAMEUIFUNCS_VERSION005", 0);
  if ( !dword_104131A4 )
    return 0;
  dword_104131A8 = a2("GAMEEVENTSMANAGER002", 0);
  if ( !dword_104131A8 )
    return 0;
  dword_104131AC = a2("VSoundEmitter002", 0);
  if ( !dword_104131AC )
    return 0;
  dword_104131B0 = a2("InputSystemVersion001", 0);
  if ( !dword_104131B0 )
    return 0;
  dword_104131C0 = a2("VAvi001", 0);
  if ( !dword_104131C0 )
    return 0;
  dword_104131B4 = a2("SceneFileCache002", 0);
  if ( !dword_104131B4 )
    return 0;
  dword_104131C4 = a2("ServerUploadGameStats001", 0);
  if ( !dword_104131C4 || !dword_1047CA64 )
    return 0;
  v5 = a3;
  v31[0] = a2;
  v31[1] = a3;
  sub_10079850(v31);
  if ( !(**(unsigned __int8 (__thiscall ***)(int, int (__cdecl *)(const char *, _DWORD), int))dword_104131AC)(
          dword_104131AC,
          a2,
          a1) )
    return 0;
  sub_10074550();
  v7 = CommandLine_Tier0(v6);
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 40))(v7, "-textmode") )
    byte_1041315A = 1;
  v9 = CommandLine_Tier0(v8);
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 40))(v9, "-makedevshots") )
    byte_104133B0 = 1;
  dword_10413170 = a2("VMaterialSystemStub001", 0);
  if ( !dword_1047C97C )
    return 0;
  CGaussianRandomStream::AttachToStream(
    (CGaussianRandomStream *)&unk_104131F8,
    (struct IUniformRandomStream *)dword_10413198);
  sub_10228950(8, 0);
  dword_104131E4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 52))(g_pCVar, "host_thread_mode");
  if ( !(unsigned __int8)sub_100D9E90() )
    return 0;
  v30 = dword_1047C96C;
  sub_100F0920(4096);
  if ( !(unsigned __int8)sub_100EFFC0(v28, v30) || !(unsigned __int8)sub_10131F60(a2) )
    return 0;
  sub_101F42F0("ClientDLL", (int)&a2, 1);
  v10 = sub_100AF250();
  sub_100D33F0(v10);
  v11 = sub_101205E0();
  sub_100D33F0(v11);
  v12 = sub_101BC8A0();
  sub_100D33F0(v12);
  v13 = off_103DCDDC ? (char *)off_103DCDDC + 4 : 0;
  sub_100D33F0(v13);
  v14 = sub_100949D0();
  sub_100D33F0(v14);
  v15 = sub_10131B20();
  sub_100D33F0(v15);
  v16 = sub_1007A590();
  sub_100D33F0(v16);
  sub_100D33F0(off_103DD080);
  sub_100D33F0(off_103DD830);
  sub_100D33F0(&off_103DCCF8);
  v17 = sub_10069030();
  sub_100D33F0(v17);
  v18 = sub_100F4790();
  sub_100D33F0(v18);
  (**(void (__thiscall ***)(void ***))off_103ECFF8[0])(off_103ECFF8[0]);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 4))(dword_1044CC48);
  sub_100B7380(&dword_1042FB78);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 8))(dword_1044CC48);
  if ( !(unsigned __int8)sub_100D34E0() )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 20))(dword_1044CC48);
  v19 = (int *)dword_10439968;
  if ( !dword_10439968 )
  {
    v19 = &dword_10439A08;
    dword_10439968 = (int)&dword_10439A08;
  }
  (*(void (__thiscall **)(int *))*v19)(v19);
  ((void (__thiscall *)(void ***))**off_103E77E8)(off_103E77E8);
  sub_101505D0();
  (*(void (__thiscall **)(int *))(*off_103ED0D8 + 24))(off_103ED0D8);
  sub_10132000();
  sub_1017CC40();
  sub_1006F320();
  sub_1014D200();
  v20 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041317C + 4))(dword_1041317C, 2);
  v21 = sub_1014D240();
  (*(void (__thiscall **)(int, int (__stdcall **)(char), int))(*(_DWORD *)v21 + 4))(v21, &off_103DC8AC, v20);
  if ( !(unsigned __int8)sub_100F5120(v5) )
    return 0;
  v22 = (int)*off_103E466C;
  v23 = sub_10117B10();
  (*(void (__thiscall **)(int (***)(), int))(v22 + 36))(off_103E466C, v23);
  v24 = (int)*off_103E466C;
  v25 = sub_100FACA0();
  (*(void (__thiscall **)(int (***)(), int))(v24 + 36))(off_103E466C, v25);
  v26 = (int)*off_103E466C;
  v27 = sub_1013A340();
  (*(void (__thiscall **)(int (***)(), int))(v26 + 36))(off_103E466C, v27);
  sub_100738F0();
  nullsub_4();
  return 1;
}
