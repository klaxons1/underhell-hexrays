int __cdecl sub_100AC640(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = a1;
  if ( (a1 || (v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v2 = *(_DWORD *)(v1 + 12)) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  }
  else
  {
    return 0;
  }
}
