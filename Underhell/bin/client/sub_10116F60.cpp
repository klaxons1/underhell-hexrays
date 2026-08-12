int __thiscall sub_10116F60(void *this, int a2, int a3, int a4)
{
  int i; // eax
  _DWORD v6[1024]; // [esp+0h] [ebp-1000h] BYREF

  for ( i = 0; i < a4; v6[i++] = -1 )
  {
    if ( i >= 1024 )
      break;
  }
  return (*(int (__thiscall **)(void *, int, _DWORD *, int))(*(_DWORD *)this + 48))(this, a2, v6, a4);
}
