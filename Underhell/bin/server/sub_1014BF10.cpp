int __usercall sub_1014BF10@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int *v3; // ecx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int *v13; // ecx
  int v14; // [esp+Ch] [ebp-8h] BYREF
  char v15; // [esp+13h] [ebp-1h] BYREF

  sub_1014AB80(a1, a2);
  sub_100EBE30(a1, 6);
  if ( *(_BYTE *)(a1 + 1016) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(a1 + 24);
      if ( v3 )
        sub_100194B0(v3, 1016);
    }
    *(_BYTE *)(a1 + 1016) = 0;
  }
  v4 = *(_DWORD *)(a1 + 2104);
  if ( v4 == 1 )
  {
    Warning("Rejecting func_breakablesurf.  Has multiple faces that aren't NODRAW.\n");
  }
  else
  {
    if ( v4 != 2 )
      goto LABEL_12;
    Warning("Rejecting func_breakablesurf.  Drawn face isn't a quad.\n");
  }
  sub_1025FAC0(a1);
LABEL_12:
  v5 = *(_DWORD *)dword_106B31F0;
  v6 = sub_100D7240((void *)a1);
  if ( (*(int (__thiscall **)(int, int))(v5 + 60))(dword_106B31F0, v6) != 1 )
  {
    Warning("Encountered func_breakablesurf that has a material applied to more than one surface!\n");
    sub_1025FAC0(a1);
  }
  v7 = *(_DWORD *)dword_106B31F0;
  v8 = sub_100D7240((void *)a1);
  (*(void (__thiscall **)(int, int, int, int *))(v7 + 64))(dword_106B31F0, v8, 1, &v14);
  result = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v14 + 44))(
             v14,
             "$crackmaterial",
             &v15,
             0);
  if ( v15 )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result);
    result = sub_10154360(v10);
  }
  v11 = 0;
  v12 = a1 + 2108;
  do
  {
    if ( *(_BYTE *)(v12 + v11) != 1 )
    {
      result = v12 - 2108;
      if ( *(_BYTE *)(v12 - 2024) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(result + 24);
        if ( v13 )
          result = sub_100194B0(v13, v11 + 2108);
      }
      *(_BYTE *)(v12 + v11) = 1;
    }
    ++v11;
  }
  while ( v11 < 256 );
  return result;
}
