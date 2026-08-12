void __thiscall sub_100416F0(__int16 *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // edi
  double v7; // st7
  double v8; // st6
  float v9; // [esp+18h] [ebp-20h]
  float v10; // [esp+28h] [ebp-10h]
  float v11; // [esp+2Ch] [ebp-Ch]
  int v12; // [esp+30h] [ebp-8h]
  int v13; // [esp+34h] [ebp-4h]

  if ( this[698] > 0 )
  {
    v3 = 0;
    v13 = 0;
    v4 = 0;
    v12 = 0;
    do
    {
      if ( v3 >= 0 && v3 < this[698] )
      {
        v5 = (int)this + v4 + 1348;
        if ( v5 )
        {
          if ( !*(_BYTE *)(v5 + 8) )
          {
            v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041315C + 64))(
                   dword_1041315C,
                   *(_DWORD *)(v5 + 4));
            if ( v6 )
            {
              v7 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_1041315C + 68))(
                     dword_1041315C,
                     *(_DWORD *)(v5 + 4));
              v8 = *(float *)v5;
              if ( v7 + 2.0 > v8 )
              {
                v10 = v8 - *(float *)(dword_10406E94 + 44);
                v11 = *(float *)(dword_10406EDC + 44);
                v9 = v7;
                sub_1011C650(v10, v9);
                sub_10041500((int)this, a2, v10, v6, v10, v11, 0);
              }
            }
            v3 = v13;
          }
        }
      }
      ++v3;
      v4 = v12 + 12;
      v13 = v3;
      v12 += 12;
    }
    while ( v3 < this[698] );
  }
}
