int __thiscall sub_1024E7E0(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int (__stdcall *v8)(const char *); // eax
  const char *v9; // eax
  int v10; // eax
  const char *v11; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  const char *v19; // eax
  const char *v20; // eax
  int v21; // ebp
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  _BYTE v31[4]; // [esp+68h] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570((unsigned int *)this, a2);
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "FrameTitleBar.TextColor",
                   v2);
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 270), v4);
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "FrameTitleBar.BgColor",
                   v2);
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 262), v5);
  v6 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "FrameTitleBar.DisabledTextColor",
                   v2);
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 274), v6);
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "FrameTitleBar.DisabledBgColor",
                   v2);
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 266), v7);
  v8 = *(int (__stdcall **)(const char *))(*(_DWORD *)v2 + 4);
  if ( *(_BYTE *)(this + 393) )
    v9 = (const char *)v8("FrameTitleBar.SmallFont");
  else
    v9 = (const char *)v8("FrameTitleBar.Font");
  if ( *(_DWORD *)(this + 408) )
  {
    v10 = *(_DWORD *)(this + 408);
  }
  else
  {
    if ( !v9 || (v11 = v9, !*v9) )
      v11 = "Default";
    v12 = *(_DWORD *)v2;
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v10 = (*(int (__thiscall **)(int, const char *, int))(v12 + 12))(v2, v11, v13);
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 288) + 128))(*(_DWORD *)(this + 288), v10);
  sub_1027CE60(*(_DWORD *)(this + 288));
  v14 = *(_DWORD *)v2;
  if ( *(_BYTE *)(this + 393) )
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v16 = (*(int (__thiscall **)(int, const char *, int))(v14 + 12))(v2, "MarlettSmall", v15);
  }
  else
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v16 = (*(int (__thiscall **)(int, const char *, int))(v14 + 12))(v2, "Marlett", v17);
  }
  v18 = v16;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 328) + 816))(*(_DWORD *)(this + 328), v16);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 332) + 816))(*(_DWORD *)(this + 332), v18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 336) + 816))(*(_DWORD *)(this + 336), v18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 340) + 816))(*(_DWORD *)(this + 340), v18);
  v19 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "Frame.TransitionEffectTime");
  *(float *)(this + 364) = atof(v19);
  v20 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(
                        v2,
                        "Frame.FocusTransitionEffectTime");
  *(float *)(this + 368) = atof(v20);
  v21 = *(_DWORD *)v2;
  v22 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 224))(this, &a2);
  v23 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(v21 + 20))(v2, v31, "Frame.BgColor", *v22);
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 278), v23);
  v24 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, _DWORD))(*(_DWORD *)v2 + 20))(
                    v2,
                    &a2,
                    "Frame.OutOfFocusBgColor",
                    *(_DWORD *)(this + 278));
  sub_1023B5F0((_DWORD *)this, (_DWORD *)(this + 282), v24);
  v25 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "Frame.ClientInsetX");
  if ( v25 )
    *(_DWORD *)(this + 372) = atoi(v25);
  v26 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "Frame.ClientInsetY");
  if ( v26 )
    *(_DWORD *)(this + 376) = atoi(v26);
  v27 = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "Frame.TitleTextInsetX");
  if ( v27 )
    *(_DWORD *)(this + 384) = atoi(v27);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, *(_DWORD *)(this + 278));
  v28 = *(_DWORD *)this;
  v29 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "FrameBorder");
  (*(void (__thiscall **)(int, int))(v28 + 252))(this, v29);
  return sub_1024DBA0(this, *(unsigned __int8 *)(this + 354));
}
