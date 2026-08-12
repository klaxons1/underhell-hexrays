void __thiscall sub_10057E70(int this, int a2)
{
  float *v3; // eax
  int v4; // ecx
  int v5; // edx
  float *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  float v12; // [esp+4h] [ebp-1Ch]
  float v13[3]; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+28h] [ebp+8h]
  int v15; // [esp+28h] [ebp+8h]

  sub_1003CD40((_DWORD *)this, a2);
  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
  *(float *)(this + 1212) = *v3;
  *(float *)(this + 1216) = v3[1];
  *(float *)(this + 1220) = v3[2];
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v10 = *(unsigned __int8 *)(this + 81);
      v15 = *(unsigned __int8 *)(this + 82);
      *(float *)(this + 1248) = (double)*(unsigned __int8 *)(this + 80) * 0.0039215689;
      *(float *)(this + 1252) = (double)v10 * 0.0039215689;
      *(float *)(this + 1256) = 0.0039215689 * (double)v15;
    }
  }
  else
  {
    v4 = *(unsigned __int8 *)(this + 81);
    v5 = *(unsigned __int8 *)(this + 82);
    v14 = *(unsigned __int8 *)(this + 80);
    *(_DWORD *)(this + 1344) = 1;
    *(float *)(this + 1264) = (float)*(int *)(this + 1188);
    *(float *)(this + 1260) = (float)*(int *)(this + 1184);
    *(float *)(this + 1248) = (double)v14 * 0.0039215689;
    *(float *)(this + 1252) = (double)v4 * 0.0039215689;
    *(float *)(this + 1256) = 0.0039215689 * (double)v5;
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    *(float *)(this + 1372) = *v6;
    *(float *)(this + 1376) = v6[1];
    *(float *)(this + 1380) = v6[2];
    v7 = *(_DWORD *)(this + 1200);
    v8 = *(_DWORD *)(this + 1196);
    *(_DWORD *)(this + 1396) = *(_DWORD *)(this + 1192);
    *(_DWORD *)(this + 1400) = v8;
    *(_DWORD *)(this + 1404) = v7;
    *(float *)(this + 1348) = *(float *)(this + 1412);
    if ( (*(_BYTE *)(this + 1204) & 1) != 0 )
      *(_BYTE *)(this + 1408) = 1;
    v9 = *(_DWORD *)(this - 8);
    v12 = RandomFloat(0.0, 3.0) + *((float *)off_103DC81C + 3);
    (*(void (__thiscall **)(int, _DWORD))(v9 + 408))(this - 8, LODWORD(v12));
  }
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 40))(this - 8);
  sub_101EE040(v11, v13, 0, 0);
  *(float *)(this + 1384) = v13[0];
  *(float *)(this + 1388) = v13[1];
  *(float *)(this + 1392) = v13[2];
  off_103EDFEC();
}
