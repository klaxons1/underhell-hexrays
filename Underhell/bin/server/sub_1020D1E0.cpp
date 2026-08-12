int __thiscall sub_1020D1E0(void *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v6; // esi
  int v7; // [esp+8h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-10h]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_1016B400((int)this, &v7);
  v1 = v10 - 1;
  if ( v10 - 1 < 0 )
  {
LABEL_5:
    v4 = v7;
    v10 = 0;
    if ( v9 >= 0 )
    {
      if ( v7 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
        v4 = 0;
        v7 = 0;
      }
      v8 = 0;
    }
    v11 = v4;
    if ( v9 >= 0 )
    {
      if ( v4 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v2 = v7;
      v3 = *(_DWORD *)(v7 + 4 * v1);
      if ( *(char **)(v3 + 92) == "point_enable_motion_fixup" )
        break;
      if ( sub_100D6240((_DWORD *)v3, "point_enable_motion_fixup") )
      {
        v2 = v7;
        break;
      }
      if ( --v1 < 0 )
        goto LABEL_5;
    }
    v6 = *(_DWORD *)(v2 + 4 * v1);
    v10 = 0;
    if ( v9 >= 0 )
    {
      if ( v2 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
        v2 = 0;
        v7 = 0;
      }
      v8 = 0;
    }
    v11 = v2;
    if ( v9 >= 0 && v2 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
    return v6;
  }
}
