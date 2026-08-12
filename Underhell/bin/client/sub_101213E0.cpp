void __cdecl sub_101213E0(int a1, int a2, int a3, int a4, float a5, int a6)
{
  _DWORD v6[9]; // [esp+4h] [ebp-44h] BYREF
  __int16 v7; // [esp+28h] [ebp-20h]
  char v8; // [esp+2Ah] [ebp-1Eh]
  int v9; // [esp+2Ch] [ebp-1Ch]
  int v10[5]; // [esp+30h] [ebp-18h] BYREF
  __int16 v11; // [esp+44h] [ebp-4h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  *(float *)&v6[2] = 1.0;
  *(float *)&v6[7] = a5;
  v11 = -1;
  v6[1] = a3;
  v6[6] = a4;
  v6[0] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 100;
  v7 = 1;
  v9 = -1;
  memset(v10, 0, sizeof(v10));
  v6[8] = a6;
  v8 = 1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_10120EC0(&off_103E56F0, a1, a2, (int)v6, (int)&v11);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_1011A810(v10);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
