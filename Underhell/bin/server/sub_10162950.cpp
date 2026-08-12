int __thiscall sub_10162950(int this, const char *a2)
{
  unsigned __int16 v3; // ax
  _DWORD v5[9]; // [esp+8h] [ebp-2Ch] BYREF
  __int16 v6; // [esp+2Ch] [ebp-8h]
  int v7; // [esp+30h] [ebp-4h]

  if ( a2 )
  {
    memset(&v5[1], 0, 32);
    v7 = 0;
    v6 = 1;
    v5[0] = a2;
    v3 = sub_10161A10((_WORD *)(this + 44), (int)v5);
  }
  else
  {
    v3 = -1;
  }
  if ( v3 == 0xFFFF )
    v3 = sub_101628E0((void *)(this + 44), a2);
  return 52 * v3 + *(_DWORD *)(this + 48) + 12;
}
