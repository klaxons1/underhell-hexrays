int __thiscall sub_1005CE10(_DWORD *this, int a2)
{
  int result; // eax
  _BYTE v4[132]; // [esp+8h] [ebp-84h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x10 )
    return Error("UpdatePlayerName with bogus slot %d\n", a2);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(this[298] + 16))(this + 298, a2)
    && (*(unsigned __int8 (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(dword_1041315C, a2, v4) )
  {
    result = sub_100AF260(v4);
    this[a2 + 299] = result;
  }
  else
  {
    result = sub_100AF260("unconnected");
    this[a2 + 299] = result;
  }
  return result;
}
