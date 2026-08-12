int __usercall sub_10223EB0@<eax>(int a1@<edi>, int a2)
{
  int v2; // eax
  int v3; // eax
  int i; // esi
  unsigned __int16 v5; // ax
  char *v6; // eax
  _BYTE v8[4]; // [esp+0h] [ebp-Ch] BYREF
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v2 = dword_10646CD0;
  if ( dword_10646CD0 == -1 )
  {
    v3 = CommandLine_Tier0();
    v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 40))(v3, "-makereslists") > 0;
    dword_10646CD0 = v2;
  }
  if ( v2 == 1 )
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(dword_10700A38 + 4) + 24))(dword_10700A38 + 4, a2, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_106B3210 + 28))(
         dword_106B3210,
         a2,
         v8,
         a1) )
  {
    for ( i = 0; i < v9; ++i )
    {
      v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3210 + 32))(dword_106B3210, v10, i);
      v6 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3210 + 36))(dword_106B3210, v5);
      sub_1023B8B0(v6);
    }
  }
  return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B323C + 32))(dword_106B323C, 1, a2, -1);
}
