void __thiscall sub_10142590(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CViewRender::DrawTranslucentWorldInLeaves", 0, "World Rendering", 0, 4);
  v3 = this[37];
  v4 = *(_DWORD *)(v3 + 12) - 1;
  v7 = v3;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 24);
      v6 = v5 ? *(unsigned __int16 *)(v5 + 2 * v4) : v4;
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413168 + 132))(
             dword_10413168,
             this[35],
             v6,
             this[33]) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)dword_10413168 + 72))(
          dword_10413168,
          this[35],
          v6,
          this[33],
          a2);
      }
      if ( --v4 < 0 )
        break;
      v3 = v7;
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
