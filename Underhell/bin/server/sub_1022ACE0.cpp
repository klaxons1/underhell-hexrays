int __thiscall sub_1022ACE0(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)(this + 800) = &IChoreoEventCallback::`vftable';
  *(_DWORD *)this = &CSceneEntity::`vftable';
  *(_DWORD *)(this + 800) = &CSceneEntity::`vftable';
  *(_DWORD *)(this + 812) = -1;
  *(_DWORD *)(this + 852) = -1;
  *(_DWORD *)(this + 856) = -1;
  *(_DWORD *)(this + 860) = -1;
  *(_DWORD *)(this + 864) = -1;
  *(_DWORD *)(this + 868) = -1;
  *(_DWORD *)(this + 872) = -1;
  *(_DWORD *)(this + 876) = -1;
  *(_DWORD *)(this + 880) = -1;
  *(_DWORD *)(this + 932) = 0;
  *(_DWORD *)(this + 936) = 0;
  *(_DWORD *)(this + 940) = 0;
  *(_DWORD *)(this + 944) = 0;
  *(_DWORD *)(this + 948) = 0;
  *(_DWORD *)(this + 952) = 0;
  *(_DWORD *)(this + 956) = 0;
  *(_DWORD *)(this + 960) = 0;
  *(_DWORD *)(this + 964) = 0;
  *(_DWORD *)(this + 968) = 0;
  *(_DWORD *)(this + 1000) = -1;
  *(_DWORD *)(this + 988) = 0;
  *(_DWORD *)(this + 1004) = 5;
  *(_DWORD *)(this + 1024) = -1;
  *(_DWORD *)(this + 1012) = 0;
  *(_DWORD *)(this + 1028) = 5;
  *(_DWORD *)(this + 1048) = -1;
  *(_DWORD *)(this + 1036) = 0;
  *(_DWORD *)(this + 1052) = 5;
  *(_DWORD *)(this + 1072) = -1;
  *(_DWORD *)(this + 1060) = 0;
  *(_DWORD *)(this + 1076) = 5;
  *(_DWORD *)(this + 1096) = -1;
  *(_DWORD *)(this + 1084) = 0;
  *(_DWORD *)(this + 1100) = 5;
  *(_DWORD *)(this + 1120) = -1;
  *(_DWORD *)(this + 1108) = 0;
  *(_DWORD *)(this + 1124) = 5;
  *(_DWORD *)(this + 1144) = -1;
  *(_DWORD *)(this + 1132) = 0;
  *(_DWORD *)(this + 1148) = 5;
  *(_DWORD *)(this + 1168) = -1;
  *(_DWORD *)(this + 1156) = 0;
  *(_DWORD *)(this + 1172) = 5;
  *(_DWORD *)(this + 1192) = -1;
  *(_DWORD *)(this + 1180) = 0;
  *(_DWORD *)(this + 1196) = 5;
  *(_DWORD *)(this + 1216) = -1;
  *(_DWORD *)(this + 1204) = 0;
  *(_DWORD *)(this + 1220) = 5;
  *(_DWORD *)(this + 1240) = -1;
  *(_DWORD *)(this + 1228) = 0;
  *(_DWORD *)(this + 1244) = 5;
  *(_DWORD *)(this + 1264) = -1;
  *(_DWORD *)(this + 1252) = 0;
  *(_DWORD *)(this + 1268) = 5;
  *(_DWORD *)(this + 1288) = -1;
  *(_DWORD *)(this + 1276) = 0;
  *(_DWORD *)(this + 1292) = 5;
  *(_DWORD *)(this + 1312) = -1;
  *(_DWORD *)(this + 1300) = 0;
  *(_DWORD *)(this + 1316) = 5;
  *(_DWORD *)(this + 1336) = -1;
  *(_DWORD *)(this + 1324) = 0;
  *(_DWORD *)(this + 1340) = 5;
  *(_DWORD *)(this + 1360) = -1;
  *(_DWORD *)(this + 1348) = 0;
  *(_DWORD *)(this + 1364) = 5;
  *(_DWORD *)(this + 1384) = -1;
  *(_DWORD *)(this + 1372) = 0;
  *(_DWORD *)(this + 1388) = 5;
  *(_DWORD *)(this + 1408) = -1;
  *(_DWORD *)(this + 1396) = 0;
  *(_DWORD *)(this + 1412) = 5;
  *(_DWORD *)(this + 1432) = -1;
  *(_DWORD *)(this + 1420) = 0;
  *(_DWORD *)(this + 1436) = 5;
  *(_DWORD *)(this + 1452) = -1;
  *(_DWORD *)(this + 1460) = 0;
  *(_DWORD *)(this + 1464) = 0;
  *(_DWORD *)(this + 1468) = 0;
  *(_DWORD *)(this + 1472) = 0;
  *(_DWORD *)(this + 1476) = 0;
  *(_DWORD *)(this + 1480) = 0;
  *(_DWORD *)(this + 1484) = 0;
  *(_DWORD *)(this + 1488) = 0;
  *(_DWORD *)(this + 1492) = 0;
  *(_DWORD *)(this + 1496) = 0;
  *(_DWORD *)(this + 1508) = -1;
  *(_DWORD *)(this + 1512) = -1;
  *(_WORD *)(this + 925) = 0;
  *(_BYTE *)(this + 927) = 0;
  if ( *(_BYTE *)(this + 884) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 884);
    }
    *(_BYTE *)(this + 884) = 0;
  }
  if ( *(_BYTE *)(this + 885) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 885);
    }
    *(_BYTE *)(this + 885) = 0;
  }
  if ( *(_BYTE *)(this + 886) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 886);
    }
    *(_BYTE *)(this + 886) = 0;
  }
  *(_DWORD *)(this + 804) = 0;
  *(float *)(this + 904) = 1.0;
  *(_DWORD *)(this + 808) = 0;
  v5 = 0.0;
  *(_DWORD *)(this + 812) = -1;
  *(_BYTE *)(this + 816) = 0;
  *(float *)(this + 892) = 0.0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *(_DWORD *)(this + 888) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 888);
        v5 = 0.0;
      }
    }
    *(float *)(this + 888) = v5;
  }
  *(float *)(this + 916) = v5;
  *(_BYTE *)(this + 900) = 0;
  *(float *)(this + 920) = v5;
  *(_BYTE *)(this + 908) = 0;
  *(_DWORD *)(this + 912) = 0;
  *(_BYTE *)(this + 924) = 0;
  *(_DWORD *)(this + 1444) = 0;
  *(_BYTE *)(this + 1448) = 0;
  *(_DWORD *)(this + 1452) = -1;
  *(_DWORD *)(this + 976) = 0;
  *(_BYTE *)(this + 1456) = 0;
  *(_DWORD *)(this + 984) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "snd_mixahead");
  *(_DWORD *)(this + 1516) = 0;
  return this;
}
