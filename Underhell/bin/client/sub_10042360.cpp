int __thiscall sub_10042360(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  _BYTE v4[32]; // [esp+4h] [ebp-84h] BYREF
  int v5; // [esp+24h] [ebp-64h]

  v1 = *(_DWORD *)dword_1041315C;
  v2 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(this[2] + 36))(this + 2, v4);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v1 + 32))(dword_1041315C, v2) )
    return v5;
  else
    return -1;
}
