int __thiscall sub_10252460(void *this, int ArgList)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sub_10228370(Buffer, 0x40u, "%d", ArgList);
  return (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 768))(this, Buffer);
}
