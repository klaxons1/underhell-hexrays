int __cdecl sub_10213890(const char *a1)
{
  unsigned __int16 v1; // ax
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6[3]; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+1Ch] [ebp-14h]
  int v8; // [esp+20h] [ebp-10h]
  const char *v9; // [esp+24h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp-8h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  v9 = a1;
  v1 = sub_1020C610(&dword_106C1EC0, (int)&v9);
  if ( v1 != 0xFFFF )
    return *(_DWORD *)(dword_106C1EC4 + 16 * v1 + 12);
  v3 = 0;
  if ( a1 )
  {
    v11 = sub_100E8220(0, a1);
    memset(v6, 0, sizeof(v6));
    v7 = 0;
    v8 = 0;
    sub_10216470((int)v6, v11, 0.0, 0);
    v4 = v7;
    sub_10213820(&dword_106C1EB4, (int)a1, v7);
    if ( v4 > 0 )
    {
      v5 = 0;
      do
      {
        sub_10162BE0(&v10, (_BYTE *)(v5 + v6[0] + 12));
        if ( v11 > 0 )
          sub_10213890(v10);
        else
          --v4;
        ++v3;
        v5 += 1068;
      }
      while ( v3 < v4 );
    }
    sub_102375F0(v6);
    return v4;
  }
  else
  {
    Msg("Trying to precache breakable prop, but has no model name\n");
    return 0;
  }
}
