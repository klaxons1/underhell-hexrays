int __cdecl sub_100D60A0(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a1);
  if ( (v1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v2 = *(_DWORD *)(v1 + 12)) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  }
  else
  {
    return 0;
  }
}
