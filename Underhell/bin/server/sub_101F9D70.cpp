void __thiscall sub_101F9D70(unsigned int *this)
{
  unsigned int *v2; // ebx
  int v3; // edi
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // esi
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  int (__thiscall *v10)(int); // edx
  float *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // [esp+8h] [ebp-14h]
  int v15; // [esp+Ch] [ebp-10h]
  unsigned int *v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  float *v18; // [esp+18h] [ebp-4h]

  if ( *(int *)(dword_106B31C8 + 20) > 1 && *(_DWORD *)(dword_106BD064 + 48) )
  {
    CVProfile::EnterScope(g_VProfCurrentProfile, "FrameUpdatePostEntityThink", 0, "CLagCompensationManager", 0, 4);
    v15 = (int)(*(float *)(dword_106B31C8 + 12) - *(float *)(dword_106BD0AC + 44));
    v17 = 1;
    if ( *(int *)(dword_106B31C8 + 20) >= 1 )
    {
      v2 = this + 9;
      v16 = v2;
      do
      {
        v3 = sub_1025FB50(v17);
        if ( v3 )
        {
          while ( 1 )
          {
            v4 = *(v2 - 1);
            if ( !v4 || *(_DWORD *)(v4 + 304) == v4 && *(_DWORD *)(v4 + 308) != v4 )
              break;
            if ( (double)v15 <= *(float *)(v4 + 52) )
              break;
            if ( !sub_101F9620(v4, (int *)v2 + 2) )
            {
              v5 = *(_DWORD *)(v4 + 304);
              if ( v5 != v4 )
              {
                if ( v5 )
                  *(_DWORD *)(v5 + 308) = *(_DWORD *)(v4 + 308);
                else
                  *(v2 - 2) = *(_DWORD *)(v4 + 308);
                v6 = *(_DWORD *)(v4 + 308);
                if ( v6 )
                  *(_DWORD *)(v6 + 304) = *(_DWORD *)(v4 + 304);
                else
                  *(v2 - 1) = *(_DWORD *)(v4 + 304);
                *(_DWORD *)(v4 + 308) = v4;
                *(_DWORD *)(v4 + 304) = v4;
                --v2[1];
              }
            }
            *(_DWORD *)(v4 + 308) = *v2;
            *v2 = v4;
          }
          if ( (int)v2[1] <= 0 || *(float *)(v3 + 128) > (double)*(float *)(*(v2 - 2) + 52) )
          {
            v7 = sub_101F9CF0((int)(v2 - 5));
            *(_DWORD *)v7 = 0;
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3) )
              *(_DWORD *)v7 |= 1u;
            *(float *)(v7 + 52) = *(float *)(v3 + 128);
            v8 = *(int (__thiscall **)(int))(*(_DWORD *)(v3 + 320) + 8);
            *(float *)(v7 + 16) = *(float *)(v3 + 728);
            *(float *)(v7 + 20) = *(float *)(v3 + 732);
            *(float *)(v7 + 24) = *(float *)(v3 + 736);
            *(float *)(v7 + 4) = *(float *)(v3 + 716);
            *(float *)(v7 + 8) = *(float *)(v3 + 720);
            *(float *)(v7 + 12) = *(float *)(v3 + 724);
            v9 = (float *)v8(v3 + 320);
            *(float *)(v7 + 40) = *v9;
            *(float *)(v7 + 44) = v9[1];
            v10 = *(int (__thiscall **)(int))(*(_DWORD *)(v3 + 320) + 4);
            *(float *)(v7 + 48) = v9[2];
            v11 = (float *)v10(v3 + 320);
            *(float *)(v7 + 28) = *v11;
            v12 = 0;
            *(float *)(v7 + 32) = v11[1];
            *(float *)(v7 + 36) = v11[2];
            v14 = *(_DWORD *)(v3 + 1132);
            if ( v14 > 0 )
            {
              v18 = (float *)(v7 + 68);
              do
              {
                v13 = sub_100C5020((_DWORD *)v3, v12);
                if ( v13 )
                {
                  *(v18 - 2) = *(float *)(v13 + 12);
                  *v18 = *(float *)(v13 + 60);
                  *(v18 - 3) = *(float *)(v13 + 8);
                  *(v18 - 1) = *(float *)(v13 + 20);
                }
                ++v12;
                v18 += 4;
              }
              while ( v12 < v14 );
            }
            v2 = v16;
            *(_DWORD *)(v7 + 296) = *(_DWORD *)(v3 + 908);
            *(float *)(v7 + 300) = *(float *)(v3 + 904);
          }
        }
        else if ( (int)v2[1] > 0 )
        {
          sub_101F9A40(v2 - 5);
        }
        v2 += 10;
        ++v17;
        v16 = v2;
      }
      while ( v17 <= *(_DWORD *)(dword_106B31C8 + 20) );
    }
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    sub_101F9B20(this);
  }
}
