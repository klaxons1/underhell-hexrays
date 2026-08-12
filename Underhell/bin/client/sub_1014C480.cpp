int __thiscall sub_1014C480(char *this, int a2)
{
  int result; // eax
  _BYTE v4[36]; // [esp+4h] [ebp-84h] BYREF
  _BYTE v5[96]; // [esp+28h] [ebp-60h] BYREF

  result = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a2, v4);
  if ( (_BYTE)result )
    return sub_1014C280(this + 40, (int)v5);
  return result;
}
