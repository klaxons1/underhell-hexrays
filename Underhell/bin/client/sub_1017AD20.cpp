char __usercall sub_1017AD20@<al>(int a1@<esi>, float *a2, int *a3)
{
  float *v3; // eax
  _BYTE v5[44]; // [esp+0h] [ebp-70h] BYREF
  float v6; // [esp+2Ch] [ebp-44h]
  float v7[6]; // [esp+54h] [ebp-1Ch] BYREF
  __int16 v8; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  if ( a3 )
  {
    v7[0] = *a2;
    v7[1] = a2[1];
    v8 = 1;
    v7[2] = a2[2];
    v7[3] = 2.0;
    v7[4] = 1.0;
    v7[5] = 0.0625;
    if ( sub_1005BF10(v7, a3) > 0.0 )
      return 0;
  }
  else
  {
    v3 = sub_101356D0();
    sub_1000FCE0((int)&savedregs, a1, a2, v3, 16513, 0, 0, (int)v5);
    if ( v6 >= 1.0 )
      return 0;
  }
  return 1;
}
