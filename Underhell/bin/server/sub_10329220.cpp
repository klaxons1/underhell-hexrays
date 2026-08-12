void __thiscall sub_10329220(_BYTE *this, int a2)
{
  int (__thiscall *v3)(_BYTE *, const char *); // edx
  const char *v4; // eax
  const char *v5; // [esp+4h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v3 = *(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 2228);
  Buffer[0] = 0;
  v4 = (const char *)v3(this, "Pain");
  sub_1001E280(Buffer, "%s.%s", v4, v5);
  this[3788] = 1;
  sub_1023C380(this, (int)Buffer, 0.0, 0);
}
