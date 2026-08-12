int __thiscall sub_100855D0(int this, unsigned __int16 a2)
{
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // ax

  v3 = sub_1007A730(off_103DCD78, *(_DWORD *)(168 * a2 + *(_DWORD *)(this + 36)));
  v4 = v3;
  if ( !v3 || !sub_10085580((void *)this, v3) )
    return 0;
  do
  {
    do
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 112))(v4);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
    }
    while ( v5 == 0xFFFF );
  }
  while ( (*(_BYTE *)(168 * v5 + *(_DWORD *)(this + 36) + 8) & 4) != 0 && (*(_BYTE *)(this + 208) != 0) == -1 );
  return v4;
}
