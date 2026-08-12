int __thiscall sub_1009E9B0(_DWORD *this, int a2)
{
  int *v3; // ecx
  int v4; // edx
  signed int v6; // edx
  _BYTE v7[16]; // [esp+Ch] [ebp-10h] BYREF

  v3 = (int *)this[1];
  v4 = *v3;
  if ( (v3[7] & 0xF) != 2 )
    return (*(int (__stdcall **)(int))(v4 + 12))(a2);
  if ( (int)this[2] >= 0 )
    return (*(int (__stdcall **)(int, _DWORD))(v4 + 100))(a2, this[2]);
  v6 = (*(int (**)(void))(v4 + 120))();
  if ( v6 > 0 )
    memset32(v7, a2, v6);
  return (*(int (__thiscall **)(_DWORD, _BYTE *, signed int))(*(_DWORD *)this[1] + 48))(this[1], v7, v6);
}
