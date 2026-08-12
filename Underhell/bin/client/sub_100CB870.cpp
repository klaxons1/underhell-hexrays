int __thiscall sub_100CB870(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v7; // [esp-4h] [ebp-Ch]

  v4 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 20))(a2, this[18], this[6], this[7]);
  v7 = this[5];
  v5 = this[4];
  this[3] = v4;
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)a2 + 32))(a2, v4, v5, v7);
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))(a2, this[3], 0);
}
