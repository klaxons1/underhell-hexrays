bool __thiscall sub_1024ACC0(void *this, int a2, int a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  bool result; // al

  v3 = a3;
  result = 1;
  if ( a3 || (v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
  {
    v5 = *(_DWORD *)(v3 + 12);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
      v7 = v6;
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)
          && (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 408))(this, a2, v7) == 1 )
        {
          return 0;
        }
      }
    }
  }
  return result;
}
