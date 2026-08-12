int __thiscall sub_101E81F0(int this, int a2)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  v4 = 0.0;
  if ( (*(_BYTE *)(this + 3464) & 0x20) != 0 )
    result = sub_1023C380((int)"Player.FallGib", v4, 0);
  else
    result = sub_1023C380((int)"Player.Death", v4, 0);
  if ( *(_BYTE *)(this + 2329) )
    return sub_10239340(*(_DWORD *)(this + 24), "HEV_DEAD");
  return result;
}
