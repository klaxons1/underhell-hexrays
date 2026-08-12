void __thiscall sub_102050A0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // esi
  double v9; // st7
  float v10; // [esp+0h] [ebp-20h]
  float v11; // [esp+10h] [ebp-10h] BYREF
  float v12; // [esp+14h] [ebp-Ch]
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        if ( v3[1] != v4 )
          v5 = 0;
        if ( *(_BYTE *)(v5 + 306) == 6 )
        {
          if ( v3[1] == v4 )
            v6 = *v3;
          else
            v6 = 0;
          v7 = *(_DWORD *)(v6 + 424);
          if ( v7 )
            (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 204))(v7, &v11, 0);
        }
        else
        {
          if ( v3[1] == v4 )
            v8 = *v3;
          else
            v8 = 0;
          if ( (*(_DWORD *)(v8 + 252) & 0x1000) != 0 )
            sub_100DAFD0(v8);
          v11 = *(float *)(v8 + 476);
          v12 = *(float *)(v8 + 480);
          v13 = *(float *)(v8 + 484);
        }
        if ( *(float *)(this + 804) == flt_106F1CA8
          && *(float *)(this + 808) == flt_106F1CAC
          && *(float *)(this + 812) == flt_106F1CB0 )
        {
          v9 = 1.0;
        }
        else
        {
          v9 = *(float *)(this + 808) * v12 + *(float *)(this + 804) * v11 + *(float *)(this + 812) * v13;
        }
        v14 = v9;
        *(float *)(this + 820) = v9;
        if ( *(float *)(this + 824) != v14 )
        {
          v10 = v9;
          sub_10108AE0((int *)(this + 824), SLOBYTE(v10), 0, 0);
        }
      }
    }
  }
}
