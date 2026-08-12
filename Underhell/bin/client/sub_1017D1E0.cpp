int __thiscall sub_1017D1E0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 2870) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 48))(this, 0);
    sub_101F5BD0(1, a2);
    sub_102361D0(&v6, &v5);
    v8 = v6 / 2;
    v7 = v5 / 2;
    sub_10236F10(&v8, &v7);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 24))(dword_1047CA68, v8, v7);
    result = v8;
    v4 = v7;
    this[65] = v8;
    this[66] = v4;
    *((_BYTE *)this + 2869) = 1;
  }
  return result;
}
