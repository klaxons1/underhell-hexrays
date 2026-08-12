int __thiscall sub_1008A450(int *this, int a2, int a3, int a4)
{
  int v5; // edi

  CVProfile::EnterScope(g_VProfCurrentProfile, "CVisibleShadowList::FindShadows", 0, "Shadow_Rendering", 0, 4);
  this[4] = 0;
  (*(void (__thiscall **)(void *, int, int, int *))(*(_DWORD *)off_103DCDDC + 92))(off_103DCDDC, a3, a4, this);
  v5 = this[4];
  if ( v5 )
    sub_1008A290(this);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v5;
}
