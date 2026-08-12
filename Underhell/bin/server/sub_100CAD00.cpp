int __cdecl sub_100CAD00(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int (__thiscall ***v6)(_DWORD, _DWORD); // eax
  int v7; // eax
  int v8; // eax

  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  if ( !a2 )
    return a3;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
  {
    v6 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(_DWORD *))(*a2 + 340))(a2);
    if ( v6 )
    {
      v7 = (**v6)(v6, 0);
      if ( v7 )
      {
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v7 + 24));
        sub_100C9EE0(a4, v8 - 1);
      }
    }
    return a3;
  }
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a2[6]);
  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  a4[(v4 - 1) >> 5] |= 1 << ((v4 - 1) & 0x1F);
  return a3;
}
