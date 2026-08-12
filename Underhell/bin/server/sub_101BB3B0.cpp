void __userpurge sub_101BB3B0(int *a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, char a6, float *a7, float *a8)
{
  int v9; // esi
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  float v13; // [esp+0h] [ebp-20h]

  if ( (*(_BYTE *)(a3 + 252) & 1) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 84))(dword_106B3CDC);
    v9 = a1[62] + 92 * sub_101B8410(a1 + 62, a1[65]);
    *(_DWORD *)v9 = a3;
    sub_101B5140((float *)(v9 + 8), a4);
    *(_DWORD *)(v9 + 4) = a5;
    *(_BYTE *)(v9 + 88) = a6;
    if ( !a5 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a5 + 40))(a5) )
      *(_BYTE *)(v9 + 88) = 0;
    if ( *(_BYTE *)(v9 + 88) )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 424) + 116))(*(_DWORD *)(a3 + 424));
      v10 = a1[70] - 1;
      if ( v10 < 0 )
      {
LABEL_10:
        v13 = a2;
        sub_101BA210(a1, a5, v13, a7, a8, 1);
      }
      else
      {
        v11 = a1[67];
        v12 = (_DWORD *)(v11 + 36 * v10 + 24);
        while ( *v12 != a5 )
        {
          v12 -= 9;
          if ( --v10 < 0 )
            goto LABEL_10;
        }
        if ( a2 > *(float *)(v11 + 36 * v10 + 28) )
          *(float *)(v11 + 36 * v10 + 28) = a2;
      }
    }
  }
}
