void __thiscall sub_101B0490(int this)
{
  int v2; // edi
  __int16 v3; // ax
  int v4; // eax
  int v5; // edi
  __int16 v6; // ax
  int v7; // edi
  int v8; // eax

  if ( *(_DWORD *)(this + 800) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 8))(*(_DWORD *)(this + 800));
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 72))(v2, v3 & 0xFFFD);
    }
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    v5 = v4;
    if ( v4 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 72))(v5, v6 & 0xFFFD);
    }
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
      if ( v7 )
      {
        if ( v8 )
          sub_101DA9E0(v7, v8);
      }
    }
  }
}
