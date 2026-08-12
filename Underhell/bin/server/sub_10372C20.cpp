char __thiscall sub_10372C20(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // eax

  v2 = *(_DWORD *)(a2 + 16);
  if ( (v2 & 0x4000000) != 0 || (v2 & 0x20000000) != 0 )
    return 0;
  v4 = this[906];
  if ( v4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 224))(v4, a2);
  else
    return sub_100242F0(this, a2);
}
