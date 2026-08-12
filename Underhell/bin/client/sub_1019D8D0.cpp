void __thiscall sub_1019D8D0(int this)
{
  float *v2; // eax
  double v3; // st7
  float v4; // edx
  int v5; // ecx
  double v6; // st6
  double v7; // st5
  int v8; // edx
  float *v9; // ebx
  double v10; // st1
  double v11; // st3
  int v12; // eax
  float *v13; // edi
  double v14; // st7
  float v15[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( *((float *)off_103DC81C + 4) > 0.0 && *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 2692) )
  {
    v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 4))(this + 4);
    v3 = (double)*(int *)(this + 2296);
    v4 = v2[1];
    v15[0] = *v2;
    v5 = *(_DWORD *)(this + 2688);
    v15[2] = v3;
    v15[1] = v4;
    v6 = v4;
    v7 = v15[0];
    if ( v5 )
    {
      v8 = *(_DWORD *)(this + 2684);
      v9 = (float *)(this + 24 * (((_BYTE)v8 + (_BYTE)v5 - 1) & 0xF) + 2300);
      if ( this + 24 * (((_BYTE)v8 + (_BYTE)v5 - 1) & 0xF) != -2300 )
      {
        v10 = *(float *)(this + 24 * (((_BYTE)v8 + (_BYTE)v5 - 1) & 0xF) + 2304) - v6;
        v11 = *(float *)(this + 24 * (((_BYTE)v8 + (_BYTE)v5 - 1) & 0xF) + 2308) - v3;
        if ( (*v9 - v7) * (*v9 - v7) + v10 * v10 + v11 * v11 <= 4.0 )
        {
LABEL_13:
          *(float *)(this + 2692) = *((float *)off_103DC81C + 3) + 0.03125;
          return;
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( v5 >= 16 )
    {
      ++*(_DWORD *)(this + 2684);
      *(_DWORD *)(this + 2688) = v5 - 1;
    }
    v12 = *(_DWORD *)(this + 2688) + *(_DWORD *)(this + 2684);
    *(float *)(this + 24 * (v12 & 0xF) + 2300) = v7;
    v13 = (float *)(this + 24 * (v12 & 0xF) + 2300);
    v13[1] = v6;
    v13[2] = v3 + 2.0;
    v13[3] = *((float *)off_103DC81C + 3) + 0.5;
    v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            -16.0,
            16.0);
    v13[5] = v14;
    if ( v9 )
    {
      sub_100345D0(v9, v15);
      v13[4] = fmod(v14 + v9[4], 1.0);
    }
    else
    {
      v13[4] = 0.0;
    }
    ++*(_DWORD *)(this + 2688);
    goto LABEL_13;
  }
}
