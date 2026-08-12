void __thiscall sub_10256FB0(int this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 424);
  *(_BYTE *)(this + 916) = 0;
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 48))(v3, 1);
  if ( (*(_BYTE *)(this + 356) & 8) == 0 )
  {
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
    sub_100DCB50((void *)this, 0);
  }
}
