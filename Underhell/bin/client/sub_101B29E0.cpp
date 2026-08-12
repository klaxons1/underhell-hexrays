int __thiscall sub_101B29E0(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int *v8; // eax
  int v9; // edx
  int *v10; // eax
  int v11; // edx
  int v12; // eax
  const char *v14; // [esp+Ch] [ebp-18h] BYREF
  const char *v15; // [esp+10h] [ebp-14h]
  const char *v16; // [esp+14h] [ebp-10h]
  const char *v17; // [esp+18h] [ebp-Ch]
  char v18; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v19)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudPoisonDamageIndicator");
  *(_DWORD *)this = &CHudPoisonDamageIndicator::`vftable';
  *(_DWORD *)(this + 44) = &CHudPoisonDamageIndicator::`vftable';
  if ( !byte_1044EDF4 )
  {
    byte_1044EDF4 = 1;
    v3 = sub_10242540("CHudPoisonDamageIndicator");
    *(_DWORD *)(v3 + 28) = sub_101B2740;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044EDF5 )
  {
    byte_1044EDF5 = 1;
    v4 = sub_102484C0("CHudPoisonDamageIndicator");
    *(_DWORD *)(v4 + 24) = sub_101B2740;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044EDF6 )
  {
    byte_1044EDF6 = 1;
    v5 = sub_10242580("CHudPoisonDamageIndicator");
    *(_DWORD *)(v5 + 68) = sub_101B2740;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B2920();
  sub_101B2980();
  *(_DWORD *)(this + 257) = 0;
  if ( !byte_1044EDF9 )
  {
    byte_1044EDF9 = 1;
    v6 = (int *)sub_102484C0("CHudPoisonDamageIndicator");
    v7 = v6[3];
    v14 = "text_xpos";
    v15 = "text_xpos";
    v16 = "proportional_float";
    v17 = "8";
    v19 = sub_101B2750;
    v18 = 0;
    sub_100F4BC0(v6, v7, &v14);
  }
  if ( !byte_1044EDFA )
  {
    byte_1044EDFA = 1;
    v8 = (int *)sub_102484C0("CHudPoisonDamageIndicator");
    v9 = v8[3];
    v14 = "text_ypos";
    v15 = "text_ypos";
    v16 = "proportional_float";
    v17 = "8";
    v19 = sub_100C7CF0;
    v18 = 0;
    sub_100F4BC0(v8, v9, &v14);
  }
  if ( !byte_1044EDFB )
  {
    byte_1044EDFB = 1;
    v10 = (int *)sub_102484C0("CHudPoisonDamageIndicator");
    v11 = v10[3];
    v14 = "text_ygap";
    v15 = "text_ygap";
    v16 = "proportional_float";
    v17 = "14";
    v19 = sub_100C7D10;
    v18 = 0;
    sub_100F4BC0(v10, v11, &v14);
  }
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v12);
  sub_100B3790((_DWORD *)this, 56);
  return this;
}
