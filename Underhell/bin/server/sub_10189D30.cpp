void __thiscall sub_10189D30(float *this)
{
  double v2; // st7
  int *v3; // eax
  int *v4; // eax
  double v5; // st7
  bool v6; // c0
  bool v7; // c3
  int *v8; // eax
  int i; // esi
  int v10; // eax
  float v11; // [esp+4h] [ebp-4h]

  if ( !byte_106B4F38 )
  {
    byte_106B4F38 = 1;
    v2 = (double)*(int *)(dword_106B775C + 48);
    v11 = v2;
    if ( *(_DWORD *)(dword_106B77EC + 48) )
    {
      v3 = sub_1016BF40();
      if ( (*(unsigned __int8 (__thiscall **)(int *))(v3[3] + 4))(v3 + 3) )
      {
        v4 = sub_1016BF40();
        v5 = ((double (__thiscall *)(int *))*(_DWORD *)(v4[3] + 28))(v4 + 3);
        v6 = v11 < v5;
        v7 = v11 == v5;
        v2 = v11;
        if ( v6 || v7 )
        {
          v8 = sub_1016BF40();
          (*(void (__thiscall **)(int *))(v8[3] + 28))(v8 + 3);
        }
      }
      else
      {
        v2 = v11;
      }
    }
    this[8] = v2 + *(float *)(dword_106B31C8 + 12);
    for ( i = 1; i <= 17; ++i )
    {
      v10 = sub_1025FB50(i);
      if ( v10 )
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)v10 + 1176))(v10, "scores", 1, 0);
    }
  }
}
