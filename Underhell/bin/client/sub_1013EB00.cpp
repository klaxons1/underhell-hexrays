int __usercall sub_1013EB00@<eax>(int a1@<esi>, float a2, float a3, float a4)
{
  int result; // eax
  double v5; // st7
  double v6; // st5
  double v7; // st7
  double v8; // st3
  double v9; // st5
  double v10; // st7
  double v11; // st3
  double v12; // st7
  double v13; // st5
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]
  float v17; // [esp+18h] [ebp+8h]

  result = LODWORD(a2) & 0x7F800000;
  if ( (LODWORD(a2) & 0x7F800000) != 0x7F800000 )
  {
    v16 = *(float *)(dword_1043B754 + 44);
    if ( *(_DWORD *)(dword_1043B1B4 + 48) == 1 )
    {
      v5 = 1.0;
      v16 = 1.0;
LABEL_6:
      v14 = v5;
      sub_10229120(v14);
      return (*(int (__thiscall **)(int, float, float))(*(_DWORD *)a1 + 596))(
               a1,
               COERCE_FLOAT(LODWORD(v16)),
               COERCE_FLOAT(LODWORD(v16)));
    }
    if ( *(float *)(dword_1043B754 + 44) > 0.0 )
    {
      v5 = *(float *)(dword_1043B754 + 44);
      goto LABEL_6;
    }
    sub_10229120(a2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 600))(a1, LODWORD(a2));
    result = dword_1043A88C;
    if ( (unsigned int)dword_1043A88C >= 0xA )
    {
      flt_103E7C78 = flt_103E7C7C;
      flt_103E7C7C = flt_103E7C80;
      flt_103E7C80 = flt_103E7C84;
      flt_103E7C84 = flt_103E7C88;
      flt_103E7C88 = flt_103E7C8C;
      flt_103E7C8C = flt_103E7C90;
      flt_103E7C90 = flt_103E7C94;
      flt_103E7C94 = flt_103E7C98;
      flt_103E7C98 = flt_103E7C9C;
      flt_103E7C9C = a2;
    }
    else
    {
      result = dword_1043A88C + 1;
      *(float *)&aAvclightmapdeb[4 * result + 24] = a2;
      dword_1043A88C = result;
    }
    if ( result == 10 )
    {
      v6 = (double)5 * 0.2;
      v7 = v6 * flt_103E7C78;
      v8 = (double)4 * 0.2;
      v9 = v6 + v8;
      v10 = v7 + v8 * flt_103E7C7C;
      v11 = (double)3 * 0.2;
      v12 = (v10
           + v11 * flt_103E7C80
           + (double)2 * 0.2 * flt_103E7C84
           + (double)1 * 0.2 * flt_103E7C88
           + (double)0 * 0.2 * flt_103E7C8C
           + (double)1 * 0.2 * flt_103E7C90
           + (double)2 * 0.2 * flt_103E7C94
           + v11 * flt_103E7C98
           + 0.2 * (double)4 * flt_103E7C9C)
          * (1.0
           / (v9
            + v11
            + (double)2 * 0.2
            + (double)1 * 0.2
            + (double)0 * 0.2
            + (double)1 * 0.2
            + (double)2 * 0.2
            + v11
            + 0.2 * (double)4));
      v17 = v12;
      if ( a3 <= v12 )
        v13 = v12;
      else
        v13 = a3;
      if ( a4 >= v13 )
      {
        if ( a3 > v12 )
        {
          v12 = a3;
          v17 = a3;
        }
      }
      else
      {
        v12 = a4;
        v17 = a4;
      }
      v15 = v12;
      (*(void (__thiscall **)(int, _DWORD, float))(*(_DWORD *)a1 + 600))(a1, LODWORD(v15), COERCE_FLOAT(LODWORD(v16)));
      return sub_10229120(v17);
    }
  }
  return result;
}
