void __cdecl sub_10248740(int a1, float *a2, float *a3, float a4)
{
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  char *v7; // [esp-Ch] [ebp-14h]

  v4 = *(_DWORD *)(a1 + 64);
  if ( (v4 & 2) != 0 )
  {
    v5 = (int *)sub_102D9B20("SMG1");
    v6 = sub_100B9D10(v5, v7);
    sub_10248070((float *)a1, v6, a2, a3, a4);
  }
  else if ( (v4 & 0x40) != 0 )
  {
    sub_102485A0((float *)a1, a2, a3, a4);
  }
  else
  {
    sub_10248690((float *)a1, a2, a3, a4);
  }
}
