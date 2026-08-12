int __thiscall sub_102608F0(void *this, _DWORD *a2, int a3)
{
  _DWORD *v4; // eax
  void *v5; // edi
  _BYTE v6[12]; // [esp+8h] [ebp-1Ch] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-10h] BYREF
  void *v8; // [esp+20h] [ebp-4h]

  v8 = this;
  if ( !a2 )
    return sub_10425B80(this);
  if ( a3 )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 208))(a2);
    v5 = v4;
    if ( v4 )
    {
      if ( sub_10001430(v4) && sub_100BCCA0(v5, a3, (int)v6, (int)v7) )
        return sub_10425A30(v6, v7);
    }
  }
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  return sub_10425A30(a2 + 145, a2 + 176);
}
