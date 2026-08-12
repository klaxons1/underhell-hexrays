void __thiscall sub_100B88D0(int this)
{
  double v2; // st5
  double v3; // st3
  double v4; // st7
  double v5; // st3
  int v6; // eax
  int v7; // edi
  int v8; // eax
  char v9; // al
  int v10; // eax
  int v11; // eax
  float v12; // [esp+4h] [ebp-24h]
  char v13; // [esp+Ch] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+20h] [ebp-8h]
  float v16; // [esp+24h] [ebp-4h]

  if ( !*(_BYTE *)(this + 3692) || *(_BYTE *)(this + 3694) )
  {
    if ( *(_BYTE *)(this + 3693) )
    {
      if ( !*(_BYTE *)(this + 3694) || !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        return;
      *(_BYTE *)(this + 3693) = 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)this + 2208))(this, &v14) )
    {
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3688) )
      {
        v2 = v16 - *(float *)(this + 3684);
        v3 = *(float *)&v14 - *(float *)(this + 3676);
        v4 = v3 * v3;
        v5 = v15 - *(float *)(this + 3680);
        if ( v5 * v5 + v4 + v2 * v2 >= *(float *)(this + 3696) * *(float *)(this + 3696) )
        {
          v13 = *(_BYTE *)(this + 3733);
          v12 = *(float *)(this + 3700);
          v6 = sub_1026A890(this + 3644);
          v7 = sub_100B5D00((float *)this, v6, (float *)&v14, v12, 1, v13);
          if ( sub_101ACC70(v7, 1) )
          {
            if ( v7 != sub_1026A890(this + 3648) )
            {
              v8 = sub_1026A890(this + 3644);
              v9 = sub_100B5960(v8, v7);
              if ( v9 != *(_BYTE *)(this + 3732) )
              {
                *(_BYTE *)(this + 3732) = v9;
                if ( v7 != sub_1026A890(this + 3644) )
                {
                  v10 = sub_1026A890(this + 3644);
                  v11 = sub_100B5050((_BYTE *)this, v10);
                  sub_100B7E60(this, v11);
                }
              }
              sub_10019680((_DWORD *)(this + 3648), v7);
            }
            *(float *)(this + 3676) = *(float *)&v14;
            *(float *)(this + 3680) = v15;
            *(float *)(this + 3684) = v16;
            *(float *)(this + 3688) = *(float *)(dword_106B31C8 + 12) + 1.0;
          }
        }
      }
    }
  }
}
