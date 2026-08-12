int __thiscall sub_100FBBC0(int this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 424);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 48))(v3, 1);
  return sub_101129A0(*(_WORD *)(this + 356) & 0xFFFB);
}
