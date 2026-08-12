char __thiscall sub_10080560(void *this, int a2, int a3)
{
  int *v5; // eax

  if ( (unsigned __int8)ThreadInMainThread() )
  {
    sub_10080420((int)this - 8, a2, *(unsigned __int16 *)(a3 + 4));
  }
  else
  {
    v5 = (int *)sub_100DDA40(8);
    *v5 = a2;
    v5[1] = *(_DWORD *)a3;
    *(_DWORD *)a3 = v5;
  }
  return 1;
}
