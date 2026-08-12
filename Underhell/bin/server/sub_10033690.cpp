int __userpurge sub_10033690@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  int *v10; // ecx
  int v11; // eax
  const char *v13; // [esp-8h] [ebp-30h]
  const char *v14; // [esp-4h] [ebp-2Ch]
  const char *v15; // [esp+0h] [ebp-28h]
  const char *v16; // [esp+4h] [ebp-24h]
  const char *v17; // [esp+8h] [ebp-20h]
  float v18; // [esp+8h] [ebp-20h]
  _BYTE v19[12]; // [esp+18h] [ebp-10h] BYREF
  const char *v20; // [esp+24h] [ebp-4h]

  *(_DWORD *)(a1 + 2376) = a5;
  if ( *(_DWORD *)(dword_10695FE4 + 48) && (*(_DWORD *)(a1 + 236) & 0x1000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 908);
    v8 = *(_DWORD *)(a1 + 2372);
    v20 = *(const char **)(a1 + 92);
    if ( !v20 )
      v20 = String;
    v17 = sub_10008F90(a6);
    v16 = sub_10008F90(a5);
    v15 = (const char *)sub_100BE1F0(a4);
    v14 = sub_10008F90(a3);
    v13 = (const char *)sub_100BE1F0(v7);
    v9 = sub_10008F90(v8);
    DevMsg("SetActivityAndSequence : %s: %s:%s -> %s:%s / %s:%s\n", v20, v9, v13, v14, v15, v16, v17);
  }
  if ( a4 <= -1 )
  {
    sub_100C3330(0);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 908) != a4 || !*(_BYTE *)(a1 + 897))
      && (!(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1420))(a1, *(_DWORD *)(a1 + 2372))
       || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 1420))(a1, a3)) )
    {
      a2 = 0.0;
      if ( *(_DWORD *)(a1 + 904) != COERCE_INT(0.0) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v10 = *(int **)(a1 + 24);
          if ( v10 )
            sub_100194B0(v10, 904);
        }
        a2 = 0.0;
        *(float *)(a1 + 904) = 0.0;
      }
    }
    sub_100C3330(a4);
    sub_10019B30((_DWORD *)a1, a4);
    v18 = a2;
    sub_100C8CD0(a6, v18);
  }
  v11 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a1 + 1796))(a1, v19, *(_DWORD *)(a1 + 2376));
  sub_100DC4E0(v11);
  if ( *(_DWORD *)(a1 + 2372) != a3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1424))(a1, a3);
  *(_DWORD *)(a1 + 2372) = a3;
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 2604) + 80))(*(_DWORD *)(a1 + 2604));
}
