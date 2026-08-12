void __thiscall sub_1008D510(int this)
{
  int v2; // esi
  char v3; // cl
  int v4; // edx
  char v5; // al
  char v6; // al
  unsigned __int16 v7; // bx
  float v8; // ebx
  int v9; // ebx
  int v10; // ebx
  void (__thiscall *v11)(int); // edx
  unsigned __int16 v12; // cx
  int v13; // ebx
  _WORD *v14; // eax
  int v15; // edx
  int v16; // eax
  _WORD *v17; // ebx
  int v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h]
  _WORD *v20; // [esp+10h] [ebp-10h]
  int v21; // [esp+14h] [ebp-Ch]
  int i; // [esp+14h] [ebp-Ch]
  unsigned __int16 v23[3]; // [esp+18h] [ebp-8h] BYREF
  char v24; // [esp+1Fh] [ebp-1h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::PreRender", 0, "Shadow_Rendering", 0, 4);
  v2 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  CVProfile::EnterScope(g_VProfCurrentProfile, "CClientShadowMgr::PreRender", 0, "Flashlight Shadows", 0, 4);
  if ( *(_DWORD *)(dword_1042C2A4 + 48)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 384))(dword_1047C96C) )
  {
    sub_10229140(&unk_1042C2A0, 0);
    sub_100890B0(this);
  }
  v3 = *(_BYTE *)(this + 268);
  v4 = *(_DWORD *)(dword_1042C334 + 48);
  v5 = *(_DWORD *)(dword_1042C2A4 + 48) != 0;
  if ( v5 != v3 || v4 != *(_DWORD *)(this + 272) )
  {
    if ( v5 == 1 && v3 == 1 && v4 != *(_DWORD *)(this + 272) )
    {
      sub_100890B0(this);
LABEL_15:
      sub_1008A530((char *)this);
      goto LABEL_16;
    }
    if ( v3 )
    {
      if ( !*(_DWORD *)(dword_1042C2A4 + 48) )
      {
        sub_100890B0(this);
        goto LABEL_16;
      }
    }
    else if ( !*(_DWORD *)(dword_1042C2A4 + 48) )
    {
      goto LABEL_16;
    }
    if ( !v3 )
      goto LABEL_15;
  }
LABEL_16:
  CVProfile::ExitScope(g_VProfCurrentProfile);
  v6 = *(_BYTE *)(this + 208);
  if ( (*(_DWORD *)(dword_1042C0AC + 48) != 0) == v6 )
  {
    *(_BYTE *)(this + 210) = 1;
    v7 = sub_10087C40(this + 220);
    *(_DWORD *)v23 = v7;
    if ( v7 != 0xFFFF )
    {
      while ( 1 )
      {
        v19 = dword_1047CA8C;
        (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
        LODWORD(v8) = *(unsigned __int16 *)(*(_DWORD *)(this + 224) + 10 * v7 + 8);
        v21 = LODWORD(v8);
        if ( *(_BYTE *)(this + 320) )
          sub_10085D20((_DWORD *)this, v8);
        v9 = 168 * LOWORD(v8);
        if ( (*(_BYTE *)(v9 + *(_DWORD *)(this + 36) + 8) & 1) != 0 )
        {
          CVProfile::EnterScope(
            g_VProfCurrentProfile,
            "CClientShadowMgr::UpdateProjectedTextureInternal",
            0,
            "Flashlight Shadows",
            0,
            4);
          (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_1041318C + 56))(
            *(unsigned __int16 *)(v9 + *(_DWORD *)(this + 36) + 4),
            1);
          sub_1008CB40(this, 0, v21);
          CVProfile::ExitScope(g_VProfCurrentProfile);
        }
        else
        {
          sub_1008CC10((_DWORD *)this, v21, 0);
        }
        v10 = (unsigned __int16)sub_10087D10((_DWORD *)(this + 220), v23[0]);
        v11 = *(void (__thiscall **)(int))(*(_DWORD *)v19 + 104);
        *(_DWORD *)v23 = v10;
        v11(v19);
        if ( (_WORD)v10 == 0xFFFF )
          break;
        v7 = v23[0];
      }
    }
    sub_10087B80(this + 220);
    v18 = *(_DWORD *)(this + 260);
    for ( i = 0; i < v18; ++i )
    {
      v20 = (_WORD *)(*(_DWORD *)(this + 248) + 2 * i);
      sub_10086460((_WORD *)(this + 220), (int)v20, v23, &v24);
      v12 = sub_10086680(this + 220);
      v13 = 10 * v12;
      v14 = (_WORD *)(v13 + *(_DWORD *)(this + 224));
      v14[2] = v23[0];
      v14[1] = -1;
      *v14 = -1;
      v14[3] = 0;
      if ( v23[0] == 0xFFFF )
      {
        *(_WORD *)(this + 236) = v12;
      }
      else
      {
        v15 = *(_DWORD *)(this + 224);
        if ( v24 )
          *(_WORD *)(v15 + 10 * v23[0]) = v12;
        else
          *(_WORD *)(v15 + 10 * v23[0] + 2) = v12;
      }
      sub_10086970(this + 220, v12);
      v16 = *(_DWORD *)(this + 224);
      ++*(_WORD *)(this + 238);
      v17 = (_WORD *)(v13 + v16 + 8);
      if ( v17 )
        *v17 = *v20;
    }
    *(_DWORD *)(this + 260) = 0;
    *(_BYTE *)(this + 210) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    if ( v6 )
      sub_1008BFC0(this);
    else
      sub_1008D370((_BYTE *)this);
    sub_10086FF0((_DWORD *)this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
