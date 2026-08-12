char *__thiscall sub_10430E10(int this, const char *a2)
{
  unsigned __int16 v3; // ax
  char *v5; // [esp+4h] [ebp-4h] BYREF

  v3 = sub_10430440((_WORD *)this, (int)&a2);
  if ( v3 != 0xFFFF )
    return *(char **)(*(_DWORD *)(this + 4) + 12 * v3 + 8);
  v5 = sub_10001FB0(a2);
  sub_10430DB0(this, (int)&v5);
  return v5;
}
