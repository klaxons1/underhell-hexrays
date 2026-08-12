void __usercall sub_10241990(_DWORD *a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // ecx

  v3 = a1[8];
  if ( v3 > 0 )
  {
    v4 = a1[10];
    if ( v4 < 0 || v4 >= v3 )
      a1[10] = 0;
    if ( *(_DWORD *)(dword_106C5384 + 48) || (v5 = 2, v3 <= 2) )
      v5 = v3;
    do
    {
      v6 = (a1[10] + 1) % v3;
      v7 = a1[5];
      a1[10] = v6;
      sub_10240560(*(_DWORD *)(v7 + 4 * v6), (float *)v3, a2);
      --v5;
    }
    while ( v5 );
  }
}
