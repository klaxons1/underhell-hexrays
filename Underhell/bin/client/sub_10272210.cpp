int __thiscall sub_10272210(int this)
{
  int v2; // eax
  int result; // eax
  double v4; // st7
  double v5; // st6
  bool v6; // cc
  int v7; // [esp+1Ch] [ebp-8h] BYREF
  int v8; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 236);
  if ( v2 )
    (*(void (__thiscall **)(int, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      *(_DWORD *)(this + 224),
      v2,
      1,
      0);
  result = (*(int (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
             dword_1047CA6C,
             *(_DWORD *)(this + 224),
             &v7,
             &v8);
  v4 = 0.0;
  if ( v7 <= 0 )
    v5 = 0.0;
  else
    v5 = (double)*(int *)(this + 212) / (double)v7;
  v6 = v8 <= 0;
  *(float *)(this + 228) = v5;
  if ( !v6 )
    v4 = (double)*(int *)(this + 208) / (double)v8;
  *(float *)(this + 232) = v4;
  return result;
}
