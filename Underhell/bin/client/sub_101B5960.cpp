int __thiscall sub_101B5960(int this, int a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int *v6; // eax
  int v7; // edx
  int *v8; // eax
  int v9; // edx
  int *v10; // eax
  int v11; // edx
  int *v12; // eax
  int v13; // edx
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  const char *v18; // [esp+Ch] [ebp-18h] BYREF
  const char *v19; // [esp+10h] [ebp-14h]
  const char *v20; // [esp+14h] [ebp-10h]
  const char *v21; // [esp+18h] [ebp-Ch]
  char v22; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v23)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudSuitPower");
  *(_DWORD *)this = &CHudSuitPower::`vftable';
  *(_DWORD *)(this + 44) = &CHudSuitPower::`vftable';
  if ( !byte_1044EF8C )
  {
    byte_1044EF8C = 1;
    v3 = sub_10242540("CHudSuitPower");
    *(_DWORD *)(v3 + 28) = sub_101B4F10;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044EF8D )
  {
    byte_1044EF8D = 1;
    v4 = sub_102484C0("CHudSuitPower");
    *(_DWORD *)(v4 + 24) = sub_101B4F10;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044EF8E )
  {
    byte_1044EF8E = 1;
    v5 = sub_10242580("CHudSuitPower");
    *(_DWORD *)(v5 + 68) = sub_101B4F10;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B5600();
  *(_DWORD *)(this + 252) = 0;
  sub_101B5660();
  sub_101B56C0();
  sub_101B5720();
  sub_101B5780();
  sub_101B57E0();
  sub_101B5840();
  sub_101B58A0();
  sub_101B5900();
  if ( !byte_1044EF98 )
  {
    byte_1044EF98 = 1;
    v6 = (int *)sub_102484C0("CHudSuitPower");
    v7 = v6[3];
    v18 = "text_xpos";
    v19 = "text_xpos";
    v20 = "proportional_float";
    v21 = "8";
    v23 = sub_101B4F60;
    v22 = 0;
    sub_100F4BC0(v6, v7, &v18);
  }
  if ( !byte_1044EF99 )
  {
    byte_1044EF99 = 1;
    v8 = (int *)sub_102484C0("CHudSuitPower");
    v9 = v8[3];
    v18 = "text_ypos";
    v19 = "text_ypos";
    v20 = "proportional_float";
    v21 = "20";
    v23 = sub_101B4F80;
    v22 = 0;
    sub_100F4BC0(v8, v9, &v18);
  }
  if ( !byte_1044EF9A )
  {
    byte_1044EF9A = 1;
    v10 = (int *)sub_102484C0("CHudSuitPower");
    v11 = v10[3];
    v18 = "text2_xpos";
    v19 = "text2_xpos";
    v20 = "proportional_float";
    v21 = "8";
    v23 = sub_100B0F20;
    v22 = 0;
    sub_100F4BC0(v10, v11, &v18);
  }
  if ( !byte_1044EF9B )
  {
    byte_1044EF9B = 1;
    v12 = (int *)sub_102484C0("CHudSuitPower");
    v13 = v12[3];
    v18 = "text2_ypos";
    v19 = "text2_ypos";
    v20 = "proportional_float";
    v21 = "40";
    v23 = sub_100CABB0;
    v22 = 0;
    sub_100F4BC0(v12, v13, &v18);
  }
  if ( !byte_1044EF9C )
  {
    byte_1044EF9C = 1;
    v14 = (int *)sub_102484C0("CHudSuitPower");
    v15 = v14[3];
    v18 = "text2_gap";
    v19 = "text2_gap";
    v20 = "proportional_float";
    v21 = "10";
    v23 = sub_100C86B0;
    v22 = 0;
    sub_100F4BC0(v14, v15, &v18);
  }
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v16);
  sub_100B3790((_DWORD *)this, 56);
  return this;
}
