int __thiscall sub_101B0050(_DWORD *this)
{
  int result; // eax
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  *(float *)&v3[2] = 3.0;
  v3[0] = this[201];
  v3[1] = 15;
  result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 92))(dword_106BAFF4, v3);
  this[200] = result;
  return result;
}
