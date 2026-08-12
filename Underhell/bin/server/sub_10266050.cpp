int __thiscall sub_10266050(void *this, _DWORD *a2, int a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*a2 + 264))(a2);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this + 864))(
             this,
             *(float *)(dword_106B31C8 + 28),
             a3,
             a2[824],
             a2[825]);
  return result;
}
