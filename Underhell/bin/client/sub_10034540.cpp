int __thiscall sub_10034540(_DWORD *this, int a2, char a3)
{
  void (__cdecl **v4)(_DWORD *, int, int); // edi
  int v5; // eax
  int v7; // [esp+4h] [ebp-4h]
  int savedregs; // [esp+8h] [ebp+0h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseEntity::DrawBrushModel", 0, "Brush_Model_Rendering", 0, 4);
  v4 = *(void (__cdecl ***)(_DWORD *, int, int))dword_10413168;
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 40))(this, a2);
  savedregs = (*(int (__thiscall **)(_DWORD *, int))(*this + 36))(this, v5);
  v7 = this[23];
  if ( a3 )
    v4[44](this, v7, savedregs);
  else
    (*v4)(this, v7, savedregs);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return 1;
}
