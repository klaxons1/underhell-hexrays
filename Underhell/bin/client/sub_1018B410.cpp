_DWORD *__thiscall sub_1018B410(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  sub_10250100((int)this, 0, "info", 1);
  this[107] = &IViewPortPanel::`vftable';
  *this = &CTextWindow::`vftable';
  this[107] = &CTextWindow::`vftable';
  if ( !byte_10445870 )
  {
    byte_10445870 = 1;
    v3 = sub_10242540("CTextWindow");
    *(_DWORD *)(v3 + 28) = sub_1018AC50;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_1044587C )
  {
    byte_1044587C = 1;
    v4 = sub_102484C0("CTextWindow");
    *(_DWORD *)(v4 + 24) = sub_1018AC50;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_1044587D )
  {
    byte_1044587D = 1;
    v5 = sub_10242580("CTextWindow");
    *(_DWORD *)(v5 + 68) = sub_1018AC50;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  this[109] = a2;
  *((_BYTE *)this + 440) = 0;
  *((_BYTE *)this + 695) = 0;
  *((_BYTE *)this + 2743) = 0;
  sub_10236910("ClientScheme");
  sub_1024E300(0);
  sub_1024E310(0);
  sub_1023A780(1);
  sub_1024F400(0);
  if ( sub_100DDA40(944) )
    v6 = sub_10256110((int)this, "TextMessage");
  else
    v6 = 0;
  this[751] = v6;
  v7 = sub_100DDA40(296);
  if ( v7 )
    v8 = sub_1027EB00(v7, (int)this, "HTMLMessage", 0);
  else
    v8 = 0;
  this[752] = v8;
  if ( sub_100DDA40(284) )
    v9 = sub_1024B100((int)this, "MessageTitle", (int)"Message Title");
  else
    v9 = 0;
  this[754] = v9;
  if ( sub_100DDA40(364) )
    v10 = sub_1025C5C0((int)this, "ok", (int)"#PropertyDialog_OK", 0, 0);
  else
    v10 = 0;
  this[753] = v10;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v10 + 1032))(v10, "okay");
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[751] + 936))(this[751], 1);
  this[750] = 0;
  return this;
}
