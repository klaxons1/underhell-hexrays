int __thiscall sub_1004B3A0(_DWORD *this, int a2)
{
  char v2; // al
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  if ( (*(_BYTE *)(this[1] + 236) & 1) == 0 )
    return a2;
  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  sub_10429A00(Buffer, 0x200u, "Behv: %s, ", v2);
  sub_100D5DE0(a2, (int)Buffer, 0.0, 255, 255, 255, 255);
  return a2 + 1;
}
