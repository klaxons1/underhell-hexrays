void __thiscall sub_10250B10(int this, int a2)
{
  _DWORD *v2; // esi
  int v4; // ecx
  int v5; // ebx
  int *v6; // ecx
  const char *v7; // eax
  const char *v8; // [esp+20h] [ebp-30h]
  double v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+4Ch] [ebp-4h]

  v2 = (_DWORD *)a2;
  v10 = sub_101ACC90((_DWORD *)a2);
  if ( a2 )
  {
    do
    {
      if ( v2 == (_DWORD *)v10 )
        break;
      (*(void (__thiscall **)(_DWORD *, const char *, int, int, _DWORD))(*v2 + 148))(v2, "InPass", this, this, 0);
      v2 = (_DWORD *)sub_101ACC90(v2);
    }
    while ( v2 );
  }
  v4 = a2;
  if ( (*(_DWORD *)(a2 + 248) & 8) != 0 )
  {
    v5 = *(_DWORD *)(this + 248) | 2;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      v4 = a2;
      *(_DWORD *)(this + 248) = v5;
    }
  }
  if ( (*(_BYTE *)(this + 248) & 2) != 0 && 0.0 != *(float *)(v4 + 108) )
  {
    sub_10253AA0(this, *(float *)(v4 + 108), 0.0);
    v9 = *(float *)(a2 + 108);
    v8 = sub_100D6390((_DWORD *)a2);
    v7 = sub_100D6390((_DWORD *)this);
    DevMsg(2, "TrackTrain %s arrived at %s, speed to %4.2f\n", v7, v8, v9);
  }
}
