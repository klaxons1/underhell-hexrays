int __thiscall sub_1004BD30(int this, int a2, float a3)
{
  int v4; // ecx
  char v5; // bl
  int result; // eax
  _DWORD v7[2]; // [esp+0h] [ebp-8h] BYREF

  *(float *)&v7[1] = a3;
  v4 = *(_DWORD *)(this + 4);
  v5 = *(_BYTE *)(this + 8);
  v7[0] = a2;
  result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 1256))(v4, v7);
  *(_BYTE *)(this + 8) = v5;
  return result;
}
