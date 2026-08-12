int __thiscall sub_1025C780(
        int this,
        int (__thiscall ***a2)(_DWORD),
        char *Source,
        int a4,
        int (***a5)(void),
        const char *Src)
{
  unsigned int *v7; // edi
  int v8; // edi
  unsigned int *v9; // edi

  sub_1024B320((int *)this, a2, Source, a4);
  *(_DWORD *)this = &vgui::Button::`vftable';
  if ( !byte_1047FA90 )
  {
    byte_1047FA90 = 1;
    v7 = sub_10242540("Button");
    v7[7] = (unsigned int)sub_1012F880;
    v7[6] = (unsigned int)sub_10242540("Label");
  }
  if ( !byte_1047FA91 )
  {
    byte_1047FA91 = 1;
    v8 = sub_102484C0((int)"Button");
    *(_DWORD *)(v8 + 24) = sub_1012F880;
    *(_DWORD *)(v8 + 20) = sub_102484C0((int)"Label");
  }
  if ( !byte_1047FA92 )
  {
    byte_1047FA92 = 1;
    v9 = sub_10242580("Button");
    v9[17] = (unsigned int)sub_1012F880;
    v9[6] = (unsigned int)sub_10242580("Label");
  }
  if ( !byte_1047FA93 )
  {
    byte_1047FA93 = 1;
    sub_1025C270((int)"PressButton", (int)sub_1025B5A0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047FA94 )
  {
    byte_1047FA94 = 1;
    sub_1025C270((int)"Hotkey", (int)sub_1025B5D0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1025C2F0((void *)(this + 289));
  sub_1025C340((void *)(this + 290));
  sub_1025C390((void *)(this + 291));
  *(_WORD *)(this + 292) = 0;
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 340) = 0;
  *(_DWORD *)(this + 344) = 0;
  *(_DWORD *)(this + 348) = 0;
  sub_1025C3E0((char *)this);
  if ( a5 && Src )
  {
    sub_10241380((_DWORD *)this, a5);
    sub_1025AFC0((void *)this, Src);
  }
  return this;
}
