int __stdcall sub_10095180(int a1, int a2, unsigned int *a3)
{
  int v3; // ebx
  int v4; // edi
  int i; // esi
  int v6; // eax
  int v7; // ecx

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::CountSpritesInLeafList",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v6 = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)off_103DCDDC + 28))(*(unsigned __int16 *)(a2 + 2 * i), 0);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      v3 += v7;
      if ( v4 <= v7 )
        v4 = *(_DWORD *)(v6 + 4);
    }
  }
  *a3 = (v4 + 3) & 0xFFFFFFFC;
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v3;
}
