int __thiscall sub_1026B990(int this, int a2)
{
  int v2; // edx
  int result; // eax
  float *v4; // esi
  __int16 v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v2 = *(_DWORD *)(this + 160) - 1;
  if ( v2 >= 0 )
  {
    result = 2 * v2;
    v4 = (float *)(*(_DWORD *)(this + 148) + 16 * v2 + 4);
    while ( 1 )
    {
      v6 = *v4;
      v7 = v6 < *(float *)(this + 392);
      v8 = 0;
      v9 = v6 == *(float *)(this + 392);
      LOWORD(result) = v5;
      if ( v6 < *(float *)(this + 392) )
        break;
      v4 -= 4;
      if ( --v2 < 0 )
        goto LABEL_7;
    }
    *(_DWORD *)(this + 388) = v2;
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 13) )
    *(_DWORD *)(this + 388) = 0;
  return result;
}
