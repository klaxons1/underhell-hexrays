char __thiscall sub_1024A540(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD v5[514]; // [esp+10h] [ebp-808h] BYREF

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10261520((int)(this + 145), 128.0, 0);
  v3 = sub_1025EEE0(v5);
  if ( !v3 )
    return 1;
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) || v3 == a2 )
  {
    ++v5[0];
    v3 = sub_1025EEE0(v5);
    if ( !v3 )
      return 1;
  }
  return 0;
}
