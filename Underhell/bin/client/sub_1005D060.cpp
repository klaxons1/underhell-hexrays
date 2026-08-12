char __thiscall sub_1005D060(_DWORD *this, int a2)
{
  char result; // al
  char v3; // al
  _BYTE v4[132]; // [esp+4h] [ebp-84h] BYREF

  result = (*(int (__thiscall **)(_DWORD *, int))(this[298] + 16))(this + 298, a2);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a2, v4);
    return v3 != 0 ? v4[109] : 0;
  }
  return result;
}
