int __thiscall sub_1006DBF0(_DWORD *this)
{
  int result; // eax
  int (__thiscall *v3)(_DWORD *, _BYTE *); // edx
  _BYTE v4[8]; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]

  sub_100E0780();
  result = this[212];
  if ( (result & 4) != 0 )
  {
    this[212] = result & 0xFFFFFFFB;
    v5 = 0;
    v7 = 0;
    v3 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 724);
    v6 = -1;
    result = v3(this, v4);
  }
  if ( (this[212] & 1) != 0 )
    return sub_1012D950(this + 200);
  return result;
}
