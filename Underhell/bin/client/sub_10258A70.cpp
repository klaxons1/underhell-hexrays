void __thiscall sub_10258A70(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 236) )
  {
    *(_DWORD *)(this + 400) = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 228))(this, v5);
    *(_DWORD *)(this + 312) = 0;
    *(_BYTE *)(this + 336) = 0;
    *(_DWORD *)(this + 360) = sub_102580F0((_DWORD *)this, a2);
    v3 = sub_102581D0((_DWORD *)this, a2);
    *(_DWORD *)(this + 412) = v3;
    *(_DWORD *)(this + 400) = *(_DWORD *)(32 * v3 + *(_DWORD *)(this + 264));
    v4 = 32 * *(_DWORD *)(this + 412);
    *(_DWORD *)(this + 404) = *(_DWORD *)(v4 + *(_DWORD *)(this + 264) + 4);
    *(_BYTE *)(this + 408) = *(_BYTE *)(v4 + *(_DWORD *)(this + 264) + 8);
    *(_BYTE *)(this + 388) = 0;
  }
}
