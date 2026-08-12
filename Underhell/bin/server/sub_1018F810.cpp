void __thiscall sub_1018F810(int *this, int a2)
{
  int *v2; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-4h]

  v2 = this + 131;
  v5 = 4;
  do
  {
    v3 = v2[3];
    if ( v3 != -1 )
    {
      v4 = *v2;
      while ( *(_DWORD *)(v4 + 12 * v3) != a2 )
      {
        v3 = *(_DWORD *)(v4 + 12 * v3 + 8);
        if ( v3 == -1 )
          goto LABEL_8;
      }
      sub_1018ED30(v2, v3);
      *(_DWORD *)(*v2 + 12 * v3 + 8) = v2[5];
      v2[5] = v3;
    }
LABEL_8:
    v2 += 9;
    --v5;
  }
  while ( v5 );
}
