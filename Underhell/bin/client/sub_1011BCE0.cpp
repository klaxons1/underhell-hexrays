_DWORD *__thiscall sub_1011BCE0(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // [esp-8h] [ebp-10h] BYREF
  int v4; // [esp-4h] [ebp-Ch]
  void **v5; // [esp+4h] [ebp-4h]

  v4 = (int)this;
  v3 = (int)this;
  v5 = (void **)&v3;
  this[343] = 0;
  this[344] = 0;
  this[345] = 0;
  sub_1011BC10((int)(this + 346), 1024, 0, 0, v3, v4);
  memset(this, 0, 0x550u);
  *((float *)this + 340) = 0.0;
  *((float *)this + 341) = 0.0;
  result = this;
  *((float *)this + 342) = 0.0;
  return result;
}
