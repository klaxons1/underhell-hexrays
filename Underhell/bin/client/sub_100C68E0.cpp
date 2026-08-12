int __thiscall sub_100C68E0(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  char Buffer[512]; // [esp+Ch] [ebp-240h] BYREF
  char String1[64]; // [esp+20Ch] [ebp-40h] BYREF
  int v8; // [esp+254h] [ebp+8h]
  int v9; // [esp+254h] [ebp+8h]
  int v10; // [esp+254h] [ebp+8h]

  sub_100B5510((_BYTE *)this, a2);
  sub_10243490(0, "HudCloseCaption");
  *(_DWORD *)this = &CHudCloseCaption::`vftable';
  *(_DWORD *)(this + 44) = &CHudCloseCaption::`vftable';
  if ( !byte_10430744 )
  {
    byte_10430744 = 1;
    v8 = sub_10242540("CHudCloseCaption");
    *(_DWORD *)(v8 + 28) = sub_100BF710;
    *(_DWORD *)(v8 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_10430745 )
  {
    byte_10430745 = 1;
    v9 = sub_102484C0("CHudCloseCaption");
    *(_DWORD *)(v9 + 24) = sub_100BF710;
    *(_DWORD *)(v9 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_10430746 )
  {
    byte_10430746 = 1;
    v10 = sub_10242580("CHudCloseCaption");
    *(_DWORD *)(v10 + 68) = sub_100BF710;
    *(_DWORD *)(v10 + 24) = sub_10242580("vgui::Panel");
  }
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_WORD *)(this + 272) = -1;
  v3 = *(_DWORD *)(this + 252);
  *(_DWORD *)(this + 264) = -1;
  *(_DWORD *)(this + 268) = 0xFFFF;
  *(_DWORD *)(this + 276) = v3;
  *(_DWORD *)(this + 280) = sub_10182380;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 296) = -1;
  *(_DWORD *)(this + 304) = -1;
  *(_DWORD *)(this + 308) = -1;
  *(_DWORD *)(this + 312) = *(_DWORD *)(this + 284);
  *(_DWORD *)(this + 316) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  sub_100C2E90();
  sub_100C2EF0();
  sub_100C2F50();
  sub_100C2FB0();
  sub_100C3010();
  sub_100C3070();
  *(_DWORD *)(this + 432) = 0;
  *(_DWORD *)(this + 436) = 0;
  *(_DWORD *)(this + 440) = 0;
  *(_DWORD *)(this + 444) = 0;
  *(_DWORD *)(this + 448) = 0;
  *(_BYTE *)(this + 454) = 0;
  *(_WORD *)(this + 456) = -1;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v4);
  *(float *)(this + 368) = 1.0;
  *(float *)(this + 372) = 1.0;
  *(_DWORD *)(this + 360) = 0;
  *(float *)(this + 376) = 0.0;
  *(_DWORD *)(this + 364) = 0;
  *(float *)(this + 380) = 0.0;
  *(_WORD *)(this + 452) = 0;
  sub_10239CF0(0);
  sub_10239D10(0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(
    dword_1047CA74,
    *(_DWORD *)(this + 112),
    0);
  (**(void (__thiscall ***)(int, const char *, const char *, int))dword_1047CA78)(
    dword_1047CA78,
    "resource/closecaption_%language%.txt",
    "GAME",
    1);
  sub_1012CAB0("CloseCaption", sub_100C5D30);
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 336))(dword_1041315C, String1, 64);
  if ( !_stricmp(String1, "english") )
    sub_10229140(&unk_10430900, 1);
  else
    sub_10229140(&unk_10430900, 0);
  sub_10228370(Buffer, 0x200u, "resource/closecaption_%s.dat", (char)String1);
  sub_100C6420(this, 0, Buffer);
  return this;
}
