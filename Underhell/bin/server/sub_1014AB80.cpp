int __usercall sub_1014AB80@<eax>(int a1@<ecx>, int a2@<edi>)
{
  bool v3; // zf
  const char *v4; // eax
  char *v5; // eax
  int *v6; // ebx
  int v7; // ebx
  int v8; // edx
  const char *v9; // eax
  _BYTE v11[4]; // [esp+4h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 860) == 0;
  *(float *)(a1 + 920) = *(float *)(dword_106C1D1C + 44);
  *(float *)(a1 + 924) = *(float *)(dword_106C1D64 + 44);
  *(float *)(a1 + 928) = *(float *)(dword_106C1DAC + 44);
  if ( !v3 )
  {
    v4 = *(const char **)(a1 + 860);
    if ( !v4 )
      v4 = String;
    if ( sub_104291C0(v4, "None", 4) )
    {
      v5 = *(char **)(a1 + 860);
      if ( !v5 )
        v5 = (char *)String;
      sub_10216390(a1, v5);
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 100))(a1, a2);
  v6 = (int *)(a1 + 220);
  if ( !*(_DWORD *)(a1 + 220) || (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 812) && *v6 != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
      *v6 = 1;
    }
    if ( *(_BYTE *)(a1 + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *(_BYTE *)(a1 + 225) = 0;
    }
  }
  else if ( *(_BYTE *)(a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 2;
  }
  v7 = *v6;
  if ( v7 <= 0 )
    v7 = 1;
  if ( *(_DWORD *)(a1 + 216) != v7 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 456))(a1, a1 + 216);
    *(_DWORD *)(a1 + 216) = v7;
  }
  sub_10112C00(a1 + 320, 1);
  sub_100E0970(a1, v8, 7, 0);
  *(float *)(a1 + 808) = *(float *)(a1 + 732);
  sub_100E11A0(a1, &flt_106F1CB4);
  v9 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v11);
  if ( !v9 )
    v9 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v9);
  v3 = (*(_BYTE *)(a1 + 248) & 1) == 0;
  *(_DWORD *)(a1 + 196) = sub_101499C0;
  if ( !v3 )
    *(_DWORD *)(a1 + 196) = 0;
  if ( *(_DWORD *)(a1 + 812) == 7 && *(_BYTE *)(a1 + 113) )
    sub_100EA940((int *)a1, 0x1000000);
  if ( 0.0 == *(float *)(a1 + 868) )
    *(float *)(a1 + 868) = 1.0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
}
