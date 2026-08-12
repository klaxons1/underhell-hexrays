int __thiscall sub_1024B0A0(int *this, int a2, __int16 a3)
{
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax

  v4 = this + 55;
  v5 = sub_1024AF10(this + 55, this[58]);
  v6 = 12 * v5;
  *(_DWORD *)(v6 + *v4) = a2;
  *(_WORD *)(v6 + *v4 + 4) = a3;
  *(_WORD *)(v6 + *v4 + 6) = -1;
  *(_WORD *)(v6 + *v4 + 8) = -1;
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  return v5;
}
