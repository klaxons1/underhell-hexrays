char __thiscall sub_101B4CE0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx

  v4 = this[87];
  v5 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( v4 > v5 || v4 < v5 - 1 )
    DevWarning("Performance Warning: large friction system (%d objects)!!!\n", a3);
  this[87] = *(_DWORD *)(dword_106B31C8 + 24);
  return 0;
}
