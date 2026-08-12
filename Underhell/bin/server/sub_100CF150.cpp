char __cdecl sub_100CF150(int a1)
{
  int v1; // edi
  int v2; // eax
  unsigned __int16 v3; // bx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  unsigned __int16 *v8; // esi
  int i; // ebx
  int v10; // esi
  int v12; // [esp+4h] [ebp-14h] BYREF
  int v13; // [esp+8h] [ebp-10h]
  int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v1 = 0;
  if ( a1 )
  {
    LOWORD(v2) = sub_100CB9B0((int)&dword_1060E0D0);
    v3 = v2;
    v4 = 0;
    v5 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( (unsigned __int16)v2 != 0xFFFF )
    {
      while ( 1 )
      {
        v6 = dword_1060E0D4 + 24 * v3;
        if ( *(_DWORD *)(v6 + 8) == a1 || *(_DWORD *)(v6 + 12) == a1 )
        {
          v7 = v1;
          if ( v1 + 1 > v5 )
          {
            sub_1009A780(&v12, v1 - v5 + 1);
            v1 = v15;
            v4 = v12;
          }
          v15 = ++v1;
          v16 = v4;
          if ( v1 - v7 - 1 > 0 )
          {
            memcpy((void *)(v4 + 2 * v7 + 2), (const void *)(v4 + 2 * v7), 2 * (v1 - v7 - 1));
            v4 = v12;
          }
          v8 = (unsigned __int16 *)(v4 + 2 * v7);
          if ( v8 )
            *v8 = v3;
        }
        LOWORD(v2) = sub_100CBA80(&dword_1060E0D0, v3);
        v4 = v12;
        v3 = v2;
        if ( (unsigned __int16)v2 == 0xFFFF )
          break;
        v5 = v13;
      }
    }
    for ( i = 0; i < v1; ++i )
    {
      v10 = *(unsigned __int16 *)(v4 + 2 * i);
      LOBYTE(v2) = -1;
      if ( (_WORD)v10 != 0xFFFF )
      {
        sub_100CD3D0((int)&dword_1060E0D0, *(_WORD *)(v4 + 2 * i));
        v2 = 24 * v10;
        *(_WORD *)(v2 + dword_1060E0D4) = v10;
        *(_WORD *)(v2 + dword_1060E0D4 + 2) = word_1060E0E4;
        v4 = v12;
        --word_1060E0E2;
        word_1060E0E4 = v10;
      }
    }
    if ( v14 >= 0 && v4 )
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
  }
  else
  {
    LOBYTE(v2) = sub_100CB8F0((int)&dword_1060E0D0);
  }
  return v2;
}
