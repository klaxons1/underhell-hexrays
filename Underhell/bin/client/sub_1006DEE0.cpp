int __thiscall sub_1006DEE0(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( *(_BYTE *)(this + 1202) != *(_BYTE *)(this + 1201) || *(_DWORD *)(this + 1192) != *(_DWORD *)(this + 1196) )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
               dword_104131A8,
               "controlpoint_initialized",
               0);
    if ( result )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, result);
  }
  if ( *(_DWORD *)(this + 1204) != *(_DWORD *)(this + 1208) )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
               dword_104131A8,
               "controlpoint_updateimages",
               0);
    v4 = result;
    if ( result )
    {
      (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "index", -1);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v4);
    }
  }
  v5 = 0;
  if ( *(int *)(this + 1192) > 0 )
  {
    v6 = this + 1316;
    do
    {
      v7 = *(float *)(v6 + 32);
      v9 = *(float *)v6;
      v10 = v9 < v7;
      v11 = 0;
      v12 = v9 == v7;
      LOWORD(result) = v8;
      if ( v9 != v7 )
      {
        result = v5 + 8 * *(_DWORD *)(v6 + 4544);
        *(float *)(v6 + 4648) = *(float *)(this + 4 * result + 2148) * *(float *)v6;
      }
      ++v5;
      v6 += 4;
    }
    while ( v5 < *(_DWORD *)(this + 1192) );
  }
  return result;
}
