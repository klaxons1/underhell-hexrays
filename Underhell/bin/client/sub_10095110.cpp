int __stdcall sub_10095110(int a1, int a2)
{
  int v2; // edi
  int i; // esi
  _BYTE v5[4]; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::CountSpritesInLeafList",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  v2 = 0;
  for ( i = 0; i < a1; ++i )
  {
    (*(void (__stdcall **)(_DWORD, _BYTE *, int *))(*(_DWORD *)off_103DCDDC + 36))(
      *(unsigned __int16 *)(a2 + 2 * i),
      v5,
      &v6);
    v2 += v6;
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v2;
}
