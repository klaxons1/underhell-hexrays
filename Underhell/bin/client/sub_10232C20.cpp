bool __thiscall sub_10232C20(int this, unsigned __int8 *Src, int a3)
{
  unsigned __int8 *v3; // ebx
  int v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int *v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // [esp+Ch] [ebp-14h]
  unsigned int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  unsigned int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  char *Srca; // [esp+28h] [ebp+8h]
  char *Srcb; // [esp+28h] [ebp+8h]
  char v20; // [esp+2Ch] [ebp+Ch]

  v3 = Src;
  v5 = a3;
  if ( a3 + *(_DWORD *)(this + 12) <= *(_DWORD *)(this + 8) )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
    {
      do
      {
        if ( v5 < 8 )
          break;
        sub_1012A1E0((_DWORD *)this, *v3++, 8, 0);
        v5 -= 8;
      }
      while ( ((unsigned __int8)v3 & 3) != 0 );
    }
    if ( v5 >= 32 )
    {
      v7 = *(_DWORD *)(this + 12);
      if ( (v7 & 7) == 0 )
      {
        memcpy_0((void *)(*(_DWORD *)this + (v7 >> 3)), v3, v5 >> 3);
        v8 = 8 * (v5 >> 3);
        v3 += v5 >> 3;
        v5 -= v8;
        *(_DWORD *)(this + 12) += v8;
      }
      if ( v5 >= 32 )
      {
        v9 = *(_DWORD *)(this + 12) & 0x1F;
        v16 = 32 - v9;
        v17 = dword_1047B8B8[33 * v9];
        v15 = dword_1047B838[v9];
        v10 = (int *)(*(_DWORD *)this + 4 * (*(int *)(this + 12) >> 5));
        Srca = (char *)((unsigned int)v5 >> 5);
        v20 = v9;
        v13 = -32 * ((unsigned int)v5 >> 5) + v5;
        while ( 1 )
        {
          v11 = v17 & *v10;
          v14 = *(_DWORD *)v3;
          v12 = *(_DWORD *)v3 << v9;
          v3 += 4;
          *v10++ = v12 | v11;
          if ( v16 < 0x20 )
            *v10 = (v14 >> v16) | v15 & *v10;
          *(_DWORD *)(this + 12) += 32;
          if ( !--Srca )
            break;
          LOBYTE(v9) = v20;
        }
        v5 = v13;
      }
    }
    if ( v5 >= 8 )
    {
      Srcb = (char *)((unsigned int)v5 >> 3);
      v5 -= 8 * ((unsigned int)v5 >> 3);
      do
      {
        sub_1012A1E0((_DWORD *)this, *v3++, 8, 0);
        --Srcb;
      }
      while ( Srcb );
    }
    if ( v5 )
      sub_1012A1E0((_DWORD *)this, *v3, v5, 0);
    return *(_BYTE *)(this + 16) == 0;
  }
  else
  {
    *(_BYTE *)(this + 16) = 1;
    return 0;
  }
}
