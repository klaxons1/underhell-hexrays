int __thiscall sub_10237440(_DWORD **this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v7; // edx
  int v8; // eax
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  int v13; // [esp+20h] [ebp-4h] BYREF
  int (__thiscall **retaddr)(_DWORD, _DWORD); // [esp+24h] [ebp+0h]

  v3 = a2;
  v4 = dword_1047CA70;
  v5 = a3;
  v7 = *this;
  v12 = *(_DWORD *)dword_1047CA70;
  v8 = ((int (__thiscall *)(_DWORD **, _DWORD *, _DWORD *))*v7)(this, a2, a3);
  result = retaddr[5](v4, v8);
  if ( this[19] )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD **, int *, _DWORD **, int *))(*this[19] + 16))(
      this[19],
      &a2,
      &v13,
      &a3,
      &v12);
    v10 = v12;
    v11 = v13;
    *v3 -= (char *)a2 + (_DWORD)a3;
    result = v10 + v11;
    *v5 -= result;
  }
  return result;
}
