char *__thiscall sub_10079570(int this, int a2)
{
  unsigned __int16 v3; // ax
  _DWORD v5[3]; // [esp+4h] [ebp-34h] BYREF
  char v6; // [esp+10h] [ebp-28h]

  if ( (dword_10413884 & 1) == 0 )
  {
    dword_10413884 |= 1u;
    byte_1041385C = 0;
    dword_10413854 = 0;
    dword_10413858 = -1;
  }
  if ( !a2 )
    return 0;
  v6 = 0;
  v5[1] = 0;
  v5[0] = a2;
  v5[2] = -1;
  v3 = sub_10077FC0((_WORD *)(this + 4), (int)v5);
  if ( v3 == 0xFFFF )
    return 0;
  qmemcpy(&dword_10413854, (const void *)(*(_DWORD *)(this + 8) + 60 * v3 + 12), 0x30u);
  return &byte_1041385C;
}
