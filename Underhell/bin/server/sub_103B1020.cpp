void __usercall sub_103B1020(int a1@<esi>, int a2, float *a3, float *a4)
{
  float v4; // ecx
  float v5; // edx
  _BYTE v6[20]; // [esp+0h] [ebp-60h] BYREF
  float v7; // [esp+14h] [ebp-4Ch]
  float v8; // [esp+2Ch] [ebp-34h]
  float v9[3]; // [esp+54h] [ebp-Ch] BYREF
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  v4 = *(float *)(a1 + 4);
  v5 = *(float *)(a1 + 8);
  v9[0] = *(float *)a1;
  v9[1] = v4;
  v9[2] = v5 - 1024.0;
  sub_100231A0((int)&savedregs, a1, (float *)a1, v9, a3, a4, 147467, a2, 0, (int)v6);
  if ( v8 < 1.0 )
    *(float *)(a1 + 8) = v7;
}
