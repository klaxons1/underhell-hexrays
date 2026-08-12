double __thiscall sub_100C7A90(float *this, int a2, int a3)
{
  float v6; // [esp+18h] [ebp+Ch]

  v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 116))(a3);
  sub_101C0960(a3, this, a2);
  if ( !*(_BYTE *)(a2 + 8)
    || this[426] * *(float *)(a2 + 4) / v6 <= *(float *)(dword_1069684C + 44)
    || ((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 76))(a3) & 0x40) != 0 )
  {
    return 0.0;
  }
  else
  {
    return 200.0;
  }
}
