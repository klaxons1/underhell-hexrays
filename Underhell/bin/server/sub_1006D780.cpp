int __thiscall sub_1006D780(_BYTE *this)
{
  void (__thiscall *v2)(_BYTE *, _BYTE *); // edx
  _BYTE v4[8]; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]

  if ( (this[848] & 1) != 0 )
  {
    v5 = 0;
    v7 = 0;
    v2 = *(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 728);
    v6 = -1;
    v2(this, v4);
  }
  return sub_100E20F0(this);
}
