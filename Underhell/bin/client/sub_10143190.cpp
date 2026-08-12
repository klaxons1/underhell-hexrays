void __userpurge sub_10143190(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, _DWORD *a6, int a7, int a8)
{
  int v9; // edi
  int v10; // eax
  void *v11; // eax
  void *v12; // ebx
  int v13; // edi
  int v15; // [esp+0h] [ebp-10h]
  int v16; // [esp+8h] [ebp-8h]

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CViewRender::DrawTranslucentWorldAndDetailPropsInLeaves",
    0,
    "World Rendering",
    0,
    4);
  v9 = a3;
  v16 = *(_DWORD *)(a1 + 148);
  if ( a3 >= a4 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v16 + 24);
      if ( v10 )
        v9 = *(unsigned __int16 *)(v10 + 2 * v9);
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_10413168 + 132))(
             dword_10413168,
             *(_DWORD *)(a1 + 140),
             v9,
             a5,
             a2) )
      {
        v11 = sub_100949D0();
        (*(void (__thiscall **)(void *, float *, float *, void *, void *, _DWORD, int))(*(_DWORD *)v11 + 68))(
          v11,
          &flt_1043BD14,
          &flt_1043BD2C,
          &unk_1043BD38,
          &unk_1043BD44,
          *a6,
          a7);
        *a6 = 0;
        (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_10413168 + 72))(
          dword_10413168,
          *(_DWORD *)(a1 + 140),
          v9,
          a5,
          a8);
      }
      v12 = off_103DCDDC;
      v13 = *(_DWORD *)off_103DCDDC;
      v15 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 128) + 60))(*(_DWORD *)(a1 + 128), v15);
      a2 = *(unsigned __int16 *)(*(_DWORD *)(v16 + 16) + 2 * a3);
      if ( (*(unsigned __int8 (__thiscall **)(void *))(v13 + 44))(v12) )
        *(_WORD *)(a7 + 2 * (*a6)++) = *(_WORD *)(*(_DWORD *)(v16 + 16) + 2 * a3);
      if ( --a3 < a4 )
        break;
      v9 = a3;
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
