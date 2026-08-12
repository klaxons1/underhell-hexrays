int __cdecl sub_10264670(_DWORD *a1, char *a2)
{
  char *v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // edi
  const char *v6; // edx
  const char *v7; // ecx
  int v8; // eax
  int v9; // eax
  int result; // eax
  _DWORD *v11; // esi
  int *v12; // ecx
  const char *v13; // [esp-Ch] [ebp-30h]
  const char *v14; // [esp-8h] [ebp-2Ch]
  _BYTE v15[12]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+18h] [ebp-Ch] BYREF

  v2 = a2;
  v3 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, a2);
  v4 = a1;
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = (const char *)a1[23];
    if ( !v6 )
      v6 = String;
    v7 = (const char *)a1[65];
    if ( !v7 )
      v7 = String;
    v14 = v6;
    v13 = v7;
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
    Error("%i/%s - %s:  UTIL_SetModel:  not precached: %s\n", v8, v13, v14, v2);
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, v5);
  v4[115] = *sub_10162BE0(&a1, v2);
  sub_100D8500(v4);
  v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v5);
  if ( v9 )
  {
    (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F0 + 24))(dword_106B31F0, v9, v15, v16);
    sub_1025F300(v4, (int)v15, (int)v16);
  }
  else
  {
    sub_1025F300(v4, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  }
  result = (*(int (__thiscall **)(_DWORD *))(*v4 + 208))(v4);
  if ( result )
  {
    v11 = (_DWORD *)(result + 832);
    if ( *(_DWORD *)(result + 832) )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v11 = 0;
      }
      else
      {
        v12 = *(int **)(result + 24);
        if ( v12 )
          result = sub_100194B0(v12, 832);
        *v11 = 0;
      }
    }
  }
  return result;
}
