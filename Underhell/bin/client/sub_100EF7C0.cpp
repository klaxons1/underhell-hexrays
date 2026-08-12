int __thiscall sub_100EF7C0(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int i; // edi
  int v10; // ecx
  int j; // edi
  int v12; // ecx
  int result; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v2 = *(unsigned __int16 *)(this + 52);
  if ( v2 != 0xFFFF )
  {
    do
    {
      v3 = *(_DWORD *)(this + 40);
      v4 = *(unsigned __int16 *)(v3 + 8 * (unsigned __int16)v2 + 6);
      v5 = *(_DWORD *)(*(_DWORD *)(v3 + 8 * (unsigned __int16)v2) + 140);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 28))(v5);
      LOWORD(v2) = v4;
    }
    while ( v4 != 0xFFFF );
  }
  sub_100EC500((_WORD *)(this + 40));
  if ( *(int *)(this + 48) >= 0 )
  {
    if ( *(_DWORD *)(this + 40) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 40));
      *(_DWORD *)(this + 40) = 0;
    }
    *(_DWORD *)(this + 44) = 0;
  }
  v6 = *(_DWORD *)(this + 40);
  *(_WORD *)(this + 56) = -1;
  *(_WORD *)(this + 60) = -1;
  *(_DWORD *)(this + 64) = v6;
  if ( *(_DWORD *)(this + 68) )
  {
    do
    {
      v7 = *(_DWORD *)(this + 68);
      v8 = *(_DWORD *)(v7 + 6708);
      if ( v7 )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      *(_DWORD *)(this + 68) = v8;
    }
    while ( v8 );
  }
  for ( i = (unsigned __int16)sub_100EDD20(this + 180);
        i != 0xFFFF;
        i = (unsigned __int16)sub_100EDDF0((_DWORD *)(this + 180), i) )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 184) + 16 * (unsigned __int16)i + 12) + 24);
    if ( v10 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 52))(v10);
  }
  sub_100EF6E0((_DWORD *)(this + 180));
  for ( j = *(_DWORD *)(this + 172) - 1; j >= 0; --j )
  {
    v12 = **(_DWORD **)(*(_DWORD *)(this + 160) + 4 * j);
    if ( v12 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 52))(v12);
  }
  sub_100EDAF0((int *)(this + 160));
  result = sub_101FCC60(off_103EE614);
  v14 = *(_DWORD *)(this + 92);
  if ( v14 )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 260))(v14, 0);
  v15 = *(_DWORD *)(this + 268);
  *(_DWORD *)(this + 92) = 0;
  if ( v15 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 20))(v15, -1);
    result = DestroyThreadPool(*(_DWORD *)(this + 268));
    *(_DWORD *)(this + 268) = 0;
  }
  v16 = *(_DWORD *)(this + 272);
  if ( v16 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 20))(v16, -1);
    result = DestroyThreadPool(*(_DWORD *)(this + 272));
    *(_DWORD *)(this + 272) = 0;
  }
  return result;
}
