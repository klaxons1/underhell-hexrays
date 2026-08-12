void __thiscall sub_10231160(_DWORD *this, int a2)
{
  char *v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  const char *v6; // esi
  const char *v7; // eax
  int v8; // ecx
  int v9; // eax
  const char *v10; // ecx
  const char *v11; // eax
  int v12; // eax
  char v13; // cl
  int v14; // eax
  const char *v15; // esi
  const char *v16; // eax
  char v17; // cl
  int v18; // eax
  const char *v19; // esi
  const char *v20; // eax
  int v21[19]; // [esp+10h] [ebp-4Ch] BYREF

  if ( !a2 )
    return;
  v3 = (char *)this[204];
  if ( !v3 )
    v3 = (char *)String;
  v4 = sub_1012C5B0(0, v3, (int)this, 0, 0);
  if ( !v4 )
  {
    sub_10072560(v21);
    sub_1006FF60(v21, this[204]);
    sub_10070FE0(v21, -1);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    sub_10072770(v21, (float *)(a2 + 580), 3.4028235e38);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v5 = sub_10072EC0((float *)(a2 + 580), v21);
    if ( !v5 )
    {
      v6 = (const char *)this[204];
      if ( !v6 )
        v6 = String;
      v7 = sub_100D6390(this);
      DevMsg(1, "Can't find goal entity %s\nCan't execute script %s\n", v6, v7);
      sub_100725D0(v21);
      return;
    }
    v4 = (_DWORD *)v5;
    sub_100725D0(v21);
  }
  if ( *(int *)(a2 + 2352) > 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 1412))(a2, 1);
  *(_DWORD *)(a2 + 2340) = 0;
  *(float *)(a2 + 2348) = 0.0;
  v8 = this[206];
  if ( dword_10648F98[v8] )
    sub_1002B660(a2, dword_10648F98[v8]);
  v9 = this[205];
  if ( v9 == 3 || v9 == 6 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 288))(v4) )
    {
      sub_100285C0((_DWORD *)a2, v4, 1);
      if ( (v4[63] & 0x800) != 0 )
        sub_100DAE60((int)v4);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)a2 + 1876))(a2, v4, v4 + 145, 0);
      sub_10023CB0((char *)a2, 36);
    }
    else
    {
      v10 = (const char *)this[204];
      if ( !v10 )
        v10 = String;
      v11 = (const char *)this[65];
      if ( !v11 )
        v11 = String;
      DevMsg("Scripted schedule %s specified an invalid enemy %s\n", v11, v10);
    }
  }
  v12 = this[205];
  switch ( v12 )
  {
    case 1:
    case 2:
    case 6:
      v13 = *(_BYTE *)(a2 + 306);
      v14 = v12 != 1 ? 11 : 6;
      if ( v13 == 4 || v13 == 5 )
        v14 = 26;
      if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)a2 + 1860))(a2, 2, v4, v14) )
        goto LABEL_46;
      if ( (this[62] & 0x800) == 0 )
      {
        v15 = (const char *)this[204];
        if ( !v15 )
          v15 = String;
        v16 = sub_100D6390(this);
        DevMsg(1, "ScheduledMoveToGoalEntity to goal entity %s failed\nCan't execute script %s\n", v15, v16);
      }
      break;
    case 4:
    case 5:
      v17 = *(_BYTE *)(a2 + 306);
      v18 = v12 != 4 ? 11 : 6;
      if ( v17 == 4 || v17 == 5 )
        v18 = 26;
      if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)a2 + 1864))(a2, 2, v4, v18) )
      {
LABEL_46:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1856))(a2, this[208]);
      }
      else if ( (this[62] & 0x800) == 0 )
      {
        v19 = (const char *)this[204];
        if ( !v19 )
          v19 = String;
        v20 = sub_100D6390(this);
        DevMsg(1, "ScheduledFollowPath to goal entity %s failed\nCan't execute script %s\n", v19, v20);
      }
      break;
    default:
      return;
  }
}
