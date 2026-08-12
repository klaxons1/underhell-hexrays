int __thiscall sub_102BF0C0(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  bool v5; // zf
  _DWORD v6[3]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-4h]

  v2 = a2;
  result = sub_100D83D0(this, a2);
  v7 = result;
  if ( result )
  {
    if ( !this[204] || (v5 = this[202] == 0, HIBYTE(a2) = 1, v5) )
      HIBYTE(a2) = 0;
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 60))(v2, (char *)&a2 + 3, 1);
    if ( HIBYTE(a2) )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 32))(v2, "InstancedResponseSystem");
      v6[1] = 0;
      v6[2] = 0;
      v6[0] = this + 204;
      ((void (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *, int))**off_1060A544)(off_1060A544, v6, v2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
    }
    return v7;
  }
  return result;
}
