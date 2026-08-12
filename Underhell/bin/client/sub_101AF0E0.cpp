int __thiscall sub_101AF0E0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v7; // [esp+14h] [ebp+8h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudCredits");
  *(_DWORD *)this = &CHudCredits::`vftable';
  *(_DWORD *)(this + 44) = &CHudCredits::`vftable';
  if ( !byte_1044ECB8 )
  {
    byte_1044ECB8 = 1;
    v7 = sub_10242540("CHudCredits");
    *(_DWORD *)(v7 + 28) = sub_101AE2E0;
    *(_DWORD *)(v7 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1044ECB9 )
  {
    byte_1044ECB9 = 1;
    v3 = sub_102484C0("CHudCredits");
    *(_DWORD *)(v3 + 24) = sub_101AE2E0;
    *(_DWORD *)(v3 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1044ECBA )
  {
    byte_1044ECBA = 1;
    v4 = sub_10242580("CHudCredits");
    *(_DWORD *)(v4 + 68) = sub_101AE2E0;
    *(_DWORD *)(v4 + 24) = sub_10242580("vgui::Panel");
  }
  sub_101AF020();
  sub_101AF080();
  *(_DWORD *)(this + 257) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 272) = 0;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 864) = 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v5);
  return this;
}
