int __thiscall sub_10256A60(_DWORD *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // [esp-4h] [ebp-10h]
  int v7; // [esp+8h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 924))(this);
  if ( (_BYTE)result && this[70] && this[58] )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 908))(this);
    for ( i = this[70]; i < this[58]; ++i )
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 992))(
        this,
        *(unsigned __int16 *)(this[55] + 2 * i),
        i - 1);
    --this[58];
    v4 = this[70];
    v5 = this[94];
    if ( v4 == v5 )
      this[94] = (v5 - 6) & ((v5 - 6 < 0) - 1);
    this[70] = v4 - 1;
    *((_BYTE *)this + 340) = 1;
    this[99] = 0;
    this[68] = 0;
    v6 = this[68];
    v7 = 999999;
    sub_100C2010(this + 65, v6, &v7);
    (*(void (__thiscall **)(_DWORD *))(*this + 976))(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
    return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  }
  return result;
}
