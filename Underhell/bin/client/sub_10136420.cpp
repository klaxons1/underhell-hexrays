void __usercall sub_10136420(char *a1@<ecx>, double a2@<st0>)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  sub_101360C0(a1);
  v2 = sub_100422D0();
  v3 = v2;
  if ( v2 )
  {
    sub_10229140(&unk_1044CC68, *(_DWORD *)(v2 + 3992));
    v4 = *(_DWORD *)(dword_1044CC6C + 48);
    v9 = v4;
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 952))(v3);
    v5 = (int)a2;
    v10 = (int)a2;
    v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 984))(v3);
    if ( (int)v6 > v5 )
    {
      v5 = (int)v6;
      v10 = (int)v6;
    }
    flt_1042FB84 = 1.0;
    if ( 0.0 == flt_1042FB80 )
    {
      v7 = 0.0;
      if ( v5 != v4 )
      {
        if ( !v4 )
          v9 = 1;
        v8 = (double)v10 / (double)v9 * *(float *)(dword_104399DC + 44);
        flt_1042FB84 = v8;
        v7 = v8 * *(float *)(dword_10433B3C + 44);
      }
      flt_1042FB7C = v7;
    }
    else
    {
      flt_1042FB7C = flt_1042FB80 * *(float *)(dword_10433B3C + 44);
    }
  }
}
