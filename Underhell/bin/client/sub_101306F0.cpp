float *__thiscall sub_101306F0(float *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  sub_1024B100(0, "CCenterStringLabel", (int)" ");
  *(_DWORD *)this = &CCenterStringLabel::`vftable';
  if ( !byte_10439438 )
  {
    byte_10439438 = 1;
    v3 = sub_10242540("CCenterStringLabel");
    *(_DWORD *)(v3 + 28) = sub_10130170;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Label");
  }
  if ( !byte_10439444 )
  {
    byte_10439444 = 1;
    v4 = sub_102484C0("CCenterStringLabel");
    *(_DWORD *)(v4 + 24) = sub_10130170;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Label");
  }
  if ( !byte_10439445 )
  {
    byte_10439445 = 1;
    v5 = sub_10242580("CCenterStringLabel");
    *(_DWORD *)(v5 + 68) = sub_10130170;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Label");
  }
  sub_10130650((int)&savedregs);
  sub_10236550(a2);
  sub_10130180();
  sub_10236310(0);
  sub_10237030(0);
  sub_10237D40(0);
  sub_10237E50(0);
  sub_10249A90(4);
  this[72] = 0.0;
  sub_10249B60(-1);
  sub_10239D10(0);
  v6 = *((_DWORD *)this + 17);
  this[73] = 0.0;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA74 + 72))(dword_1047CA74, v6, 100);
  return this;
}
