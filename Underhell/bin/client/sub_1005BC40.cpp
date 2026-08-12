int __thiscall sub_1005BC40(int this)
{
  int v2; // ecx
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 52))(*(_DWORD *)(this + 132));
  v2 = *(_DWORD *)(this + 136);
  *(_DWORD *)(this + 132) = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 52))(v2);
  *(_DWORD *)(this + 136) = 0;
  sub_1005B750(this, 1);
  sub_1005B360((unsigned __int16 *)(this + 12));
  result = sub_1005B8C0((unsigned __int16 *)(this + 68));
  *(_DWORD *)(this + 124) = -1;
  *(_WORD *)(this + 128) = -1;
  return result;
}
