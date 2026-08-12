bool __userpurge sub_100CCFD0@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int *v3; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int (__thiscall *v8)(int, int, int, _DWORD, const char *); // edx
  int v9; // edi
  unsigned __int8 (__thiscall *v10)(int *); // edx
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = (int *)a3;
  v5 = sub_100D0CC0(a3);
  if ( !sub_100CF740(*(_DWORD *)(v5 + 440)) )
    return 0;
  a3 = (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1272))(v3) ? v3[300] : v3[294];
  v6 = (*(unsigned __int8 (__thiscall **)(int *, int))(*v3 + 1276))(v3, a2) ? v3[301] : v3[295];
  v7 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)a1 + 928))(a1, a3, v3[298], 0);
  v8 = *(int (__thiscall **)(int, int, int, _DWORD, const char *))(*(_DWORD *)a1 + 928);
  a3 = v7;
  v9 = v8(a1, v6, v3[299], 0, "BaseCombatCharacter.AmmoPickup");
  v10 = *(unsigned __int8 (__thiscall **)(int *))(*v3 + 1272);
  v12 = v9;
  if ( v10(v3) )
    sub_100CBD20(v3 + 300, &a3);
  else
    v3[294] -= a3;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1276))(v3) )
    sub_100CBD70(v3 + 301, &v12);
  else
    v3[295] -= v9;
  return a3 > 0 || v9 > 0;
}
