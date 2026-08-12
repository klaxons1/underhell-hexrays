char *__thiscall sub_102E0350(char *this)
{
  int v2; // edi
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx
  char *v6; // ebx
  int *v7; // ecx

  sub_101F77C0((unsigned int)this);
  *(_DWORD *)this = &CHL2_Player::`vftable';
  sub_102E5830(this + 5080);
  *((_DWORD *)this + 1270) = &CHL2_Player::NetworkVar_m_HL2Local::`vftable';
  *((_DWORD *)this + 1305) = -1;
  *((_DWORD *)this + 1306) = -1;
  *((_DWORD *)this + 1307) = -1;
  *((_DWORD *)this + 1308) = -1;
  *((float *)this + 1345) = -1.0;
  *((_DWORD *)this + 1407) = -1;
  *((float *)this + 1412) = -1.0;
  *((float *)this + 1413) = -1.0;
  *((_DWORD *)this + 1414) = -1;
  *((_DWORD *)this + 1415) = -1;
  v2 = 0;
  *((_DWORD *)this + 1396) = 0;
  *((_DWORD *)this + 1344) = 0;
  this[5196] = 1;
  if ( *((_DWORD *)this + 1261) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 5044);
    }
    *((_DWORD *)this + 1261) = 0;
  }
  this[5063] = 0;
  if ( this[5040] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 5040);
    }
    this[5040] = 0;
  }
  if ( this[5062] != 1 )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 5062);
    }
    this[5062] = 1;
  }
  *((float *)this + 1267) = -60.0;
  *((_DWORD *)this + 1410) = 0;
  v6 = this + 4928;
  *((float *)this + 1409) = 0.0;
  *((_DWORD *)this + 1309) = 0;
  *((_DWORD *)this + 1310) = 0;
  *((_DWORD *)this + 1311) = 0;
  *((_DWORD *)this + 1312) = 0;
  *((_DWORD *)this + 1313) = 0;
  *((_DWORD *)this + 1314) = 0;
  *((_DWORD *)this + 1315) = 0;
  *((_DWORD *)this + 1316) = 0;
  *((_DWORD *)this + 1317) = 0;
  *((_DWORD *)this + 1318) = 0;
  *((_DWORD *)this + 1319) = 0;
  *((_DWORD *)this + 1320) = 0;
  *((_DWORD *)this + 1321) = 0;
  *((_DWORD *)this + 1322) = 0;
  *((_DWORD *)this + 1323) = 0;
  *((_DWORD *)this + 1324) = 0;
  *((_DWORD *)this + 1325) = 0;
  *((_DWORD *)this + 1326) = 0;
  *((_DWORD *)this + 1327) = 0;
  *((_DWORD *)this + 1328) = 0;
  *((_DWORD *)this + 1329) = 0;
  *((_DWORD *)this + 1330) = 0;
  *((_DWORD *)this + 1331) = 0;
  *((_DWORD *)this + 1332) = 0;
  *((_DWORD *)this + 1333) = 0;
  *((_DWORD *)this + 1334) = 0;
  *((_DWORD *)this + 1335) = 0;
  *((_DWORD *)this + 1336) = 0;
  *((_DWORD *)this + 1337) = 0;
  *((_DWORD *)this + 1338) = 0;
  *((_DWORD *)this + 1339) = 0;
  *((_DWORD *)this + 1340) = 0;
  *((_DWORD *)this + 1341) = 0;
  *((_DWORD *)this + 1342) = 0;
  do
  {
    if ( *(_DWORD *)&v6[4 * v2] )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v7 = (int *)*((_DWORD *)this + 6);
        if ( v7 )
          sub_100194B0(v7, 4 * v2 + 4928);
      }
      *(_DWORD *)&v6[4 * v2] = 0;
    }
    ++v2;
  }
  while ( v2 < 28 );
  return this;
}
