void __stdcall sub_101226E0(int a1)
{
  int *v1; // esi
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  int v5; // edi
  int v6; // edi
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]

  v1 = (int *)a1;
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 0:
      sub_101219A0(*(_DWORD *)a1, *(float *)(a1 + 16), *(float *)(a1 + 8));
      break;
    case 1:
      v2 = *(float *)(a1 + 16);
      v3 = *(_DWORD *)a1;
      v4 = *(float *)(a1 + 8);
      *(_DWORD *)(v3 + 60) |= 2u;
      v8 = v4;
      v7 = v2;
      sub_10121910((float *)v3, v7, v8);
      break;
    case 2:
      sub_10121B60(*(_DWORD *)a1);
      break;
    case 3:
      a1 = *(_DWORD *)a1;
      v5 = a1;
      sub_1012D820(&a1);
      sub_10121B60(v5);
      v6 = *v1;
      if ( *v1 )
      {
        --dword_10437918;
        sub_1011A810((int *)(v6 + 84));
        *(_DWORD *)(v6 + 76) = &IRecipientFilter::`vftable';
        sub_1022FD10(v6);
      }
      *v1 = 0;
      break;
    default:
      return;
  }
}
