int __cdecl sub_10106410(int a1, char *SubStr)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  const char *v5; // eax
  int v6; // edi
  int *v7; // edi
  int v8; // ebx
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v2 = a1;
  v3 = 0;
  if ( a1 )
  {
    v4 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ( sub_102452B0(a1) > 0 )
    {
      do
      {
        v5 = (const char *)sub_102457E0(v15);
        if ( strstr(&v5[*(_DWORD *)v5], SubStr) )
        {
          v6 = v3;
          if ( v3 + 1 > v11 )
          {
            sub_102ABFC0(v3 - v11 + 1);
            v3 = v13;
            v4 = v10;
          }
          v13 = ++v3;
          v14 = v4;
          if ( v3 - v6 - 1 > 0 )
            memcpy((void *)(v4 + 4 * v6 + 4), (const void *)(v4 + 4 * v6), 4 * (v3 - v6 - 1));
          v7 = (int *)(v4 + 4 * v6);
          if ( v7 )
            *v7 = v15;
          v2 = a1;
        }
        ++v15;
      }
      while ( v15 < sub_102452B0(v2) );
      if ( v3 > 0 )
      {
        v8 = *(_DWORD *)(v4 + 4 * RandomInt(0, v3 - 1));
        sub_102375F0(&v10);
        return v8;
      }
    }
    sub_102375F0(&v10);
  }
  return -1;
}
