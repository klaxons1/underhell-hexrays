char __userpurge sub_10093360@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, char a3, _DWORD *a4)
{
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  int v9; // ecx

  if ( a4 == a1 )
    return 0;
  if ( (a3 & 4) == 0 )
  {
    v6 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a4 + 320))(a4, a2) == 0;
    v7 = *a1;
    if ( v6 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(v7 + 1080))(a1) != 3 )
        return 0;
    }
    else if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(v7 + 1528))(a1) )
    {
      return 0;
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 264))(a4) )
    return 0;
  if ( (a4[64] & 0x8000) != 0 )
    return 0;
  v8 = sub_100D7680(a4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 2324);
    if ( v9 == 4
      || v9 == 6
      || *(_BYTE *)(v8 + 2680)
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1580))(v8) )
    {
      return 0;
    }
  }
  if ( (a3 & 0x10) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 320))(a4) )
      return sub_10023D10(a1, 32);
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 876))(a1, a4) )
      return 0;
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*a1 + 548))(a1, a4, 16449, 0);
}
