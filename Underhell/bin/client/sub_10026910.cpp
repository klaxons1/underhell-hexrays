int __thiscall sub_10026910(_BYTE *this, int a2)
{
  _BYTE *v2; // edi
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]

  v2 = this;
  if ( !byte_10407398 && this[1157] )
    return 0;
  v4 = 0;
  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseAnimating::DrawModel", 0, "Other_Model_Rendering", 0, 4);
  if ( !v2[116] )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  v10 = 0;
  if ( *(_DWORD *)(dword_10403964 + 48) )
  {
    v9 = dword_1047CA8C;
    (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
    if ( *(_DWORD *)(dword_10403964 + 48) == 2 )
      v4 = 32;
    if ( (a2 & 0x40000000) != 0 )
      v4 |= 0x40000000u;
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 128))(v2);
    v5 = (int)(v2 - 4);
    if ( (unsigned __int8)sub_10037870(v5) )
    {
      v7 = sub_10025310(v5, v4);
      if ( !v7 || !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(v7 + 4) + 40))(v7 + 4, 0) )
        goto LABEL_17;
      v6 = v4 | 1;
    }
    else
    {
      v6 = a2 | v4;
    }
    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)v5 + 620))(v6);
LABEL_17:
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
    v2 = this;
  }
  sub_100364E0(v2 - 4);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v10;
}
