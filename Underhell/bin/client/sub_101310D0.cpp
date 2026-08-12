_DWORD *__thiscall sub_101310D0(_DWORD *this, int a2, char *Source, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  sub_10131BB0(a2, Source, a4, a5, a6, a7);
  *this = &vgui::DragnDropSlot::`vftable';
  if ( !byte_10439534 )
  {
    byte_10439534 = 1;
    v9 = sub_10242540("DragnDropSlot");
    *(_DWORD *)(v9 + 28) = sub_10130C50;
    *(_DWORD *)(v9 + 24) = sub_10242540("vgui::ImageButton");
  }
  if ( !byte_10439540 )
  {
    byte_10439540 = 1;
    v10 = sub_102484C0("DragnDropSlot");
    *(_DWORD *)(v10 + 24) = sub_10130C50;
    *(_DWORD *)(v10 + 20) = sub_102484C0("vgui::ImageButton");
  }
  if ( !byte_10439541 )
  {
    byte_10439541 = 1;
    v11 = sub_10242580("DragnDropSlot");
    *(_DWORD *)(v11 + 68) = sub_10130C50;
    *(_DWORD *)(v11 + 24) = sub_10242580("vgui::ImageButton");
  }
  sub_10131030((int)&savedregs);
  this[98] = 0;
  this[99] = a8;
  v12 = sub_100DDA40(392);
  if ( v12 )
    v13 = sub_1026D6B0(v12, (int)this, "ContextMenu");
  else
    v13 = 0;
  this[100] = v13;
  (*(void (__thiscall **)(int, const char *, const char *, _DWORD *, _DWORD))(*(_DWORD *)v13 + 784))(
    v13,
    "Use",
    "MyUse",
    this,
    0);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, _DWORD *, _DWORD))(*(_DWORD *)this[100] + 784))(
    this[100],
    "Drop",
    "MyDrop",
    this,
    0);
  return this;
}
