char __thiscall sub_1007CE80(void *this, int a2)
{
  unsigned __int16 *v3; // eax
  int v4; // eax
  _BYTE v6[512]; // [esp+4h] [ebp-200h] BYREF

  v3 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  v4 = (*(int (__thiscall **)(void *, _DWORD, _BYTE *))(*(_DWORD *)this + 96))(this, *v3, v6);
  if ( v4 == -1 )
    return 0;
  else
    return (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_10413168 + 88))(dword_10413168, v6, v4);
}
