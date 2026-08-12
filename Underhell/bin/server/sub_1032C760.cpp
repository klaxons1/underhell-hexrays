void __thiscall sub_1032C760(int **this)
{
  int (__thiscall *v2)(int **, const char *); // edx
  const char *v3; // eax
  const char *v4; // [esp+4h] [ebp-10Ch]
  char Buffer[256]; // [esp+10h] [ebp-100h] BYREF

  v2 = (int (__thiscall *)(int **, const char *))(*this)[557];
  Buffer[0] = 0;
  v3 = (const char *)v2(this, "DiveBomb");
  sub_1001E280(Buffer, "%s.%s", v3, v4);
  *((_BYTE *)this + 3788) = 1;
  sub_1023C380(this, (int)Buffer, 0.0, 0);
  if ( *((_BYTE *)this + 225) )
  {
    ((void (__thiscall *)(int **, _BYTE *))(*this)[120])(this, (_BYTE *)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  sub_1032B480(this);
}
