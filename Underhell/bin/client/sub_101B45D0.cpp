bool __thiscall sub_101B45D0(int this)
{
  int v2; // eax
  bool result; // al
  int v4; // ecx
  int v5; // edx

  v2 = sub_100422D0();
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 5180);
  result = (v4 > 0
         || (v5 = *(_DWORD *)(this + 320), v4 != v5)
         || *(_BYTE *)(v2 + 5188) != *(_BYTE *)(this + 328)
         || v5 > 0
         || *(_BYTE *)(this + 313))
        && sub_100B68D0((int *)this);
  return result;
}
