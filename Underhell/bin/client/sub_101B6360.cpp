int __thiscall sub_101B6360(float *this, int a2)
{
  double v3; // st7
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  sub_10241570(a2);
  (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 264))(this, 0);
  sub_10236170(&v5, &v7);
  sub_10132120((int)&v6, (int)&a2);
  if ( *(_DWORD *)(dword_1043CA1C + 48) != 3 )
    return sub_10236200(v5, v7, v6 - v5, a2 - v7);
  v3 = this[68] * 4.0 + this[60] * 5.0;
  return sub_10236200((v6 - (int)v3) / 2, v7, (int)v3, a2 - v7);
}
