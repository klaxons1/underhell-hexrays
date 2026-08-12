void __userpurge sub_1004BD00(int a1@<ecx>, double a2@<st0>, int a3, int a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // eax
  float *v11; // esi
  float *v12; // eax
  double v13; // st7
  float *v14; // eax
  float v15; // [esp+4h] [ebp-20h]
  _BYTE v16[12]; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+20h] [ebp-4h]

  v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 4) + 140))(a1 + 4, a3);
  if ( v17 > 0 )
  {
    v5 = sub_100F0C50(a4);
    v6 = sub_100F06D0(32, v5);
    if ( v6 )
    {
      HIBYTE(a3) = 0;
      a4 = 0;
      sub_100F0920();
      v7 = sub_100EFC00(v5);
      if ( v7 )
        v8 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v7 + 44))(
               v7,
               "$spritesize",
               (char *)&a3 + 3,
               0);
      else
        v8 = a4;
      if ( HIBYTE(a3) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 108))(v8);
      else
        a2 = 100.0;
      *(float *)(v6 + 28) = a2;
      if ( *(float *)(a1 + 2180) < (double)*(float *)(v6 + 28) )
      {
        v9 = *(float *)(v6 + 28);
        *(float *)(a1 + 2180) = *(float *)(v6 + 28);
        v15 = v9;
        sub_100EB4C0(v15);
      }
      v10 = v17;
      *(_DWORD *)(v6 + 24) = v17;
      v11 = (float *)(v6 + 12);
      (*(void (__thiscall **)(int, int, float *, _BYTE *))(*(_DWORD *)(a1 + 4) + 148))(a1 + 4, v10, v11, v16);
      if ( 1.0 != *(float *)(a1 + 2188) )
      {
        v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
        *v11 = *v11 - *v12;
        v11[1] = v11[1] - v12[1];
        v11[2] = v11[2] - v12[2];
        v13 = *(float *)(a1 + 2188);
        *v11 = *v11 * v13;
        v11[1] = v13 * v11[1];
        v11[2] = v13 * v11[2];
        v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
        *v11 = *v11 + *v14;
        v11[1] = v14[1] + v11[1];
        v11[2] = v14[2] + v11[2];
      }
    }
  }
}
