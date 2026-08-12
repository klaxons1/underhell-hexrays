void __fastcall sub_10136FF0(int a1, int a2)
{
  double v3; // st7
  int v4; // eax
  double v5; // st7
  bool v6; // zf
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+4h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 1004) )
  {
    sub_100FB060(a1, a2);
    v3 = 64.0;
    if ( *(float *)(a1 + 992) <= 64.0 )
      v3 = *(float *)(a1 + 992);
    v4 = *(_DWORD *)(a1 + 248);
    *(float *)(a1 + 992) = v3;
    v8 = *(float *)(a1 + 988);
    if ( (v4 & 0x200) != 0 )
    {
      sub_1005C3A0(a1, v8);
      v5 = 0.0;
    }
    else
    {
      sub_1005C3A0(a1, v8);
      v5 = *(float *)(a1 + 912);
    }
    v9 = v5;
    sub_1005C410(a1, v9);
    if ( 0.0 != *(float *)(a1 + 984) || (*(_DWORD *)(a1 + 248) & 8) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 260) == 0;
      *(_DWORD *)(a1 + 968) = 0;
      if ( v6 || (*(_BYTE *)(a1 + 248) & 1) != 0 )
      {
        sub_100EC3F0((_DWORD *)a1, (int)sub_10136C40, 0.0, 0);
        v7 = *(float *)(dword_106B31C8 + 12) + 1.0;
        sub_100EC4A0((int *)a1, v7, 0);
      }
    }
    else
    {
      sub_100EC3F0((_DWORD *)a1, (int)sub_10136460, 0.0, 0);
      sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
      v6 = *(_DWORD *)(a1 + 260) == 0;
      *(float *)(a1 + 808) = *(float *)(dword_106B31C8 + 12);
      if ( !v6 )
      {
        if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
        {
          *(_DWORD *)(a1 + 968) = 1;
        }
        else
        {
          sub_100EAB80((_DWORD *)a1, 32);
          *(_DWORD *)(a1 + 968) = 0;
          sub_100EC4A0((int *)a1, -1.0, 0);
        }
      }
    }
  }
  else
  {
    sub_100EC3F0((_DWORD *)a1, (int)sub_10246D70, 0.0, 0);
  }
}
