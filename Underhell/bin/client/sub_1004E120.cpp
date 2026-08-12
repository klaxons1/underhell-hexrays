int __thiscall sub_1004E120(int this, int a2)
{
  int v3; // esi
  char v4; // cl
  double v5; // st7
  double v6; // st7
  float v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1296) )
    return sub_10123B40(a2);
  v3 = sub_101422C0();
  v8 = *((float *)sub_10034A00((char *)(this - 4)) + 2) - *(float *)(v3 + 8);
  off_103EDFEC();
  v4 = -1;
  v5 = v8;
  if ( v8 < -0.75 )
  {
    v4 = 0;
    goto LABEL_11;
  }
  if ( v5 < -0.64999998 )
  {
    v6 = (v5 + 0.64999998) * -10.0;
LABEL_6:
    v4 = -1 - (int)(v6 * 255.0);
    goto LABEL_11;
  }
  if ( v5 <= 0.85000002 )
  {
    if ( v5 > 0.75 )
    {
      v6 = (v5 - 0.75) * 10.0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_11:
  LOBYTE(v9) = v4;
  BYTE1(v9) = v4;
  BYTE2(v9) = v4;
  HIBYTE(v9) = HIBYTE(*(_DWORD *)(this + 84));
  if ( *(_DWORD *)(this + 84) != v9 )
    *(_DWORD *)(this + 84) = v9;
  return sub_10123B40(a2);
}
