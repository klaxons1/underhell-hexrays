_DWORD *__thiscall sub_100B2070(_DWORD *this)
{
  char *v2; // edi
  int v3; // ecx
  _BYTE v5[4]; // [esp+Ch] [ebp-4h] BYREF

  this[18] = 0;
  v2 = (char *)(this + 2);
  this[19] = this + 2;
  this[22] = -1;
  this[28] = 0;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  v3 = *(_DWORD *)sub_10162BE0(v5, String);
  *((float *)this + 20) = 0.0;
  *this = 0;
  this[1] = v3;
  *((_DWORD *)v2 + 16) = 0;
  *((float *)this + 20) = 0.0;
  this[22] = -1;
  *((float *)this + 33) = 0.0;
  this[27] = 0;
  return this;
}
