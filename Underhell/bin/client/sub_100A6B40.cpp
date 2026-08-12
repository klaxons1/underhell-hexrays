void __cdecl sub_100A6B40(float a1)
{
  float *v1; // esi
  int v2; // [esp+14h] [ebp-10h] BYREF
  int v3; // [esp+18h] [ebp-Ch]
  int v4; // [esp+1Ch] [ebp-8h]
  float v5; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = (float *)LODWORD(a1);
  v5 = *(float *)(LODWORD(a1) + 56) * 0.125;
  v2 = *(int *)LODWORD(a1);
  v3 = *(int *)(LODWORD(a1) + 4);
  *(float *)&v4 = *(float *)(LODWORD(a1) + 8) + 4.0;
  sub_100A65B0(v2, v3, v4, (int)&v2, &a1);
  sub_100A6930((int)&savedregs, v1, v5, &v2, COERCE_INT(1.5), a1);
}
