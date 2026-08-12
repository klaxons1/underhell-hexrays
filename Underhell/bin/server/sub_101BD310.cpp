char __thiscall sub_101BD310(int this, int *a2, int a3, _DWORD *a4, float *a5, float *a6)
{
  int v7; // ebx
  int *v8; // ecx
  int *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  unsigned __int16 v17; // ax
  int v18; // eax
  _BYTE v19[12]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v20[12]; // [esp+18h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 76))(this, a2);
  sub_10264670(this, a3);
  sub_100EAB80((_DWORD *)this, 32);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, a3);
  if ( *(_DWORD *)(this + 800) != v7 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 800);
    }
    *(_DWORD *)(this + 800) = v7;
  }
  if ( *(_DWORD *)(this + 804) != *a4 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 804);
    }
    *(_DWORD *)(this + 804) = *a4;
  }
  sub_100E0D20(this, a5);
  sub_100E0EA0(this, a6);
  sub_100E0970(this, v10, 7, 0);
  sub_10112C00(this + 320, 6);
  sub_100EBE30(this, a2[105]);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 3);
  a4[395] = this;
  v11 = sub_100E9630((float *)this, 0, 0, (int)a4);
  v12 = v11;
  if ( !v11 )
    return 0;
  v14 = *(_DWORD *)dword_106BAFF0;
  v15 = (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 292))(v11, &flt_106F1CA8, &flt_106F1CB4);
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(v14 + 92))(dword_106BAFF0, v19, v20, v15);
  sub_100D5D10((int)v19, (int)v20);
  v16 = *(_DWORD *)v12;
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 92))(v12);
  (*(void (__thiscall **)(int, int))(v16 + 88))(v12, v17 | 4);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 52))(v12, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 284))(a2) )
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 280))(v12);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 28))(v18, 1);
  }
  return 1;
}
