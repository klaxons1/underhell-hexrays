void __thiscall sub_1031B2A0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _BYTE v4[32]; // [esp+0h] [ebp-20h] BYREF

  v2 = this[103];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    sub_1031A1B0(0, (int)v4);
  else
    sub_1031A1B0(*v3, (int)v4);
}
