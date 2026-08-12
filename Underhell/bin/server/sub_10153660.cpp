char __stdcall sub_10153660(int (__cdecl *a1)(const char *, _DWORD), int a2, int (__stdcall *a3)(_DWORD), int a4)
{
  int (__stdcall *v5)(_DWORD); // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int (***v15)(); // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int (***v19)(); // eax
  int v20; // esi
  int (***v21)(); // eax
  int v22; // esi
  int (***v23)(); // eax
  int v24; // esi
  int (***v25)(); // eax
  int v26; // eax
  int v27; // eax
  int (***v28)(); // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int (__cdecl *v33)(_DWORD, _DWORD); // [esp+28h] [ebp-Ch] BYREF
  int v34; // [esp+2Ch] [ebp-8h]
  int (__stdcall *v35)(_DWORD); // [esp+30h] [ebp-4h]

  sub_1042CD40(&a1, 1);
  sub_10433430(&a1, 1);
  sub_104336A0(&a1, 1);
  if ( !cvar )
    return 0;
  sub_10153350(dword_106B3274);
  dword_106B31D0 = a1("VEngineServer021", 0);
  if ( !dword_106B31D0 )
    return 0;
  dword_106B31D4 = a1("VoiceServer002", 0);
  if ( !dword_106B31D4 )
    return 0;
  dword_106B31DC = a1("VEngineServerStringTable001", 0);
  if ( !dword_106B31DC )
    return 0;
  dword_106B31E0 = a1("StaticPropMgrServer002", 0);
  if ( !dword_106B31E0 )
    return 0;
  dword_106B31E4 = a1("VEngineRandom001", 0);
  if ( !dword_106B31E4 )
    return 0;
  dword_106B31E8 = a1("IEngineSoundServer003", 0);
  if ( !dword_106B31E8 )
    return 0;
  dword_106B31EC = a1("SpatialPartition001", 0);
  if ( !dword_106B31EC )
    return 0;
  dword_106B31F0 = a1("VModelInfoServer002", 0);
  if ( !dword_106B31F0 )
    return 0;
  dword_106B31F4 = a1("EngineTraceServer003", 0);
  if ( !dword_106B31F4 )
    return 0;
  v5 = a3;
  dword_106B31D8 = a3("VFileSystem017");
  if ( !dword_106B31D8 )
    return 0;
  dword_106B31F8 = a1("GAMEEVENTSMANAGER002", 0);
  if ( !dword_106B31F8 )
    return 0;
  dword_106B31FC = a1("VDataCache003", 0);
  if ( !dword_106B31FC )
    return 0;
  dword_106B3204 = a1("VSoundEmitter002", 0);
  if ( !dword_106B3204 )
    return 0;
  dword_106B31CC = a1("ServerUploadGameStats001", 0);
  if ( !dword_106B31CC )
    return 0;
  if ( !dword_10700AC8 )
    return 0;
  dword_106B3208 = a1("ISERVERPLUGINHELPERS001", 0);
  if ( !dword_106B3208 )
    return 0;
  dword_106B3210 = a1("SceneFileCache002", 0);
  if ( !dword_106B3210 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
    dword_106B320C = a1("VSERVERENGINETOOLS001", 0);
  if ( !(**(unsigned __int8 (__thiscall ***)(int, int (__cdecl *)(const char *, _DWORD)))dword_106B3204)(
          dword_106B3204,
          a1) )
    return 0;
  sub_10153570();
  dword_106B31C8 = a4;
  dword_106B324C = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 360))(dword_106B31D0);
  sub_10424970(2.2, 2.2, 0.0, 2, 1, 1, 1, 1);
  v33 = (int (__cdecl *)(_DWORD, _DWORD))a1;
  v35 = v5;
  v34 = a2;
  sub_10171030(&v33);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F8 + 4))(dword_106B31F8, "resource/gameevents.res");
  sub_10151BE0();
  if ( !(unsigned __int8)sub_10427F50(off_10634FCC) )
    return 0;
  dword_1069ABE0 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 52))(g_pCVar, "sv_cheats");
  if ( !dword_1069ABE0 )
    return 0;
  v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)g_pCVar + 52))(g_pCVar, "commentary");
  v7 = *(_DWORD *)g_pCVar;
  dword_106B3220 = v6;
  v8 = (*(int (__thiscall **)(int, const char *))(v7 + 52))(g_pCVar, "host_thread_mode");
  v9 = *(_DWORD *)g_pCVar;
  dword_106B3224 = v8;
  dword_106B321C = (*(int (__thiscall **)(int, const char *))(v9 + 52))(g_pCVar, "sv_maxreplay");
  v10 = (int)*off_10646704;
  v11 = sub_1021E050();
  (*(void (__thiscall **)(int (***)(), int))(v10 + 36))(off_10646704, v11);
  v12 = (int)*off_10646704;
  v13 = sub_101D3240();
  (*(void (__thiscall **)(int (***)(), int))(v12 + 36))(off_10646704, v13);
  v14 = (int)*off_10646704;
  v15 = sub_100A7090();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v14 + 36))(off_10646704, v15);
  v16 = (int)*off_10646704;
  v17 = sub_1024B230();
  (*(void (__thiscall **)(int (***)(), int))(v16 + 36))(off_10646704, v17);
  v18 = (int)*off_10646704;
  v19 = sub_1009A680();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v18 + 36))(off_10646704, v19);
  v20 = (int)*off_10646704;
  v21 = sub_101174A0();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v20 + 36))(off_10646704, v21);
  v22 = (int)*off_10646704;
  v23 = sub_1010BC10();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v22 + 36))(off_10646704, v23);
  v24 = (int)*off_10646704;
  v25 = sub_10001000();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v24 + 36))(off_10646704, v25);
  v26 = sub_10162BD0();
  sub_10170230(v26);
  v27 = sub_101B4C90();
  sub_10170230(v27);
  v28 = sub_1001F570();
  sub_10170230(v28);
  v29 = sub_102D6FB0();
  sub_10170230(v29);
  v30 = sub_1016BF50();
  sub_10170230(v30);
  v31 = sub_1023A710();
  sub_10170230(v31);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F8 + 4))(dword_106B31F8, "resource/ModEvents.res");
  if ( !(unsigned __int8)sub_10170320() || !sub_100E7C80() )
    return 0;
  sub_101AB690(0);
  dword_106B3200 = a1("VDebugOverlay003", 0);
  v32 = sub_10184390(1316);
  if ( v32 )
    dword_106B8370 = sub_1019FB60(v32);
  else
    dword_106B8370 = 0;
  (*(void (__thiscall **)(int, int (__cdecl *)(_DWORD, _DWORD), int))(*(_DWORD *)dword_106B31CC + 4))(
    dword_106B31CC,
    v33,
    v34);
  return 1;
}
