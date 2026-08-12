int __thiscall sub_1016BC40(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  int (__cdecl *v9)(_DWORD *, int); // eax
  int v10; // eax
  int (__thiscall **v11)(int, int, int, int, _DWORD, int); // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // [esp+Ch] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_LocalTempEntity::DrawStudioModel", 0, "Other_Model_Rendering", 0, 4);
  v3 = this + 1;
  if ( !(*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    goto LABEL_9;
  v4 = *(_DWORD *)dword_10413178;
  v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 36))(this + 1);
  if ( (*(int (__thiscall **)(int, int))(v4 + 36))(dword_10413178, v5) != 3 )
    goto LABEL_9;
  v6 = dword_1047CA8C;
  v16 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(*v3 + 36))(this + 1) )
    sub_10026520((int)this);
  v7 = (_DWORD *)this[485];
  if ( !v7 || !*v7 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
LABEL_9:
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  v9 = (int (__cdecl *)(_DWORD *, int))this[494];
  if ( v9 )
  {
    v10 = v9(this, a2);
  }
  else
  {
    v11 = *(int (__thiscall ***)(int, int, int, int, _DWORD, int))dword_10413160;
    v12 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 40))(
            this,
            this[299],
            this[300],
            this[301],
            0,
            0);
    v13 = (*(int (__thiscall **)(_DWORD *, int))(*this + 36))(this, v12);
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 36))(this + 1, v13);
    v10 = (*v11)(dword_10413160, a2, (int)(this + 1), 0xFFFF, this[20], v14);
    v6 = v16;
  }
  v15 = v10;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v15;
}
