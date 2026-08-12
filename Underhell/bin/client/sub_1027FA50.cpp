_DWORD *__thiscall sub_1027FA50(int *this)
{
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *result; // eax

  v3 = __RTDynamicCast(
         this[28],
         0,
         (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
         (int)&vgui::EditablePanel `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0;
  v1 = v3;
  result = *(_DWORD **)(v3 + 240);
  if ( !result )
  {
    v2 = (_DWORD *)sub_10229D00(32);
    if ( v2 )
    {
      result = sub_10229D20(v2, (int)"DialogVariables");
      *(_DWORD *)(v1 + 240) = result;
    }
    else
    {
      result = 0;
      *(_DWORD *)(v1 + 240) = 0;
    }
  }
  return result;
}
