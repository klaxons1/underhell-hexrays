int __thiscall sub_10142430(int *this, int a2, _DWORD *a3)
{
  int v4; // edi
  bool v6; // zf
  int v7; // eax
  int result; // eax
  int v9; // [esp+18h] [ebp+Ch]

  v4 = *a3 & 0x22;
  *a3 &= ~v4;
  if ( (*a3 & 1) != 0 )
    *a3 |= v4;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) == 2;
  v7 = *this;
  v9 = *(_DWORD *)dword_10413168;
  if ( v6 )
  {
    (*(void (__thiscall **)(int *))(v7 + 40))(this);
    sub_101163A0(0);
  }
  else
  {
    (*(void (__thiscall **)(int *))(v7 + 40))(this);
  }
  (*(void (__thiscall **)(int, int, _DWORD))(v9 + 152))(dword_10413168, a2, *a3);
  *a3 ^= v4;
  result = *a3;
  if ( (*a3 & 1) != 0 )
  {
    result &= 0xFFFFFFFA;
    *a3 = result;
  }
  return result;
}
