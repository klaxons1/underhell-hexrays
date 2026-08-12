int __thiscall sub_100BD9C0(int this, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudUHHermitCards");
  *(_DWORD *)this = &CHudUHHermitCards::`vftable';
  *(_DWORD *)(this + 44) = &CHudUHHermitCards::`vftable';
  if ( !byte_104300A4 )
  {
    byte_104300A4 = 1;
    v3 = sub_10242540("CHudUHHermitCards");
    *(_DWORD *)(v3 + 28) = sub_100BCE60;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_104300A5 )
  {
    byte_104300A5 = 1;
    v4 = sub_102484C0("CHudUHHermitCards");
    *(_DWORD *)(v4 + 24) = sub_100BCE60;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_104300A6 )
  {
    byte_104300A6 = 1;
    v5 = sub_10242580("CHudUHHermitCards");
    *(_DWORD *)(v5 + 68) = sub_100BCE60;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100BD360();
  sub_100BD3C0();
  *(_DWORD *)(this + 289) = 0;
  sub_100BD420();
  sub_100BD480();
  sub_100BD4E0();
  sub_100BD540();
  sub_100BD5A0();
  sub_100BD600();
  sub_100BD660();
  sub_100BD6C0();
  sub_100BD720();
  sub_100BD780();
  sub_100BD7E0();
  sub_100BD840();
  sub_100BD8A0();
  sub_100BD900();
  sub_100BD960();
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v6);
  sub_10236310(1);
  sub_102366F0(128);
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *(_DWORD *)(this + 272) = v7;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v7,
    "sprites/hud/hud_hermitcards",
    1,
    0);
  sub_100B3790((_DWORD *)this, 32816);
  *(_DWORD *)(this + 260) = -1;
  return this;
}
