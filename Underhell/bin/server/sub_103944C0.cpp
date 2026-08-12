int __thiscall sub_103944C0(int this, int a2)
{
  int result; // eax

  sub_100CE0A0((_DWORD *)this, a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2400))(this);
  *(_BYTE *)(this + 5600) = result;
  return result;
}
