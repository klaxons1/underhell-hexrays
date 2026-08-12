int __thiscall sub_10132F20(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // ebx

  result = this[14413];
  v4 = result - this[14414] + 1;
  if ( v4 <= result )
  {
    do
    {
      v5 = a3 + 12 * (v4 & 0x3FF);
      *(float *)v5 = ((double (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)a2 + 88))(a2, 0, v4);
      *(_BYTE *)(v5 + 8) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 68))(a2, 0, v4);
      result = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)a2 + 76))(a2, 0, v4++, 13);
      *(_DWORD *)(v5 + 4) = result;
    }
    while ( v4 <= this[14413] );
  }
  return result;
}
