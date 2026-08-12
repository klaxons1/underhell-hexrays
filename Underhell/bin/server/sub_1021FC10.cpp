int __thiscall sub_1021FC10(_DWORD *this, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *v5; // eax
  char *v6; // ebx
  int v7; // ecx
  int v8; // edx

  v5 = (_DWORD *)this[6];
  if ( v5 )
    v6 = (char *)v5[1];
  else
    v6 = 0;
  if ( !v5 || v5[3] == v5[2] )
    goto LABEL_10;
  v7 = v5[2];
  v8 = v5[3] - v7;
  if ( !v8 )
    goto LABEL_9;
  if ( a5 > v8 )
  {
    v5[2] = v5[3];
LABEL_9:
    Warning("Restore underflow!\n");
    goto LABEL_10;
  }
  v5[1] += a5;
  v5[2] = a5 + v7;
LABEL_10:
  if ( *v6 )
    *a3 = sub_1021E760(a2, v6);
  else
    *a3 = 0;
  return 0;
}
