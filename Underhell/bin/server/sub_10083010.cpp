char __thiscall sub_10083010(_DWORD **this, _DWORD *a2)
{
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  float *v6; // eax
  double v7; // st6
  double v8; // st7
  double v9; // st5
  char v10; // cl
  double v11; // st7
  int v12; // eax
  float v14; // [esp+0h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-4h]

  v3 = *this[9];
  v4 = (float *)this[1];
  v5 = *(float *)v3 - v4[179];
  v6 = v4 + 179;
  v7 = *(float *)(v3 + 4) - v6[1];
  if ( this[3] )
  {
    v9 = v7 * v7;
    v7 = *(float *)(v3 + 8) - v6[2];
    v8 = v5 * v5 + v9;
  }
  else
  {
    v8 = v5 * v5;
  }
  v14 = v8 + v7 * v7;
  v15 = off_10689708(v14);
  v10 = sub_100A61C0(this[9]);
  if ( *(_DWORD *)(dword_106BA5C4 + 48) )
    v11 = 0.25;
  else
    v11 = 0.0625;
  if ( v15 > v11 )
    return 0;
  if ( byte_1069343C )
  {
    v12 = *(_DWORD *)(v3 + 40);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 36) != *(_DWORD *)(v3 + 36) && v15 >= 0.001 )
        return 0;
    }
  }
  if ( v10 )
  {
    ((void (__thiscall *)(_DWORD **))(*this)[12])(this);
    *a2 = 0;
  }
  else
  {
    sub_100820C0((int)this);
    *a2 = 1;
  }
  return 1;
}
