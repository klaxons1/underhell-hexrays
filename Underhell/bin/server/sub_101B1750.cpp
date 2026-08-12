char __thiscall sub_101B1750(_DWORD *this, int a2, int *a3)
{
  int v3; // eax
  int v5[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (this[62] & 8) == 0 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != dword_106BAFEC )
    return 0;
  (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(**(_DWORD **)(a2 + 28) + 232))(*(_DWORD *)(a2 + 28), v5, this + 241);
  sub_1025F3D0((int)v5, 0.0020000001);
  v3 = sub_101B01B0((float *)v5);
  if ( v3 < 0 )
    return 0;
  *a3 = v3;
  return 1;
}
