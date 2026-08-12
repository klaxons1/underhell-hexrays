int __thiscall sub_102F37D0(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, a2, 16449, 0);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
             this,
             "TLK_ENEMY_BURNING",
             0,
             0,
             0,
             0);
  return result;
}
