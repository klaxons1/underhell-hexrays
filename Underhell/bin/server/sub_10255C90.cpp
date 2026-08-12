void __thiscall sub_10255C90(int this)
{
  int v2; // ecx

  v2 = *(_DWORD *)(this + 424);
  *(_BYTE *)(this + 916) = 0;
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 48))(v2, 1);
  if ( (*(_BYTE *)(this + 356) & 8) == 0 )
  {
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
    sub_100DCB50((void *)this, 0);
  }
}
