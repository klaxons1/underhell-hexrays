int __thiscall sub_1025E9E0(_DWORD **this)
{
  int result; // eax
  int v3; // [esp+10h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-Ch] BYREF
  int v5; // [esp+18h] [ebp-8h] BYREF
  int v6; // [esp+1Ch] [ebp-4h] BYREF

  if ( this[53] )
  {
    ((void (__thiscall *)(_DWORD **, int *, int *, int *, int *))(*this)[194])(this, &v4, &v3, &v6, &v5);
    (*(void (__thiscall **)(_DWORD *, int, int))(*this[53] + 4))(this[53], v4, v3);
    (*(void (__thiscall **)(_DWORD *, int, int))(*this[53] + 16))(this[53], v6, v5);
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this[53] + 20))(this[53], this[54]);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, this[54]);
    return (*(int (__thiscall **)(_DWORD *))*this[53])(this[53]);
  }
  return result;
}
