int __thiscall sub_10189370(int this, int a2)
{
  int v3; // eax
  int result; // eax
  const char *v5; // esi
  int v6; // edi
  int v7; // eax
  const char *v8; // eax
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = sub_1022A910("panel", 0);
  result = __RTDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::ComboBox `RTTI Type Descriptor',
             0);
  if ( result == *(_DWORD *)(this + 452) )
    return (*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 452) + 768))(
             *(_DWORD *)(this + 452),
             "#Spec_Options");
  if ( result == *(_DWORD *)(this + 444) )
  {
    result = sub_1025F510(result);
    if ( result )
    {
      result = sub_1005CDB0();
      if ( result )
      {
        v5 = (const char *)sub_1022B4C0("player", (int)Locale);
        v6 = sub_100766B0();
        v7 = sub_1005CDB0();
        v8 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, v6);
        result = _stricmp(v8, v5);
        if ( result )
        {
          sub_10228370(Buffer, 0x80u, "spec_player \"%s\"", (char)v5);
          return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, Buffer);
        }
      }
    }
  }
  return result;
}
