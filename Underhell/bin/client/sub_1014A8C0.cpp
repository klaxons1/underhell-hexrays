void __thiscall sub_1014A8C0(int this, char a2, int a3, char a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // [esp+Ch] [ebp-4h]
  char v14; // [esp+23h] [ebp+13h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "BuildWorldRenderLists", 0, "World Rendering", 0, 4);
  sub_10075690();
  ++*(_DWORD *)(*(_DWORD *)(this + 128) + 148);
  v7 = *(_DWORD *)(this + 152);
  if ( !v7 || 3.4028235e38 == *(float *)(v7 + 400) )
    v8 = 0;
  else
    v8 = v7 + 388;
  v13 = v8;
  if ( a4 && *(_DWORD *)(dword_1043C15C + 48) )
  {
    v14 = 1;
    if ( !v8 && sub_10147EB0(dword_103E7ED8, (float *)(this + 8), (_DWORD *)(this + 140), (_DWORD *)(this + 148)) )
      goto LABEL_22;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(this + 140) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 44))(dword_10413168);
  v9 = sub_100DDA40(32);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 4) = 1;
    *(_DWORD *)v9 = &ClientWorldListInfo_t::`vftable';
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 20) = 0;
    *(_DWORD *)(v9 + 24) = 0;
    *(_BYTE *)(v9 + 28) = 0;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_DWORD *)(this + 152);
  *(_DWORD *)(this + 148) = v9;
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 404);
  else
    v11 = a3;
  if ( v9 )
    v12 = v9 + 8;
  else
    v12 = 0;
  (*(void (__thiscall **)(int, _DWORD, int, int, int, int, int))(*(_DWORD *)dword_10413168 + 48))(
    dword_10413168,
    *(_DWORD *)(this + 140),
    v12,
    v11,
    v13,
    a5,
    a6);
  if ( v14 && !v13 )
    sub_1014A840((int)dword_103E7ED8, this + 8, *(void (__thiscall ****)(_DWORD))(this + 140), *(_DWORD *)(this + 148));
LABEL_22:
  if ( a2 )
    sub_10142FC0((char *)this);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
