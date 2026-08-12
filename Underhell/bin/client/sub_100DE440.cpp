int __thiscall sub_100DE440(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD v9[4]; // [esp+Ch] [ebp-18h] BYREF
  char v10; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v11)(int); // [esp+20h] [ebp-4h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudMenu");
  *(_DWORD *)this = &CHudMenu::`vftable';
  *(_DWORD *)(this + 44) = &CHudMenu::`vftable';
  if ( !byte_104345DC )
  {
    byte_104345DC = 1;
    v3 = sub_10242540("CHudMenu");
    *(_DWORD *)(v3 + 28) = sub_100DDB20;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104345DD )
  {
    byte_104345DD = 1;
    v4 = sub_102484C0("CHudMenu");
    *(_DWORD *)(v4 + 24) = sub_100DDB20;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104345DE )
  {
    byte_104345DE = 1;
    v5 = sub_10242580("CHudMenu");
    *(_DWORD *)(v5 + 68) = sub_100DDB20;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  sub_100DE080();
  sub_100DE0E0();
  sub_100DE140();
  sub_100DE1A0();
  sub_100DE200();
  sub_100DE260();
  sub_100DE2C0();
  sub_100DE320();
  if ( !byte_104345E7 )
  {
    byte_104345E7 = 1;
    v6 = *(_DWORD *)(sub_102484C0("CHudMenu") + 12);
    v9[0] = "MenuColor";
    v9[3] = "MenuColor";
    v9[1] = "m_MenuColor";
    v9[2] = "Color";
    v11 = sub_100DDB50;
    v10 = 0;
    sub_100F4BC0(v6, v9);
  }
  *(_DWORD *)(this + 373) = 0;
  sub_100DE380();
  *(_DWORD *)(this + 378) = 0;
  sub_100DE3E0();
  *(_DWORD *)(this + 383) = 0;
  *(_DWORD *)(this + 296) = -1;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v7);
  sub_100B3790((_DWORD *)this, 64);
  return this;
}
