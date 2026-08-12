void __thiscall sub_1007ED70(int (__cdecl **this)(_DWORD), int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // [esp+8h] [ebp-8h]
  int v9; // [esp+18h] [ebp+8h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "BuildRenderablesList", 0, "BuildRenderablesList", 0, 4);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = 0;
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v9 = 0;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 688168);
      sub_1007E930(this, *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)a2 + 8) + 2 * v4), v4, a2);
      v6 = *(_DWORD *)(v3 + 688168) - v5;
      if ( v6 && (*(_BYTE *)(a2 + 44) & 2) != 0 )
        sub_1007D110((float *)(a2 + 8), (float *)(a2 + 20), (_DWORD *)(v3 + 12 * v5 + 393224), v6);
      if ( ++v9 >= v7 )
        break;
      v4 = v9;
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
