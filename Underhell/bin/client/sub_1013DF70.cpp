int __usercall sub_1013DF70@<eax>(int a1@<ebx>, int *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // esi
  const char *v5; // edx
  int v6; // eax
  int v7; // esi
  char *v8; // eax
  int result; // eax
  _DWORD v10[39]; // [esp+40h] [ebp-9Ch] BYREF

  if ( *(_DWORD *)(dword_1043A5C4 + 48) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 80 )
    {
      v2 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "debug/yuv",
             "Other textures",
             1,
             0);
      v3 = v2;
      if ( v2 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 168))(v2) )
          sub_10053CE0(a1, (int)a2, v3, *a2, a2[1], a2[2], a2[3]);
      }
    }
  }
  if ( *(_DWORD *)(dword_1043A57C + 48) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 90 )
    {
      v4 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "debug/hsv",
             "Other textures",
             1,
             0);
      if ( v4 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 168))(v4) )
          sub_10053CE0(a1, (int)a2, v4, *a2, a2[1], a2[2], a2[3]);
      }
    }
  }
  if ( *(_DWORD *)(dword_1043A774 + 48) != -1 )
  {
    sub_101437D0(dword_10439968);
    v10[0] = &CLightmapDebugView::`vftable';
    sub_10145000(a2);
    sub_1013C780(v10);
    v10[0] = &CRendering3dView::`vftable';
    sub_10143830(v10);
  }
  if ( *(_DWORD *)(dword_1043A7BC + 48) )
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 112))(
      off_103DD080,
      *(_DWORD *)(dword_1043A804 + 48),
      *(_DWORD *)(dword_1043A804 + 48));
  if ( (dword_1043A37C & 0x1000) != 0 )
  {
    v5 = "FCVAR_NEVER_AS_STRING";
LABEL_19:
    sub_1013C920((int)v5, a1, 4096);
    goto LABEL_20;
  }
  v5 = *(const char **)(dword_1043A384 + 36);
  if ( v5 && *v5 )
    goto LABEL_19;
LABEL_20:
  if ( *(_DWORD *)(dword_1043A3CC + 48) )
    sub_1013CF80(4096);
  if ( *(_DWORD *)(dword_1043A4EC + 48) )
    sub_1013CFE0(
      4096,
      (int)"debug/debugcamerarendertarget",
      0.0,
      0.0,
      *(float *)(dword_1043A414 + 44),
      *(float *)(dword_1043A414 + 44));
  if ( *(_DWORD *)(dword_1043A45C + 48) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v7 = v6;
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 428))(v7, 0);
    sub_1013D2D0(4096, 0);
    sub_1013D2D0(4096, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 436))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
  if ( (dword_1043A64C & 0x1000) != 0 )
  {
    v8 = "FCVAR_NEVER_AS_STRING";
LABEL_32:
    sub_1013D5F0(4096, v8, *(float *)(dword_1043A69C + 44));
    goto LABEL_33;
  }
  v8 = *(char **)(dword_1043A654 + 36);
  if ( v8 && *v8 )
    goto LABEL_32;
LABEL_33:
  result = dword_1043A84C;
  if ( *(_DWORD *)(dword_1043A84C + 48) )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041318C + 68))(dword_1041318C);
  if ( *(_DWORD *)(dword_1043A6E4 + 48) )
    return sub_1013D930();
  return result;
}
