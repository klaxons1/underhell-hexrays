char __thiscall sub_100FC6E0(int this, int a2)
{
  BOOL v3; // edi
  int v4; // eax
  int v5; // ecx

  v3 = (*(_BYTE *)(this + 356) & 4) == 0;
  v4 = sub_100D62E0(3, v3);
  if ( v4 )
  {
    if ( v3 )
    {
      v5 = *(_DWORD *)(this + 424);
      if ( v5 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 0);
      sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
      LOBYTE(v4) = sub_100EAB80((_DWORD *)this, 32);
    }
    else
    {
      LOBYTE(v4) = sub_100FC660(this);
    }
  }
  return v4;
}
