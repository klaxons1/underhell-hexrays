int __usercall sub_100E1720@<eax>(int a1@<ecx>, int *a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v5; // ebx
  int result; // eax
  int i; // edi
  void (__stdcall *v8)(int, char *, int, int *); // eax
  int v9; // eax
  void (__thiscall ***v10)(_DWORD); // ecx
  char Str[512]; // [esp+4h] [ebp-448h] BYREF
  char Destination[512]; // [esp+204h] [ebp-248h] BYREF
  int v14[4]; // [esp+404h] [ebp-48h] BYREF
  int v15; // [esp+414h] [ebp-38h]
  char v16; // [esp+419h] [ebp-33h]
  int v17; // [esp+424h] [ebp-28h]
  _BYTE v18[4]; // [esp+430h] [ebp-1Ch] BYREF
  int v19; // [esp+434h] [ebp-18h]
  int v20; // [esp+438h] [ebp-14h] BYREF
  int Src; // [esp+43Ch] [ebp-10h] BYREF
  int v22; // [esp+440h] [ebp-Ch] BYREF
  int v23; // [esp+444h] [ebp-8h]
  int v24; // [esp+448h] [ebp-4h] BYREF

  sub_104299C0(Destination, *(char **)(a1 + 52), 0x200u);
  sub_104298D0(Destination);
  (*(void (__thiscall **)(int, char *, const char *))(*(_DWORD *)dword_10700A38 + 68))(
    dword_10700A38,
    Destination,
    "MOD");
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 40))(
         dword_10700A38 + 4,
         *(_DWORD *)(a1 + 52),
         "MOD")
    && !(*(unsigned __int8 (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 44))(
          dword_10700A38 + 4,
          *(_DWORD *)(a1 + 52),
          "MOD") )
  {
    (*(void (__thiscall **)(int, _DWORD, int, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 48))(
      dword_10700A38 + 4,
      *(_DWORD *)(a1 + 52),
      1,
      "MOD");
  }
  v4 = (*(int (__thiscall **)(int, _DWORD, const char *, _DWORD))(*(_DWORD *)(dword_10700A38 + 4) + 8))(
         dword_10700A38 + 4,
         *(_DWORD *)(a1 + 52),
         "wb",
         0);
  v5 = v4;
  if ( v4 )
  {
    *(_BYTE *)(a1 + 72) &= ~8u;
    v24 = 2;
    (*(void (__thiscall **)(int, int *, int, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
      dword_10700A38 + 4,
      &v24,
      4,
      v4,
      a3);
    v24 = *(_DWORD *)(a1 + 56);
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
      dword_10700A38 + 4,
      &v24,
      4,
      v5);
    v24 = *(_DWORD *)(a1 + 64);
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
      dword_10700A38 + 4,
      &v24,
      4,
      v5);
    v20 = *(unsigned __int16 *)(a1 + 22);
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
      dword_10700A38 + 4,
      &v20,
      4,
      v5);
    sub_1042DE40(0, 0, 0);
    for ( i = (unsigned __int16)sub_100DB750(a1 + 4); i != 0xFFFF; i = (unsigned __int16)sub_100DE190(
                                                                                           (_DWORD *)(a1 + 4),
                                                                                           i) )
    {
      sub_1042DDC0(0, 0);
      v8 = *(void (__stdcall **)(int, char *, int, int *))(*(_DWORD *)dword_10700A38 + 144);
      v23 = *(_DWORD *)(a1 + 8) + 24 * (unsigned __int16)i + 8;
      v8(v23, Str, 512, a2);
      sub_1042DFE0(Str);
      v9 = *(_DWORD *)(v23 + 4);
      v19 = v9;
      if ( (v16 & 1) != 0 )
      {
        sub_1042E0C0((int)v14, "%d", v9);
      }
      else
      {
        Src = v9;
        if ( (unsigned __int8)sub_1042D470(4) )
        {
          if ( (v18[0] & 1) != 0 )
            sub_100868D0(v18, (int *)(v15 + v14[0] - v17), (char *)&Src, 1);
          else
            *(_DWORD *)(v14[0] - v17 + v15) = v19;
          v15 += 4;
          sub_1042D4C0(v14);
        }
      }
      v10 = *(void (__thiscall ****)(_DWORD))(*(_DWORD *)(a1 + 32) + 4 * *(_DWORD *)(v23 + 12));
      a2 = v14;
      (**v10)(v10);
      v22 = v15;
      (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
        dword_10700A38 + 4,
        &v22,
        4,
        v5);
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_10700A38 + 4) + 4))(
        dword_10700A38 + 4,
        v14[0],
        v22,
        v5);
    }
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10700A38 + 4) + 12))(dword_10700A38 + 4, v5);
    if ( v14[2] >= 0 )
    {
      result = v14[0];
      if ( v14[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14[0]);
    }
  }
  else
  {
    result = Warning("Unable to persist cache '%s', check file permissions\n", *(const char **)(a1 + 52));
  }
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return sub_100DE390(a1);
  return result;
}
