int __thiscall sub_10042AD0(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // edi
  _BYTE v5[12]; // [esp+4h] [ebp-3Ch] BYREF
  _BYTE v6[12]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v7[12]; // [esp+1Ch] [ebp-24h] BYREF
  _BYTE v8[12]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+34h] [ebp-Ch] BYREF

  result = this[28] >> 10;
  if ( (this[28] & 0x400) != 0 )
  {
    if ( this[1068] )
    {
LABEL_8:
      (*(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 532))(this, v5);
      v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 536))(this);
      v9[0] = *v3;
      v9[1] = v3[1];
      v9[2] = v3[2];
      sub_101EE040(v9, v6, v7, v8);
      return (**(int (__thiscall ***)(_DWORD, _BYTE *, _BYTE *, _BYTE *, _BYTE *, int))this[1068])(
               this[1068],
               v5,
               v6,
               v7,
               v8,
               1000);
    }
    if ( sub_100DDA40(28) )
      result = sub_100E2570(this[20]);
    else
      result = 0;
    this[1068] = result;
    if ( result )
    {
      sub_100E25E0(result);
      goto LABEL_8;
    }
  }
  else
  {
    v4 = this[1068];
    if ( v4 )
    {
      sub_100E26B0(this[1068]);
      result = sub_10034930(v4);
      this[1068] = 0;
    }
  }
  return result;
}
