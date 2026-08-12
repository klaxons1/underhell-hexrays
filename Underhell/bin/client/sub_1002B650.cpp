char __thiscall sub_1002B650(int this, int a2, int a3, int a4, float a5)
{
  int v6; // edi
  int (__thiscall *v7)(int); // edx
  float *v8; // eax
  float *v9; // eax
  char v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15; // [esp-4h] [ebp-44h]
  _BYTE v16[48]; // [esp+10h] [ebp-30h] BYREF

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v6 = *(_DWORD *)(this + 1940);
  if ( !v6 || !*(_DWORD *)v6 || *(_DWORD *)(this + 1192) || *(_BYTE *)(this + 1780) )
    return 0;
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)this + 260);
  *(_BYTE *)(this + 1780) = 1;
  v8 = (float *)v7(this);
  *(float *)(this + 1784) = *v8;
  *(float *)(this + 1788) = v8[1];
  *(float *)(this + 1792) = v8[2];
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 264))(this);
  *(float *)(this + 1796) = *v9;
  *(float *)(this + 1800) = v9[1];
  *(float *)(this + 1804) = v9[2];
  v10 = *(_BYTE *)(this + 316);
  sub_10035C70(3, 0);
  *(float *)(this + 1236) = 1.0;
  *(_DWORD *)(this + 1192) = sub_1010F7B0(this, v6, this + 1248, *(_DWORD *)(this + 1260), a2, a3, a4, a5);
  sub_100349D0(this);
  sub_10036170(this);
  if ( *(_BYTE *)(this + 1240) && *(_DWORD *)(this + 1192) )
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 40))(this);
    sub_101F0B70(v11, v15, v16);
    (*(void (__thiscall **)(int, _DWORD, _BYTE *, int))(*(_DWORD *)this + 664))(
      this,
      *(_DWORD *)(*(_DWORD *)v6 + 156),
      v16,
      this + 1280);
  }
  sub_10035C70(v10, 0);
  *(_DWORD *)(this + 1644) = *(_DWORD *)(this + 1808);
  v12 = sub_10029CF0((_DWORD *)this, 25);
  if ( *(_DWORD *)(this + 1808) != v12 )
  {
    *(_DWORD *)(this + 1808) = v12;
    sub_1000F6C0(this, 8);
    if ( *(_BYTE *)(this + 1760) )
      sub_10029560((_DWORD *)this);
  }
  v13 = *(_DWORD *)(this + 1808);
  *(float *)(this + 1236) = 0.0;
  *(_DWORD *)(this + 1640) = v13;
  sub_10035E20(this);
  sub_10111B80(this);
  sub_10039310(this);
  return 1;
}
