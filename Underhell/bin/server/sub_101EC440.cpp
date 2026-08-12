bool __userpurge sub_101EC440@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  bool result; // al
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  float *v14; // eax
  double v15; // st7
  void (__thiscall *v16)(int); // eax
  float v17[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v18[3]; // [esp+38h] [ebp-Ch] BYREF
  int v19; // [esp+4Ch] [ebp+8h]
  float v20; // [esp+50h] [ebp+Ch]
  float v21; // [esp+50h] [ebp+Ch]

  result = sub_101E28C0((_DWORD *)a1, a3, a4);
  if ( result )
  {
    v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 32))(a3, a2);
    if ( *(_BYTE *)(a1 + 2122) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(a1 + 24);
        if ( v7 )
          sub_100194B0(v7, 2122);
      }
      *(_BYTE *)(a1 + 2122) = 0;
      sub_101E9580((void *)a1, COERCE_INT(*(float *)(a1 + 2128)), 0, 0, 0);
    }
    v8 = *(_DWORD *)(a1 + 4028);
    if ( v8 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] == v8 >> 12 )
    {
      v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
      if ( v9 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 860))(v9, 32);
    }
    v10 = a4;
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a3 + 12))(a3, a4) )
    {
      v11 = sub_100CF460((_DWORD *)a1);
      if ( v11 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 996))(v11, 0);
      v12 = *(_DWORD *)(a1 + 2252) | 0x400;
      if ( *(_DWORD *)(a1 + 2252) != v12 )
      {
        (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2252);
        *(_DWORD *)(a1 + 2252) = v12;
      }
      v10 = a4;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a3 + 40))(a3, v10) )
      sub_100EAB80((_DWORD *)a1, 32);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 36))(a3, v10, a1);
    sub_100F7AD0((float *)a1, 0.0);
    sub_100DD660(a1, &flt_106F1CA8);
    sub_100E0970(a1, v13, 8, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 140))(off_10627F88, a1);
    (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)a3 + 64))(a3, v10, v18, v17);
    sub_100E0D20(a1, v18);
    sub_100E0EA0(a1, v17);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 140))(a1, v19, -1);
    sub_100EBE30(a1, 10);
    sub_100EA9A0((int *)a1, 2);
    v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    sub_100DC4E0((float *)a1, v14);
    if ( *(_BYTE *)(a1 + 2272) )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2272);
      *(_BYTE *)(a1 + 2272) = 0;
    }
    if ( *(_BYTE *)(a1 + 2273) )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2273);
      *(_BYTE *)(a1 + 2273) = 0;
    }
    v15 = 0.0;
    if ( *(_DWORD *)(a1 + 2276) != COERCE_INT(0.0) )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2276);
      v15 = 0.0;
      *(float *)(a1 + 2276) = 0.0;
    }
    v20 = v15;
    if ( *(_DWORD *)(a1 + 2280) != LODWORD(v20) )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2280);
      v15 = 0.0;
      *(float *)(a1 + 2280) = 0.0;
    }
    v21 = v15;
    if ( *(_DWORD *)(a1 + 2284) != LODWORD(v21) )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2284);
      *(float *)(a1 + 2284) = 0.0;
    }
    if ( *(_BYTE *)(a1 + 4184) )
      *(_BYTE *)(a1 + 4184) = 0;
    sub_101E7B10((unsigned int *)(a1 + 3420), v19);
    ((void (__thiscall *)(int (__stdcall ***)(int, int), int))(*off_1061BE1C)[2])(off_1061BE1C, a1);
    v16 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 1416);
    *(_DWORD *)(a1 + 3424) = 0;
    v16(a1);
    return 1;
  }
  return result;
}
