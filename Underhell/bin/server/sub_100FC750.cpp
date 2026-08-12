char __thiscall sub_100FC750(int this, int a2, int a3, int a4, int a5)
{
  BOOL v6; // edi
  int v7; // eax
  int v8; // ecx

  v6 = (*(_BYTE *)(this + 356) & 4) == 0;
  v7 = sub_100D62E0(a4, v6);
  if ( v7 )
  {
    if ( v6 )
    {
      v8 = *(_DWORD *)(this + 424);
      if ( v8 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 48))(v8, 0);
      sub_101129A0(*(unsigned __int16 *)(this + 356) | 4);
      LOBYTE(v7) = sub_100EAB80((_DWORD *)this, 32);
    }
    else
    {
      LOBYTE(v7) = sub_100FC660(this);
    }
  }
  return v7;
}
