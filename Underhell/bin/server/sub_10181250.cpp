int __cdecl sub_10181250(int a1, int *a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  int v5; // esi
  char Destination[2048]; // [esp+0h] [ebp-80Ch] BYREF
  _DWORD v7[3]; // [esp+800h] [ebp-Ch] BYREF

  v2 = *a2;
  v7[0] = a1;
  v7[2] = a1;
  v7[1] = v2;
  if ( !(unsigned __int8)sub_101825E0((int)"classname", Destination) )
    Error("classname missing from entity!\n");
  v3 = sub_10264CF0();
  result = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 4))(v3, Destination);
  dword_1069727C = 0;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 28))(result);
    v5 = result;
    if ( result )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)result + 116))(result, v7);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 100))(v5);
      return sub_1025FAE0(v5);
    }
  }
  return result;
}
