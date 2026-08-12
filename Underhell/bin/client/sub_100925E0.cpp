_DWORD *__thiscall sub_100925E0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi

  sub_10250100((int)this, 0, "commentary_modelviewer", 1);
  this[107] = &IViewPortPanel::`vftable';
  *this = &CCommentaryModelViewer::`vftable';
  this[107] = &CCommentaryModelViewer::`vftable';
  if ( !byte_1042CACB )
  {
    byte_1042CACB = 1;
    v3 = sub_10242540("CCommentaryModelViewer");
    *(_DWORD *)(v3 + 28) = sub_100920C0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_1042CAD4 )
  {
    byte_1042CAD4 = 1;
    v4 = sub_102484C0("CCommentaryModelViewer");
    *(_DWORD *)(v4 + 24) = sub_100920C0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_1042CAD5 )
  {
    byte_1042CAD5 = 1;
    v5 = sub_10242580("CCommentaryModelViewer");
    *(_DWORD *)(v5 + 68) = sub_100920C0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  this[109] = a2;
  this[110] = 0;
  return this;
}
