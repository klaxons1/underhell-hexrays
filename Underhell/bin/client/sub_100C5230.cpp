char __thiscall sub_100C5230(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  float *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  float *v15; // edi
  float v17; // [esp+0h] [ebp-222Ch]
  wchar_t String1[4096]; // [esp+1Ch] [ebp-2210h] BYREF
  char v19[512]; // [esp+201Ch] [ebp-210h] BYREF
  int v20; // [esp+221Ch] [ebp-10h]
  float *v21; // [esp+2220h] [ebp-Ch]
  int i; // [esp+2224h] [ebp-8h]
  int v23; // [esp+2228h] [ebp-4h]

  v2 = *(unsigned __int16 *)(this + 264);
  if ( v2 != 0xFFFF )
  {
    v3 = *(_DWORD *)(this + 252);
    do
    {
      v4 = 8 * (unsigned __int16)v2;
      sub_100C51C0(*(_DWORD **)(v4 + v3), this, (_DWORD *)(this + 432));
      v3 = *(_DWORD *)(this + 252);
      v2 = *(unsigned __int16 *)(v4 + v3 + 6);
    }
    while ( v2 != 0xFFFF );
  }
  v5 = *(unsigned __int16 *)(this + 264);
  v23 = v5;
  if ( v5 != 0xFFFF )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(this + 252);
      v7 = (unsigned __int16)v5;
      v8 = *(unsigned __int16 *)(v6 + 8 * (unsigned __int16)v5 + 6);
      v9 = *(float **)(v6 + 8 * (unsigned __int16)v5);
      v20 = v8;
      v21 = v9;
      LOBYTE(v2) = sub_100C0720(v9, String1, 0x2000u);
      if ( !(_BYTE)v2 )
        break;
      if ( String1[0] )
      {
        v10 = *((_DWORD *)v21 + 5);
        v11 = 0;
        v19[0] = 0;
        for ( i = v10; v11 < i; ++v11 )
        {
          sub_10228100((int)v19, **(char ***)(*((_DWORD *)v21 + 2) + 4 * v11), 512, -1);
          if ( v11 != i - 1 )
            sub_10228100((int)v19, " ", 512, -1);
        }
        if ( ((_BYTE)v21[1] & 1) != 0 )
        {
          if ( wcslen(String1) )
          {
            i = *((_DWORD *)v21 + 5) + 1;
            v17 = (double)i * 0.75;
            sub_100C3140((int *)this, String1, v17, (int)v19, 0, 0);
          }
        }
        else
        {
          sub_100C4D40(this, String1, v19, *v21, ((_BYTE)v21[1] & 2) != 0, (wchar_t *)(((_BYTE)v21[1] & 4) != 0));
        }
        LOWORD(v5) = v23;
      }
      if ( v7 < *(_DWORD *)(this + 256) && (unsigned __int16)v5 <= *(_WORD *)(this + 272) )
      {
        v12 = *(_DWORD *)(this + 252);
        if ( *(_WORD *)(v12 + 8 * v7 + 4) != (_WORD)v5 )
        {
          v13 = *(unsigned __int16 *)(v12 + 8 * v7 + 4);
          if ( (_WORD)v13 == 0xFFFF )
            *(_WORD *)(this + 264) = *(_WORD *)(v12 + 8 * v7 + 6);
          else
            *(_WORD *)(v12 + 8 * v13 + 6) = *(_WORD *)(v12 + 8 * v7 + 6);
          v14 = *(unsigned __int16 *)(v12 + 8 * v7 + 6);
          if ( (_WORD)v14 == 0xFFFF )
          {
            *(_WORD *)(this + 266) = *(_WORD *)(v12 + 8 * v7 + 4);
          }
          else
          {
            *(_WORD *)(*(_DWORD *)(this + 252) + 8 * v14 + 4) = *(_WORD *)(v12 + 8 * v7 + 4);
            LOWORD(v5) = v23;
          }
          *(_WORD *)(v12 + 8 * v7 + 6) = v5;
          *(_WORD *)(v12 + 8 * v7 + 4) = v5;
          --*(_WORD *)(this + 270);
        }
      }
      *(_WORD *)(*(_DWORD *)(this + 252) + 8 * v7 + 6) = *(_WORD *)(this + 268);
      *(_WORD *)(this + 268) = v5;
      v15 = v21;
      if ( v21 )
      {
        sub_100C3D80(v21);
        sub_10034930((int)v15);
      }
      LOBYTE(v2) = v20;
      v23 = v20;
      if ( v20 == 0xFFFF )
        break;
      LOWORD(v5) = v23;
    }
  }
  return v2;
}
