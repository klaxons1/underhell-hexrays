int __thiscall sub_1041E040(int this)
{
  int result; // eax
  int v3; // ecx
  float *v4; // edi
  int i; // edi
  int v6[3]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+1Ch] [ebp-8h]
  int v8; // [esp+20h] [ebp-4h]

  result = *(_DWORD *)(this + 528);
  if ( result >= 0 && result < *(_DWORD *)(this + 116) )
  {
    v3 = *(_DWORD *)(this + 104);
    memset(v6, 0, sizeof(v6));
    v7 = 0;
    v8 = 0;
    v4 = *(float **)(v3 + 4 * result);
    sub_10418510(v4);
    sub_1041A7B0(v4, v6);
    for ( i = 0; i < v7; ++i )
      sub_10418760(
        *(_BYTE **)(v6[0] + 4 * i),
        *(int (__stdcall ****)(_DWORD, int, _BYTE *))(this + 160),
        this,
        *(float *)(this + 124));
    result = sub_102375F0(v6);
  }
  *(_DWORD *)(this + 528) = -1;
  *(_DWORD *)(this + 96) = 0;
  return result;
}
