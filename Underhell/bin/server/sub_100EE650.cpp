char __thiscall sub_100EE650(_BYTE *this, int a2, int a3, Concurrency::details::SchedulingRing *a4)
{
  double v7; // st7
  double v8; // st7
  char v9; // al
  double v10; // st7
  double v11; // st7
  double v12; // st6
  int v13; // eax
  float v15; // [esp+0h] [ebp-10h]
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+0h] [ebp-10h]
  float v18; // [esp+0h] [ebp-10h]
  float v19; // [esp+18h] [ebp+8h]
  int v20; // [esp+18h] [ebp+8h]
  float v21; // [esp+20h] [ebp+10h]

  if ( a2 && a4 && a3 )
  {
    if ( *(_DWORD *)(a2 + 16) == -2 )
      sub_100ED860(this, a2, a3, *(float *)&a4, *(float *)(a2 + 8));
    if ( *(int *)(a2 + 16) < 0 )
      return 1;
    v21 = ((double (__thiscall *)(Concurrency::details::SchedulingRing *))**(_DWORD **)a4)(a4);
    v19 = sub_1041CA40(a3);
    v7 = (v19 - sub_10418510(a4)) / v21;
    v15 = v7;
    sub_10419460(v15);
    v16 = v7;
    sub_100C6260(this, *(_DWORD *)(a2 + 16), v16);
    v8 = sub_1041CA40(a3);
    v17 = v8;
    sub_1041A260((int)a4, v17);
    *(float *)&v20 = v8;
    if ( *(_BYTE *)(a2 + 28) )
    {
LABEL_14:
      v18 = (*(float *)(a2 + 32) * 3.0 * *(float *)(a2 + 32)
           - (*(float *)(a2 + 32) + *(float *)(a2 + 32)) * *(float *)(a2 + 32) * *(float *)(a2 + 32))
          * *(float *)&v20;
      sub_100C6460(this, *(_DWORD *)(a2 + 16), v18);
      if ( this[1612] )
      {
        v13 = sub_100ED810(this, a3);
        sub_100C60B0(this, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20) + v13);
      }
      return 1;
    }
    v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 296))(this);
    v10 = *(float *)(a2 + 32);
    if ( v9 )
    {
      v11 = v10 - 0.2;
      v12 = 0.0;
      if ( v11 > 0.0 )
        goto LABEL_13;
    }
    else
    {
      v11 = v10 + 0.2;
      v12 = 1.0;
      if ( v11 < 1.0 )
      {
LABEL_13:
        *(float *)(a2 + 32) = v11;
        goto LABEL_14;
      }
    }
    v11 = v12;
    goto LABEL_13;
  }
  return 0;
}
