int __stdcall sub_1024AC00(int a1)
{
  int v1; // eax
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v1 = a1;
  if ( a1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
  {
    v2 = *(_DWORD *)(v1 + 12);
    if ( v2 )
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
      v4 = v3;
      if ( v3 )
      {
        v3[1001] = 1;
        if ( sub_100D87F0(v3) )
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 348))(v4, 0);
      }
    }
  }
  return sub_10189570(a1);
}
