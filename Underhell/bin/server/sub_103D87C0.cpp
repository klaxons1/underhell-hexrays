int __thiscall sub_103D87C0(char *this)
{
  int result; // eax
  _DWORD *i; // esi
  _BYTE v4[12]; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h] BYREF

  sub_1002AD10((int)this);
  (*(void (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v4, 0, 0);
  result = sub_100AAD20(*((_DWORD **)this + 601), &v5);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    if ( sub_1023C660(i) )
    {
      if ( (i[4] & 0xFFFFF) == 0x800 )
        sub_10023CB0(this, 50);
    }
    result = sub_100AAD50(&v5);
  }
  return result;
}
