void __thiscall sub_10144140(int this)
{
  int v2; // edi
  double v3; // st7
  double v4; // st6
  double v5; // st6
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  int v10; // edx
  float v11; // [esp+8h] [ebp-24h]
  _BYTE *v12; // [esp+8h] [ebp-24h]
  _BYTE *v13; // [esp+8h] [ebp-24h]
  int v14; // [esp+18h] [ebp-14h] BYREF
  _BYTE v15[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+28h] [ebp-4h]

  if ( *(_BYTE *)(this + 869) )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    {
      v2 = sub_10261B20();
      if ( v2 )
      {
        v3 = *(float *)(this + 856) - 0.1;
        v4 = (v3 - *(float *)(dword_106B31C8 + 12)) / *(float *)(this + 860);
        v18 = v4;
        v5 = 1.0 - v4;
        v17 = v5;
        if ( *(float *)(dword_106B31C8 + 12) >= v3 || *(float *)(this + 860) <= 0.0 )
        {
          if ( *(_DWORD *)(v2 + 2380) != *(_DWORD *)(this + 816) )
          {
            (**(void (__thiscall ***)(int, int))(v2 + 2364))(v2 + 2364, v2 + 2380);
            *(_DWORD *)(v2 + 2380) = *(_DWORD *)(this + 816);
          }
          if ( *(_DWORD *)(v2 + 2384) != *(_DWORD *)(this + 820) )
          {
            (**(void (__thiscall ***)(int, int))(v2 + 2364))(v2 + 2364, v2 + 2384);
            *(_DWORD *)(v2 + 2384) = *(_DWORD *)(this + 820);
          }
          if ( *(_DWORD *)(v2 + 2388) != *(_DWORD *)(this + 824) )
          {
            (**(void (__thiscall ***)(int, int))(v2 + 2364))(v2 + 2364, v2 + 2388);
            *(_DWORD *)(v2 + 2388) = *(_DWORD *)(this + 824);
          }
          if ( *(_DWORD *)(v2 + 2392) != *(_DWORD *)(this + 828) )
          {
            (**(void (__thiscall ***)(int, int))(v2 + 2364))(v2 + 2364, v2 + 2392);
            *(_DWORD *)(v2 + 2392) = *(_DWORD *)(this + 828);
          }
          *(_DWORD *)(v2 + 2396) = *(_DWORD *)(this + 832);
          *(_DWORD *)(v2 + 2400) = *(_DWORD *)(this + 836);
        }
        else
        {
          v11 = v5;
          v12 = sub_10143850((unsigned __int8 *)(this + 824), &v16, v11);
          v6 = sub_10143850((unsigned __int8 *)(this + 816), &v14, v18);
          v7 = sub_10143810(v6, v15, v12);
          sub_10143FA0((_DWORD *)(v2 + 2380), v7);
          v13 = sub_10143850((unsigned __int8 *)(this + 828), &v14, v17);
          v8 = sub_10143850((unsigned __int8 *)(this + 820), &v16, v18);
          v9 = sub_10143810(v8, v15, v13);
          sub_10143FD0((_DWORD *)(v2 + 2384), v9);
          *(float *)&v16 = *(float *)(this + 848) * v17 + *(float *)(this + 832) * v18;
          sub_101440B0((float *)(v2 + 2396), (float *)&v16);
          *(float *)&v16 = *(float *)(this + 852) * v17 + *(float *)(this + 836) * v18;
          sub_101440E0((float *)(v2 + 2400), (float *)&v16);
        }
        sub_102BE2D0(this + 804);
        *(_BYTE *)(v2 + 2428) = *(_BYTE *)(this + 864);
        *(_BYTE *)(v2 + 2429) = *(_BYTE *)(this + 865);
        v10 = *(_DWORD *)(v2 + 2192);
        *(_DWORD *)(v2 + 2408) = *(_DWORD *)(this + 844);
        (*(void (__thiscall **)(int))(v10 + 4))(v2 + 2192);
      }
    }
  }
}
