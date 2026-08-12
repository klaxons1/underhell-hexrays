int __thiscall sub_100C8F40(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  const char *v14; // [esp+Ch] [ebp-18h] BYREF
  const char *v15; // [esp+10h] [ebp-14h]
  const char *v16; // [esp+14h] [ebp-10h]
  const char *v17; // [esp+18h] [ebp-Ch]
  char v18; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v19)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudEndurance");
  *(_DWORD *)this = &CHudEndurance::`vftable';
  *(_DWORD *)(this + 44) = &CHudEndurance::`vftable';
  if ( !byte_10430C90 )
  {
    byte_10430C90 = 1;
    v3 = sub_10242540("CHudEndurance");
    *(_DWORD *)(v3 + 28) = sub_100C8680;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430C91 )
  {
    byte_10430C91 = 1;
    v4 = sub_102484C0("CHudEndurance");
    *(_DWORD *)(v4 + 24) = sub_100C8680;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430C92 )
  {
    byte_10430C92 = 1;
    v5 = sub_10242580("CHudEndurance");
    *(_DWORD *)(v5 + 68) = sub_100C8680;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100C8A60();
  *(_DWORD *)(this + 252) = 0;
  sub_100C8AC0();
  sub_100C8B20();
  sub_100C8B80();
  sub_100C8BE0();
  sub_100C8C40();
  sub_100C8CA0();
  sub_100C8D00();
  sub_100C8D60();
  if ( !byte_10430C9C )
  {
    byte_10430C9C = 1;
    v6 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v14 = "text_xpos";
    v15 = "text_xpos";
    v16 = "proportional_float";
    v17 = "2";
    v19 = sub_101B4F60;
    v18 = 0;
    sub_100F4BC0(v6, &v14);
  }
  if ( !byte_10430C9D )
  {
    byte_10430C9D = 1;
    v7 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v14 = "text_ypos";
    v15 = "text_ypos";
    v16 = "proportional_float";
    v17 = "2";
    v19 = sub_101B4F80;
    v18 = 0;
    sub_100F4BC0(v7, &v14);
  }
  if ( !byte_10430C9E )
  {
    byte_10430C9E = 1;
    v8 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v14 = "text2_xpos";
    v15 = "text2_xpos";
    v16 = "proportional_float";
    v17 = "8";
    v19 = sub_100B0F20;
    v18 = 0;
    sub_100F4BC0(v8, &v14);
  }
  if ( !byte_10430C9F )
  {
    byte_10430C9F = 1;
    v9 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v14 = "text2_ypos";
    v15 = "text2_ypos";
    v16 = "proportional_float";
    v17 = "40";
    v19 = sub_100CABB0;
    v18 = 0;
    sub_100F4BC0(v9, &v14);
  }
  if ( !byte_10430CA0 )
  {
    byte_10430CA0 = 1;
    v10 = *(_DWORD *)(sub_102484C0("CHudEndurance") + 12);
    v14 = "text2_gap";
    v15 = "text2_gap";
    v16 = "proportional_float";
    v17 = "10";
    v19 = sub_100C86B0;
    v18 = 0;
    sub_100F4BC0(v10, &v14);
  }
  sub_100C8DC0();
  sub_100C8E20();
  sub_100C8E80();
  sub_100C8EE0();
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v11);
  v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 368) = v12;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v12,
    "sprites/hud/hud_endurance",
    1,
    0);
  sub_100B3790((_DWORD *)this, 8240);
  return this;
}
