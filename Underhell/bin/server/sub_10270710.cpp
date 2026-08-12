char __thiscall sub_10270710(int *this)
{
  const char *v2; // eax
  void **v3; // eax
  _BYTE v5[4]; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*this + 28))(this, v5);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, v2);
  sub_100EBE30((int)this, 7);
  if ( (*(int (__thiscall **)(int *))(this[80] + 44))(this + 80) )
    sub_10212CE0((int)this);
  if ( *((_BYTE *)this + 225) != 1 )
  {
    (*(void (__thiscall **)(int *, int))(*this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 1;
  }
  sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  v3 = (void **)this[528];
  if ( !v3 )
    v3 = (void **)String;
  return sub_1026FAF0((int)this, (int)this, v3);
}
