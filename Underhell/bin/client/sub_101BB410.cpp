bool __thiscall sub_101BB410(_WORD *this, int a2)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  v3[0] = a2;
  v3[1] = -1;
  return sub_101BA800(this + 4, (int)v3) != -1;
}
