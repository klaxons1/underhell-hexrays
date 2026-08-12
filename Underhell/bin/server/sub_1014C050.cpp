void __thiscall sub_1014C050(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  int i; // esi
  double v6; // st7
  double v7; // st7
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int j; // esi
  float *v12; // ebx
  float v13[252]; // [esp+0h] [ebp-810h]
  float v14; // [esp+3F4h] [ebp-41Ch]
  float v15[256]; // [esp+404h] [ebp-40Ch]
  float v16; // [esp+804h] [ebp-Ch]
  int v17; // [esp+808h] [ebp-8h]
  int v18; // [esp+80Ch] [ebp-4h]

  if ( this[255] != 1 )
  {
    v2 = this[244];
    v3 = 0;
    if ( v2 > 0 )
    {
      v4 = this[245];
      v18 = 0;
      do
      {
        for ( i = 0; i < v4; ++i )
        {
          if ( v3 >= 0 && v3 < this[244] && i >= 0 && i < v4 && -1.0 != *(float *)&this[i + 257 + v18] )
          {
            v6 = sub_1014B160(this, v3, i);
            v15[i + v18] = v6;
          }
          v4 = this[245];
        }
        v2 = this[244];
        v18 += 16;
        ++v3;
      }
      while ( v3 < v2 );
    }
    v7 = (double)this[513];
    v8 = 0;
    v18 = 0;
    v16 = v7 * 0.01 * 0.2;
    if ( v2 > 0 )
    {
      v9 = 257;
      v17 = 257;
      do
      {
        v10 = this[245];
        for ( j = 0; j < v10; ++j )
        {
          if ( v8 >= 0 && v8 < this[244] && j >= 0 && j < v10 )
          {
            v12 = (float *)&this[v9 + j];
            if ( -1.0 != *v12 )
            {
              v14 = v13[j + v9] * 0.1481481481481481;
              sub_1014B7C0((int)this, v8, j, v14);
              if ( v16 > (double)*v12 )
              {
                if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
                  sub_1014BD90((int)this, v18, j);
                else
                  sub_1014C280((int)this, v18, j, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
                sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
              }
              v8 = v18;
            }
          }
          v10 = this[245];
          v9 = v17;
        }
        ++v8;
        v9 += 16;
        v18 = v8;
        v17 = v9;
      }
      while ( v8 < this[244] );
    }
  }
}
