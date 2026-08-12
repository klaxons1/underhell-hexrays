int __thiscall sub_10116FB0(void *this, int a2, int a3)
{
  int i; // eax
  _DWORD v5[1024]; // [esp+0h] [ebp-1000h] BYREF

  for ( i = 0; i < a3; v5[i++] = -1 )
  {
    if ( i >= 1024 )
      break;
  }
  return (*(int (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 52))(this, v5, a3);
}
