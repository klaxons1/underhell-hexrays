void __thiscall sub_10038850(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // edi
  int (__thiscall *v6)(_DWORD *); // eax
  _DWORD *v7; // esi
  int v8; // eax
  bool v9; // al
  float *v10; // eax
  float *v11; // eax
  int v12; // eax
  unsigned int v13; // eax

  if ( (unsigned __int8)sub_101BC880() )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseEntity::GetToolRecordingState", 0, "Tools", 0, 4);
    v3 = this[281];
    if ( v3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 2) != v3 >> 12 )
      v4 = 0;
    else
      v4 = *((_DWORD *)off_103DCD74 + 4 * (this[281] & 0xFFF) + 1);
    if ( (dword_1040583C & 1) == 0 )
    {
      dword_1040583C |= 1u;
      byte_10405820 &= 0xFCu;
      flt_10405810 = 0.0;
      flt_10405824 = 0.0;
      dword_10405814 = 0;
      flt_10405828 = 0.0;
      dword_10405818 = -1;
      flt_1040582C = 0.0;
      dword_1040581C = 0;
      flt_10405830 = 0.0;
      flt_10405834 = 0.0;
      flt_10405838 = 0.0;
    }
    flt_10405810 = *((float *)off_103DC81C + 3);
    v5 = *(_DWORD *)dword_10413178;
    v6 = *(int (__thiscall **)(_DWORD *))(this[1] + 36);
    v7 = this + 1;
    v8 = v6(v7);
    dword_10405814 = (*(int (__thiscall **)(int, int))(v5 + 12))(dword_10413178, v8);
    if ( v4 )
      dword_10405818 = (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 36))(v4 + 8);
    else
      dword_10405818 = -1;
    dword_1040581C = this[28];
    v9 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 12))(v7)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(this[2] + 32))(this + 2);
    byte_10405820 = byte_10405820 & 0xFC | v9;
    v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 4))(v7);
    flt_10405824 = *v10;
    flt_10405828 = v10[1];
    flt_1040582C = v10[2];
    v11 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
    flt_10405830 = *v11;
    flt_10405834 = v11[1];
    flt_10405838 = v11[2];
    if ( v4 && (*(_DWORD *)(v4 + 112) & 8) != 0 )
      dword_1040581C |= 8u;
    if ( this[81] == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 2) != this[81] >> 12 )
      v12 = 0;
    else
      v12 = *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 1);
    if ( v12 )
    {
      while ( (*(_DWORD *)(v12 + 112) & 8) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 324);
        if ( v13 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v13 & 0xFFF) + 2) != v13 >> 12 )
          v12 = 0;
        else
          v12 = *((_DWORD *)off_103DCD74 + 4 * (v13 & 0xFFF) + 1);
        if ( !v12 )
          goto LABEL_31;
      }
      dword_1040581C |= 8u;
    }
LABEL_31:
    sub_1022ACE0("baseentity", (int)&flt_10405810);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
