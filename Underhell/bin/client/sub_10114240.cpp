int __usercall sub_10114240@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  const char *v6; // eax
  void (__thiscall *v7)(int, _DWORD *, _DWORD *); // eax
  _DWORD v8[2]; // [esp+0h] [ebp-8h] BYREF

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, a4);
  if ( result )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10436250 + 152))(
           dword_10436250,
           *(_DWORD *)(result + 8),
           a1);
    while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) )
    {
      v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
      if ( !_stricmp(v6, "animatedfriction") )
      {
        v7 = *(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v5 + 28);
        v8[0] = &CRagdollAnimatedFriction::`vftable';
        v8[1] = a3;
        v7(v5, v8, v8);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
      }
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250);
  }
  return result;
}
