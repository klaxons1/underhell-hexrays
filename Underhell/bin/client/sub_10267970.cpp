int __thiscall sub_10267970(int this)
{
  unsigned __int8 v2; // al
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  bool v12; // sf
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // eax
  int v17; // eax

  *(_DWORD *)this = &vgui::ListPanel::`vftable';
  sub_10266EE0((_DWORD *)this);
  v2 = *(_BYTE *)(this + 228);
  if ( v2 != 0xFF )
  {
    v3 = *(_DWORD *)(this + 216);
    do
    {
      v4 = 72 * v2;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + v4) + 300))(*(_DWORD *)(v3 + v4));
      v5 = *(_DWORD *)(*(_DWORD *)(this + 216) + v4 + 16);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 300))(v5);
      v3 = *(_DWORD *)(this + 216);
      v2 = *(_BYTE *)(v3 + v4 + 69);
    }
    while ( v2 != 0xFF );
  }
  v6 = (_DWORD *)(this + 216);
  sub_10267430((_BYTE *)(this + 216));
  v7 = *(_DWORD *)(this + 352);
  if ( v7 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 24))(v7, 1);
  v8 = *(_DWORD *)(this + 356);
  if ( v8 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 120))(v8, 1);
  v9 = *(_DWORD *)(this + 368);
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 120))(v9, 1);
  if ( *(char *)(this + 376) < 0 )
  {
    v10 = *(_DWORD *)(this + 436);
    if ( v10 )
    {
      sub_10279030(*(_DWORD *)(this + 436));
      sub_10034930(v10);
    }
  }
  v11 = *(_DWORD *)(this + 440);
  if ( v11 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 24))(v11, 1);
  v12 = *(int *)(this + 396) < 0;
  *(_DWORD *)(this + 400) = 0;
  if ( !v12 )
  {
    if ( *(_DWORD *)(this + 388) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 388));
      *(_DWORD *)(this + 388) = 0;
    }
    *(_DWORD *)(this + 392) = 0;
  }
  v12 = *(int *)(this + 396) < 0;
  v13 = *(_DWORD *)(this + 388);
  *(_DWORD *)(this + 404) = v13;
  if ( !v12 )
  {
    if ( v13 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
      *(_DWORD *)(this + 388) = 0;
    }
    *(_DWORD *)(this + 392) = 0;
  }
  v12 = *(int *)(this + 332) < 0;
  *(_DWORD *)(this + 336) = 0;
  if ( !v12 )
  {
    if ( *(_DWORD *)(this + 324) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 324));
      *(_DWORD *)(this + 324) = 0;
    }
    *(_DWORD *)(this + 328) = 0;
  }
  v12 = *(int *)(this + 332) < 0;
  v14 = *(_DWORD *)(this + 324);
  *(_DWORD *)(this + 340) = v14;
  if ( !v12 )
  {
    if ( v14 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
      *(_DWORD *)(this + 324) = 0;
    }
    *(_DWORD *)(this + 328) = 0;
  }
  v15 = (_DWORD *)(this + 288);
  sub_1026C690(this + 288);
  if ( *(int *)(this + 296) >= 0 )
  {
    if ( *v15 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v15);
      *v15 = 0;
    }
    *(_DWORD *)(this + 292) = 0;
  }
  v12 = *(int *)(this + 268) < 0;
  *(_DWORD *)(this + 272) = 0;
  if ( !v12 )
  {
    if ( *(_DWORD *)(this + 260) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 260));
      *(_DWORD *)(this + 260) = 0;
    }
    *(_DWORD *)(this + 264) = 0;
  }
  v12 = *(int *)(this + 268) < 0;
  v16 = *(_DWORD *)(this + 260);
  *(_DWORD *)(this + 276) = v16;
  if ( !v12 )
  {
    if ( v16 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
      *(_DWORD *)(this + 260) = 0;
    }
    *(_DWORD *)(this + 264) = 0;
  }
  v12 = *(int *)(this + 248) < 0;
  *(_DWORD *)(this + 252) = 0;
  if ( !v12 )
  {
    if ( *(_DWORD *)(this + 240) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 240));
      *(_DWORD *)(this + 240) = 0;
    }
    *(_DWORD *)(this + 244) = 0;
  }
  v12 = *(int *)(this + 248) < 0;
  v17 = *(_DWORD *)(this + 240);
  *(_DWORD *)(this + 256) = v17;
  if ( !v12 )
  {
    if ( v17 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
      *(_DWORD *)(this + 240) = 0;
    }
    *(_DWORD *)(this + 244) = 0;
  }
  sub_10267430((_BYTE *)(this + 216));
  if ( *(int *)(this + 224) >= 0 )
  {
    if ( *v6 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v6);
      *v6 = 0;
    }
    *(_DWORD *)(this + 220) = 0;
  }
  return sub_10240430(this, (int)v6, 0);
}
