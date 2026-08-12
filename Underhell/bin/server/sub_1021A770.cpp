int __thiscall sub_1021A770(void *this, const char *a2)
{
  CHAR v4[512]; // [esp+4h] [ebp-200h] BYREF

  wsprintfA(v4, "%s\\Settings", a2);
  return (*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)this + 44))(this, v4);
}
