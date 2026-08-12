int __thiscall sub_10315FC0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  float *v6; // eax
  int v8[3]; // [esp+10h] [ebp-24h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v10[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( 0.0 != *(float *)(this + 4272) )
  {
    sub_10424B10(0.0, *(float *)(this + 4272), 2.0);
    *(float *)(this + 4272) = 0.0;
  }
  if ( *(_BYTE *)(this + 224) == 1 )
  {
    v2 = *(_DWORD *)(this + 4332);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 4332) & 0xFFF) + 2] == v4 )
            v5 = *v3;
          else
            v5 = 0;
          v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
          *(float *)(this + 3620) = *v6;
          *(float *)(this + 3624) = v6[1];
          *(float *)(this + 3628) = v6[2];
        }
      }
    }
    if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 4) )
    {
      v10[0] = 0.75;
      v10[1] = 0.75;
      v10[2] = 0.75;
      v9[0] = 0.25;
      v9[1] = 0.25;
      v9[2] = 0.25;
      sub_10111860(this + 320, v9, v10, (float *)v8);
      sub_10315AD0((_DWORD *)this, (float *)v8);
    }
  }
  return sub_10041D00((_DWORD *)this);
}
