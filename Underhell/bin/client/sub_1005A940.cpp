int __thiscall sub_1005A940(int this)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  *(float *)(this + 16) = 0.0;
  *(_WORD *)(this + 32) &= 0xFFF8u;
  *(_WORD *)(this + 34) = -1;
  *(float *)(this + 20) = 1.0;
  *(_DWORD *)(this + 12) = -1;
  *(_DWORD *)(this + 24) = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 312))(v2);
  *(_DWORD *)(this + 28) = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 312))(v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  return this;
}
