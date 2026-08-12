int __thiscall sub_1012E010(_DWORD *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // esi

  v2 = a2;
  result = 2 * a2;
  v5 = this[4 * a2 + 1];
  v6 = &this[4 * a2 + 1];
  if ( v5 )
  {
    a2 = -1;
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 4))(v5, &a2);
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 4))(this, *v6, v2 | (v6[1] << 12));
    v6[1] = ((unsigned __int16)v6[1] + 1) & 0x7FFF;
    result = v6[2];
    *v6 = 0;
    if ( (_DWORD *)result != v6 )
    {
      if ( result )
        *(_DWORD *)(result + 12) = v6[3];
      else
        this[16385] = v6[3];
      result = v6[3];
      if ( result )
        *(_DWORD *)(result + 8) = v6[2];
      else
        this[16386] = v6[2];
      v6[3] = v6;
      v6[2] = v6;
    }
    if ( v2 >= 2048 )
      return sub_1012DED0(this + 16387, (int)v6);
  }
  return result;
}
