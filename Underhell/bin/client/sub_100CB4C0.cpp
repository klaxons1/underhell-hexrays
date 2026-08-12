int __thiscall sub_100CB4C0(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  const char *v13; // [esp+Ch] [ebp-18h] BYREF
  const char *v14; // [esp+10h] [ebp-14h]
  const char *v15; // [esp+14h] [ebp-10h]
  const char *v16; // [esp+18h] [ebp-Ch]
  char v17; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v18)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudStamina");
  *(_DWORD *)this = &CHudStamina::`vftable';
  *(_DWORD *)(this + 44) = &CHudStamina::`vftable';
  if ( !byte_10430E18 )
  {
    byte_10430E18 = 1;
    v3 = sub_10242540("CHudStamina");
    *(_DWORD *)(v3 + 28) = sub_100CAB80;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430E19 )
  {
    byte_10430E19 = 1;
    v4 = sub_102484C0("CHudStamina");
    *(_DWORD *)(v4 + 24) = sub_100CAB80;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430E1A )
  {
    byte_10430E1A = 1;
    v5 = sub_10242580("CHudStamina");
    *(_DWORD *)(v5 + 68) = sub_100CAB80;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100CAF80();
  *(_DWORD *)(this + 252) = 0;
  sub_100CAFE0();
  sub_100CB040();
  sub_100CB0A0();
  sub_100CB100();
  sub_100CB160();
  sub_100CB1C0();
  sub_100CB220();
  sub_100CB280();
  if ( !byte_10430E24 )
  {
    byte_10430E24 = 1;
    v6 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v13 = "text_xpos";
    v14 = "text_xpos";
    v15 = "proportional_float";
    v16 = "2";
    v18 = sub_101B4F60;
    v17 = 0;
    sub_100F4BC0(v6, &v13);
  }
  if ( !byte_10430E25 )
  {
    byte_10430E25 = 1;
    v7 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v13 = "text_ypos";
    v14 = "text_ypos";
    v15 = "proportional_float";
    v16 = "2";
    v18 = sub_101B4F80;
    v17 = 0;
    sub_100F4BC0(v7, &v13);
  }
  sub_100CB2E0();
  if ( !byte_10430E27 )
  {
    byte_10430E27 = 1;
    v8 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v13 = "text2_ypos";
    v14 = "text2_ypos";
    v15 = "proportional_float";
    v16 = "40";
    v18 = sub_100CABB0;
    v17 = 0;
    sub_100F4BC0(v8, &v13);
  }
  if ( !byte_10430E28 )
  {
    byte_10430E28 = 1;
    v9 = *(_DWORD *)(sub_102484C0("CHudStamina") + 12);
    v13 = "text2_gap";
    v14 = "text2_gap";
    v15 = "proportional_float";
    v16 = "10";
    v18 = sub_100C86B0;
    v17 = 0;
    sub_100F4BC0(v9, &v13);
  }
  sub_100CB340();
  sub_100CB3A0();
  sub_100CB400();
  sub_100CB460();
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v10);
  v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 368) = v11;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v11,
    "sprites/hud/hud_stamina",
    1,
    0);
  sub_100B3790((_DWORD *)this, 8240);
  return this;
}
