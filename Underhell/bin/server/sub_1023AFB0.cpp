int __thiscall sub_1023AFB0(void *this, int a2, int a3, int a4)
{
  const char *v4; // eax
  void *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this;
  v4 = *(const char **)(*(int (__thiscall **)(void *, void **))(*(_DWORD *)this + 28))(this, &v6);
  if ( !v4 )
    v4 = String;
  return (*(int (__thiscall **)(int, const char *, int, int, int))(*(_DWORD *)dword_106B3204 + 144))(
           dword_106B3204,
           v4,
           a2,
           a3,
           a4);
}
