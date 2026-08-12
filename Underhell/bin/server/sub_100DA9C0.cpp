unsigned int __thiscall sub_100DA9C0(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  int v7; // edx
  int v8; // eax

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  v4 = result;
  v5 = 1 << (result & 0x1F);
  if ( (v5 & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (result >> 5))) == 0 )
  {
    result = sub_10235750();
    v6 = 4 * (v4 >> 5);
    *(_DWORD *)(*(_DWORD *)(a2 + 8200) + v6) |= v5;
    v7 = *(_DWORD *)(a2 + 8204);
    if ( v7 )
    {
      if ( !(_BYTE)a3 && !result )
        return sub_102357B0(this + 3);
      *(_DWORD *)(v7 + v6) |= v5;
    }
    if ( result )
    {
      v8 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 28))(result);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 88))(v8, a2, a3);
    }
  }
  return result;
}
