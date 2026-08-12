void __cdecl sub_101214C0(int a1, int a2, int a3, int a4, int a5, float a6, int a7)
{
  _DWORD v7[9]; // [esp+4h] [ebp-44h] BYREF
  __int16 v8; // [esp+28h] [ebp-20h]
  char v9; // [esp+2Ah] [ebp-1Eh]
  int v10; // [esp+2Ch] [ebp-1Ch]
  int v11[5]; // [esp+30h] [ebp-18h] BYREF
  __int16 v12; // [esp+44h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  *(float *)&v7[2] = 1.0;
  *(float *)&v7[7] = a6;
  v12 = -1;
  v7[1] = a3;
  v7[6] = a5;
  v7[0] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 100;
  v8 = 1;
  v10 = -1;
  memset(v11, 0, sizeof(v11));
  v7[8] = a7;
  v9 = 1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_10120EC0(&off_103E56F0, a1, a2, (int)v7, a4);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_1011A810(v11);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
