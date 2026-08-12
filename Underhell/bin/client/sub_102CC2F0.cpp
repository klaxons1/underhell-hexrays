void __cdecl sub_102CC2F0()
{
  int v0; // edi
  int *v1; // esi

  v0 = 1;
  v1 = (int *)&aAvcmotionblurm[20];
  do
  {
    v1 -= 10;
    sub_10233210(v1);
    --v0;
  }
  while ( v0 >= 0 );
}
