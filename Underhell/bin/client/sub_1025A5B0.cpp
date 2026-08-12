int __thiscall sub_1025A5B0(void *this, int a2)
{
  int result; // eax
  int (__thiscall *v4)(void *, _DWORD, _DWORD); // edx
  int v5; // [esp-8h] [ebp-Ch]

  result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 53) + 128))(*((_DWORD *)this + 53));
  if ( (_BYTE)result != (_BYTE)a2 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 53) + 124))(*((_DWORD *)this + 53), a2);
    *((_DWORD *)this + 64) = 0;
    v5 = *((_DWORD *)this + 64);
    a2 = 999999;
    sub_100C2010((int *)this + 61, v5, &a2);
    v4 = *(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 244);
    *((_DWORD *)this + 72) = 0;
    *((_BYTE *)this + 284) = 1;
    return v4(this, 0, 0);
  }
  return result;
}
