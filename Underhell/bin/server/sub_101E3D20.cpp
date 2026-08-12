int __thiscall sub_101E3D20(int this, float a2, int a3)
{
  if ( *(_BYTE *)(this + 225) )
    *(_DWORD *)(this + 3464) &= ~(a3 & ~(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 84))(dword_106B3CDC));
  return sub_100C7D90((_BYTE *)this, a2, a3);
}
