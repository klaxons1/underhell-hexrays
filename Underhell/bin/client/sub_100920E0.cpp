int __thiscall sub_100920E0(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  sub_1024E7E0((int)this, a2);
  (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD))(*this + 768))(
    this,
    "Resource/UI/CommentaryModelViewer.res",
    0,
    0);
  v3 = sub_10239950("modelpanel", 0);
  result = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&CCommentaryModelPanel `RTTI Type Descriptor',
             0);
  this[110] = result;
  return result;
}
