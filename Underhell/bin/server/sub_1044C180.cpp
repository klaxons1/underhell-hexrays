bool __cdecl sub_1044C180(int Src, int a2)
{
  int *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int i; // edi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  bool v12; // zf

  v2 = (int *)a2;
  v3 = 0;
  v4 = Src;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (*(_BYTE *)(Src + 21) & 1) != 0 )
  {
    sub_1042D6E0((_DWORD *)Src);
    if ( *(_BYTE *)(Src + 20) )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v8 = v2[3];
        v9 = v2[1];
        if ( v8 + 1 > v9 )
          sub_1044AC60(v2, v8 - v9 + 1);
        ++v2[3];
        v10 = *v2;
        v11 = v2[3] - v8 - 1;
        v12 = v2[3] - v8 == 1;
        v2[4] = *v2;
        if ( v11 >= 0 && !v12 )
          memcpy((void *)(v10 + 12 * v8 + 12), (const void *)(v10 + 12 * v8), 12 * v11);
        if ( !(unsigned __int8)sub_1044EDB0(Src, *v2 + 12 * v8) )
          break;
        sub_1042D6E0((_DWORD *)Src);
        if ( *(_BYTE *)(Src + 20) )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    sub_100878C0((_DWORD *)Src, &a2);
    v5 = a2;
    if ( a2 && (sub_1044AFA0(v2, a2), v5 > 0) )
    {
      for ( i = 0; ; i += 12 )
      {
        sub_1044B4E0(v2, v2[3]);
        if ( !(unsigned __int8)sub_1044EDB0(Src, i + *v2) )
          break;
        if ( ++v3 >= v5 )
        {
          v4 = Src;
          return *(_BYTE *)(v4 + 20) == 0;
        }
      }
      return 0;
    }
    else
    {
      return *(_BYTE *)(v4 + 20) == 0;
    }
  }
}
