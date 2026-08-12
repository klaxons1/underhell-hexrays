void __thiscall sub_103290B0(_BYTE *this)
{
  int (__thiscall *v2)(_BYTE *, const char *); // edx
  const char *v3; // eax
  const char *v4; // [esp+4h] [ebp-108h]
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v2 = *(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)this + 2228);
  Buffer[0] = 0;
  v3 = (const char *)v2(this, "Alert");
  sub_1001E280(Buffer, "%s.%s", v3, v4);
  this[3788] = 1;
  sub_1023C380(this, (int)Buffer, 0.0, 0);
}
