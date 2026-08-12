_DWORD *__thiscall sub_100B1FF0(_DWORD *this, const char *a2)
{
  const char *v2; // eax
  char *v4; // edi
  int v5; // ecx
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  this[18] = 0;
  v4 = (char *)(this + 2);
  this[19] = this + 2;
  this[22] = -1;
  this[28] = 0;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  if ( !a2 )
    v2 = String;
  v5 = *(_DWORD *)sub_10162BE0(v7, v2);
  *((float *)this + 20) = 0.0;
  *this = 0;
  this[1] = v5;
  *((_DWORD *)v4 + 16) = 0;
  *((float *)this + 20) = 0.0;
  this[22] = -1;
  *((float *)this + 33) = 0.0;
  this[27] = 0;
  return this;
}
