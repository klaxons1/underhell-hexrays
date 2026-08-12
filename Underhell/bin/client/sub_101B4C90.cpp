int __thiscall sub_101B4C90(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  const char *v12; // [esp+Ch] [ebp-18h] BYREF
  const char *v13; // [esp+10h] [ebp-14h]
  const char *v14; // [esp+14h] [ebp-10h]
  const char *v15; // [esp+18h] [ebp-Ch]
  char v16; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v17)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudSquadStatus");
  *(_DWORD *)this = &CHudSquadStatus::`vftable';
  *(_DWORD *)(this + 44) = &CHudSquadStatus::`vftable';
  if ( !byte_1044EF18 )
  {
    byte_1044EF18 = 1;
    v3 = sub_10242540("CHudSquadStatus");
    *(_DWORD *)(v3 + 28) = sub_101B4480;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044EF19 )
  {
    byte_1044EF19 = 1;
    v4 = sub_102484C0("CHudSquadStatus");
    *(_DWORD *)(v4 + 24) = sub_101B4480;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044EF1A )
  {
    byte_1044EF1A = 1;
    v5 = sub_10242580("CHudSquadStatus");
    *(_DWORD *)(v5 + 68) = sub_101B4480;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101B4990();
  if ( !byte_1044EF1C )
  {
    byte_1044EF1C = 1;
    v6 = (int *)sub_102484C0("CHudSquadStatus");
    v7 = v6[3];
    v12 = "text_xpos";
    v13 = "text_xpos";
    v14 = "proportional_float";
    v15 = "8";
    v17 = sub_101B4F20;
    v16 = 0;
    sub_100F4BC0(v6, v7, &v12);
  }
  if ( !byte_1044EF1D )
  {
    byte_1044EF1D = 1;
    v8 = (int *)sub_102484C0("CHudSquadStatus");
    v9 = v8[3];
    v12 = "text_ypos";
    v13 = "text_ypos";
    v14 = "proportional_float";
    v15 = "20";
    v17 = sub_100BE7D0;
    v16 = 0;
    sub_100F4BC0(v8, v9, &v12);
  }
  sub_101B49F0();
  sub_101B4A50();
  sub_101B4AB0();
  sub_101B4B10();
  sub_101B4B70();
  *(_DWORD *)(this + 305) = 0;
  sub_101B4BD0();
  *(_DWORD *)(this + 310) = 0;
  sub_101B4C30();
  *(_DWORD *)(this + 315) = 0;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v10);
  sub_100B3790((_DWORD *)this, 56);
  return this;
}
