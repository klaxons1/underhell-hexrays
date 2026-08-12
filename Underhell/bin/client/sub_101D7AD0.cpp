int __thiscall sub_101D7AD0(void *this, int a2, int a3, int a4)
{
  unsigned int i; // eax
  int result; // eax
  _BYTE v7[16]; // [esp+10h] [ebp-14h] BYREF

  for ( i = 0; i < 0x10; ++i )
    v7[i] = *(_BYTE *)(a2 + 4 * i + 3);
  result = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 52))(this, v7, a3);
  if ( !result )
    return (*(int (__thiscall **)(void *, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 60))(
             this,
             a2,
             a3 + 8,
             a4,
             0,
             0,
             0);
  return result;
}
