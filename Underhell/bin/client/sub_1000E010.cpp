int __thiscall sub_1000E010(void *this, int a2, float *a3)
{
  double ArgList; // [esp+0h] [ebp-11Ch]
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  ArgList = *a3;
  sub_10228370(Buffer, 0x100u, "%f %f %f", SLOBYTE(ArgList));
  return (*(int (__thiscall **)(void *, int, char *))(*(_DWORD *)this + 152))(this, a2, Buffer);
}
