void __usercall sub_102504A0(int a1@<ecx>, float a2@<ebx>, int a3@<edi>)
{
  float *v4; // edi
  bool v5; // c0
  bool v6; // c3
  double v7; // st7
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 992) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 744))(a1, 2);
    if ( (*(_BYTE *)(a1 + 248) & 0x10) != 0 )
    {
      v8 = *(float *)(a1 + 108);
      v4 = (float *)(a1 + 944);
      *(_DWORD *)(a1 + 800) = 2;
      *(_DWORD *)(a1 + 4) = sub_1024DA20;
      sub_10246BC0((float *)a1, (float *)(a1 + 944), v8);
    }
    else
    {
      sub_10250240(a1, a2, a3);
      v5 = *(float *)(a1 + 572) > 0.0;
      v6 = 0.0 == *(float *)(a1 + 572);
      *(_DWORD *)(a1 + 4) = sub_1024DA20;
      if ( v5 || v6 )
        v7 = *(float *)(a1 + 572) - *(float *)(a1 + 564);
      else
        v7 = -1.0;
      v9 = v7;
      v4 = (float *)(a1 + 944);
      sub_1024EAD0((float *)a1, (float *)(a1 + 944), v9);
    }
    if ( *(_DWORD *)(a1 + 992) == 2 )
    {
      sub_1024FC40(a1, v4);
      *(_DWORD *)(*(_DWORD *)(a1 + 976) + 800) = 0;
    }
  }
}
