int __thiscall sub_102866D0(_DWORD *this)
{
  int result; // eax
  int (__stdcall *v3)(_DWORD, _DWORD, int, int); // edx
  int v4; // [esp+20h] [ebp-Ch] BYREF
  int v5; // [esp+24h] [ebp-8h] BYREF
  int v6; // [esp+28h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 280))(this, &v4, &v5);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 812))(this);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 228))(this, &v6);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v6);
    v3 = *(int (__stdcall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48);
    if ( *((_BYTE *)this + 207) )
    {
      result = v3(0, this[53], v4 - 1, this[54]);
      if ( this[64] )
        return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this[64] + 4))(
                 this[64],
                 0,
                 this[53],
                 v4 - 1,
                 this[54]);
    }
    else
    {
      result = v3(this[53], 0, this[54], v5);
      if ( this[64] )
        return (*(int (__thiscall **)(_DWORD, int, int, _DWORD, int))(*(_DWORD *)this[64] + 4))(
                 this[64],
                 this[53] - 1,
                 1,
                 this[54],
                 v5);
    }
  }
  return result;
}
