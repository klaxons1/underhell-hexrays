int __thiscall sub_10257CC0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // [esp+8h] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = this[59];
  v3 = this[53];
  this[74] = v2;
  *((_BYTE *)this + 292) = 1;
  (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)v3 + 780))(v3, v6, &v5);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[53] + 768))(this[53], v5);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
