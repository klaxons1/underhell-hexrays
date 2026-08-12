unsigned int __thiscall sub_1024C720(int this, int a2, int a3)
{
  unsigned int v4; // edx
  unsigned int result; // eax
  unsigned int v6; // esi
  int *v7; // eax

  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
  result = 1 << (v4 & 0x1F);
  if ( (result & *(_DWORD *)(*(_DWORD *)(a2 + 8200) + 4 * (v4 >> 5))) == 0 )
  {
    result = sub_100DA9C0((_DWORD *)this, a2, a3);
    if ( *(_BYTE *)(this + 804) )
    {
      v6 = *(_DWORD *)(this + 800);
      if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
      {
        return (*(int (__stdcall **)(int, int))(MEMORY[0] + 88))(a2, a3);
      }
      else
      {
        v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
        return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)*v7 + 88))(*v7, a2, a3);
      }
    }
  }
  return result;
}
