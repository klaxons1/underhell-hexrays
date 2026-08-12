int __fastcall sub_100FC1A0(unsigned __int16 *a1, int a2)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  sub_100E0970((int)a1, a2, 7, 0);
  sub_10112C00(6);
  sub_101129A0(a1[178] | 4);
  v3 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)a1 + 104))(a1, v3);
  sub_100EAB80(a1, 32);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)a1 + 584))(a1);
  return (*(int (__thiscall **)(_DWORD, bool))(**((_DWORD **)a1 + 106) + 48))(
           *((_DWORD *)a1 + 106),
           *((_BYTE *)a1 + 808) == 0);
}
