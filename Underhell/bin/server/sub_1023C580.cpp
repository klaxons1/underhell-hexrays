void __usercall sub_1023C580(int a1@<edi>, int a2@<esi>, _BYTE *a3, int a4, int a5, int a6, float a7, int a8)
{
  _DWORD v8[9]; // [esp+4h] [ebp-44h] BYREF
  __int16 v9; // [esp+28h] [ebp-20h]
  char v10; // [esp+2Ah] [ebp-1Eh]
  int v11; // [esp+2Ch] [ebp-1Ch]
  int v12[5]; // [esp+30h] [ebp-18h] BYREF
  __int16 v13; // [esp+44h] [ebp-4h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  *(float *)&v8[2] = 1.0;
  *(float *)&v8[7] = a7;
  v13 = -1;
  v8[1] = a5;
  v8[6] = a6;
  v8[0] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 100;
  v9 = 1;
  v11 = -1;
  memset(v12, 0, sizeof(v12));
  v8[8] = a8;
  v10 = 1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseEntity::EmitSound", 0, "CBaseEntity::EmitSound", 0, 4);
  sub_1023B9A0(&off_1064C3E8, a1, a2, a3, a4, (int)v8, (int)&v13);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  sub_102375F0(v12);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
