void __thiscall sub_100894D0(_DWORD *this, unsigned __int16 a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int (__thiscall ***v5)(_DWORD); // ebx
  int v6; // ebx
  unsigned __int16 v7; // ax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v4 = this[9] + 168 * a2;
  v5 = (int (__thiscall ***)(_DWORD))sub_1007A730(off_103DCD78, *(_DWORD *)v4);
  if ( v5 == a3
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a3 + 92))(a3, 3)
    || sub_100892A0(this, a2, a3, (int)v5) )
  {
    return;
  }
  if ( !a4 )
  {
    if ( (*(_BYTE *)(v4 + 8) & 1) == 0 )
    {
      v14 = *(_DWORD *)dword_1041318C;
      v15 = (*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
      v16 = (*(int (__thiscall **)(_DWORD *, int))(*a3 + 4))(a3, v15);
      v17 = (*(int (__thiscall **)(_DWORD *, int))(*a3 + 36))(a3, v16);
      (*(void (__thiscall **)(int, _DWORD, int))(v14 + 28))(dword_1041318C, *(unsigned __int16 *)(v4 + 4), v17);
      return;
    }
    CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::AddShadowToReceiver", 0, "Flashlight Shadows", 0, 4);
    if ( !sub_10036940((unsigned int *)(v4 + 160)) && !sub_10085C20(this, a2, (int)a3) )
    {
LABEL_24:
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return;
    }
    v10 = *(_DWORD *)dword_1041318C;
    v11 = (*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
    v12 = (*(int (__thiscall **)(_DWORD *, int))(*a3 + 4))(a3, v11);
    v13 = (*(int (__thiscall **)(_DWORD *, int))(*a3 + 36))(a3, v12);
    (*(void (__thiscall **)(int, _DWORD, int))(v10 + 28))(dword_1041318C, *(unsigned __int16 *)(v4 + 4), v13);
LABEL_23:
    (*(void (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_1041318C + 72))(
      dword_1041318C,
      *(unsigned __int16 *)(v4 + 4),
      a3);
    goto LABEL_24;
  }
  if ( a4 == 1 )
  {
    if ( sub_100851C0((int)this, a2) == 2 )
    {
      v8 = (**v5)(v5);
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 28))(v8);
      if ( v9 && (*(_DWORD *)(v9 + 732) & 0x2080) != 0 )
        (*(void (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_10413190 + 28))(
          dword_10413190,
          *(unsigned __int16 *)(v4 + 4),
          a3);
      return;
    }
    if ( (*(_BYTE *)(v4 + 8) & 1) == 0 )
      return;
    CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::AddShadowToReceiver", 0, "Flashlight Shadows", 0, 4);
    if ( !sub_10036940((unsigned int *)(v4 + 160)) && !sub_10085C20(this, a2, (int)a3) )
      goto LABEL_24;
    (*(void (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_10413190 + 28))(
      dword_10413190,
      *(unsigned __int16 *)(v4 + 4),
      a3);
    goto LABEL_23;
  }
  if ( a4 == 2 && (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::AddShadowToReceiver", 0, "Flashlight Shadows", 0, 4);
    if ( sub_10036940((unsigned int *)(v4 + 160)) || sub_10085C20(this, a2, (int)a3) )
    {
      (*(void (__thiscall **)(_DWORD *))(*a3 + 128))(a3);
      v6 = *(_DWORD *)dword_1041318C;
      v7 = (*(int (__thiscall **)(_DWORD *))(*a3 + 132))(a3);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(v6 + 40))(dword_1041318C, *(unsigned __int16 *)(v4 + 4), v7);
      (*(void (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_1041318C + 72))(
        dword_1041318C,
        *(unsigned __int16 *)(v4 + 4),
        a3);
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return;
    }
    goto LABEL_24;
  }
}
