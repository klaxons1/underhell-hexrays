int __thiscall sub_1004BB80(char *this)
{
  int v1; // ebx
  void *v2; // esp
  int result; // eax
  int i; // ecx
  int v5; // edi
  _DWORD v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = sub_100EB1D0(this + 1964);
  v2 = alloca(4 * v1);
  result = sub_100ED200(v1, v6);
  for ( i = 0; i < result; *(_DWORD *)(v5 + 24) = -1 )
    v5 = v6[i++];
  return result;
}
