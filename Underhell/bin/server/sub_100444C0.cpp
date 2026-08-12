int __thiscall sub_100444C0(int this)
{
  int v3; // eax

  if ( !sub_10023D10((_DWORD *)this, 18)
    || (*(_BYTE *)(this + 2716) & 0x40) != 0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1344))(this) )
  {
    return 0;
  }
  v3 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 2092))(this, 1, 0);
  return sub_10022CA0((_DWORD *)this, v3) ? 0x17 : 0;
}
