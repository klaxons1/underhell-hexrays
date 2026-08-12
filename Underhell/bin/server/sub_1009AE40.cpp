void __userpurge sub_1009AE40(int a1@<ecx>, int a2@<edi>, _DWORD *a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  const char *v8; // edi
  const char *v9; // eax
  const char *v10; // [esp-Ch] [ebp-18h]
  double v11; // [esp-8h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp+10h]

  v5 = a3[3];
  v6 = 0;
  if ( v5 > 0 )
  {
    v13 = a5 + 1;
    HIDWORD(v11) = a2;
    do
    {
      v7 = *a3 + 8 * v6;
      v8 = "-> ";
      if ( v6 != a4 )
        v8 = "   ";
      LODWORD(v11) = *(unsigned __int16 *)(v7 + 4);
      v10 = *(const char **)v7;
      v9 = sub_10065150(*(_BYTE *)(v7 + 7) & 0x3F);
      sub_1009A510(a1, v13, "%s%20s : %40s %5.3f\n", v8, v9, v10, v11);
      ++v6;
    }
    while ( v6 < v5 );
  }
}
