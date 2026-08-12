bool __thiscall sub_1039E530(void *this, int a2)
{
  int (__thiscall ***v3)(_DWORD, _DWORD); // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  bool result; // al

  v3 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 340))(a2);
  result = 0;
  if ( v3 )
  {
    v4 = (**v3)(v3, 0);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        v6 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, v5);
        if ( v6 == 1 || v6 == 2 )
          return 1;
      }
    }
  }
  return result;
}
